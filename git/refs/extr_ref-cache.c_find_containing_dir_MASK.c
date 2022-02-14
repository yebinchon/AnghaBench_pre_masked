
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_dir {int dummy; } ;


 struct ref_dir* FUNC_0 (struct ref_dir*,char const*,size_t,int) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static struct ref_dir *FUNC_2(struct ref_dir *VAR_0,
        const char *VAR_1, int VAR_2)
{
 const char *VAR_3;
 for (VAR_3 = FUNC_1(VAR_1, '/'); VAR_3; VAR_3 = FUNC_1(VAR_3 + 1, '/')) {
  size_t VAR_4 = VAR_3 - VAR_1 + 1;
  struct ref_dir *VAR_5;
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2);
  if (!VAR_5) {
   VAR_0 = ((void*)0);
   break;
  }
  VAR_0 = VAR_5;
 }

 return VAR_0;
}
