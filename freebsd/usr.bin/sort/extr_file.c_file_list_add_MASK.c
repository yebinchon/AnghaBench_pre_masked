
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {size_t count; size_t sz; char const** fns; } ;


 char const** FUNC_0 (char const**,int) ;
 char const* FUNC_1 (char const*) ;

void
FUNC_2(struct file_list *VAR_0, const char *VAR_1, bool VAR_2)
{

 if (VAR_0 && VAR_1) {
  if (VAR_0->count >= VAR_0->sz || (VAR_0->fns == ((void*)0))) {
   VAR_0->sz = (VAR_0->sz) * 2 + 1;
   VAR_0->fns = FUNC_0(VAR_0->fns, VAR_0->sz *
       sizeof(char *));
  }
  VAR_0->fns[VAR_0->count] = VAR_2 ? FUNC_1(VAR_1) : VAR_1;
  VAR_0->count += 1;
 }
}
