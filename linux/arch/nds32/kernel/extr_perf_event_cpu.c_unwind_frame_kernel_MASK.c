
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stackframe {unsigned long fp; unsigned long lp; unsigned long* sp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 void* FUNC_1 (int *,int*,unsigned long,int *) ;
 int FUNC_2 (void*) ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_3(struct stackframe *VAR_4)
{
 int VAR_5 = 0;
 if (!FUNC_2((void *)VAR_4->sp)) {
  VAR_4->lp = ((unsigned long *)VAR_4->sp)[1];



  if (FUNC_0(VAR_4->lp))
   VAR_4->lp = FUNC_1
      (VAR_3, &VAR_5, VAR_4->lp, ((void*)0));

  VAR_4->sp = ((unsigned long *)VAR_4->sp) + 1;

  return 0;
 } else {
  return -VAR_0;
 }

}
