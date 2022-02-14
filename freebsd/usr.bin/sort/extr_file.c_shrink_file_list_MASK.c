
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_list {size_t count; int tmp; int sz; int * fns; } ;


 int FUNC_0 (struct file_list*,char*,int) ;
 int FUNC_1 (struct file_list*) ;
 int FUNC_2 (struct file_list*,int) ;
 size_t VAR_0 ;
 int FUNC_3 (size_t,int *,char*) ;
 char* FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct file_list *VAR_1)
{

 if ((VAR_1 == ((void*)0)) || (size_t) (VAR_1->count) < VAR_0)
  return (0);
 else {
  struct file_list VAR_2;
  size_t VAR_3 = 0;

  FUNC_2(&VAR_2, 1);
  while (VAR_3 < VAR_1->count) {
   char *VAR_4;
   size_t VAR_5;

   VAR_5 = VAR_1->count - VAR_3;
   VAR_4 = FUNC_4();

   if ((size_t) VAR_5 >= VAR_0)
    VAR_5 = VAR_0 - 1;
   FUNC_3(VAR_5, VAR_1->fns + VAR_3, VAR_4);
   if (VAR_1->tmp) {
    size_t VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
     FUNC_5(VAR_1->fns[VAR_3 + VAR_6]);
   }
   FUNC_0(&VAR_2, VAR_4, 0);
   VAR_3 += VAR_5;
  }
  VAR_1->tmp = 0;
  FUNC_1(VAR_1);

  VAR_1->count = VAR_2.count;
  VAR_1->fns = VAR_2.fns;
  VAR_1->sz = VAR_2.sz;
  VAR_1->tmp = VAR_2.tmp;

  return (1);
 }
}
