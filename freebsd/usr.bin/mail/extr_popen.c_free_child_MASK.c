
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct child {int free; scalar_t__ done; } ;
typedef int sigset_t ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct child*) ;
 struct child* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;

void
FUNC_5(pid_t VAR_3)
{
 struct child *VAR_4;
 sigset_t VAR_5, VAR_6;

 (void)FUNC_3(&VAR_5);
 (void)FUNC_2(&VAR_5, VAR_0);
 (void)FUNC_4(VAR_1, &VAR_5, &VAR_6);
 if ((VAR_4 = FUNC_1(VAR_3, 0)) != ((void*)0)) {
  if (VAR_4->done)
   FUNC_0(VAR_4);
  else
   VAR_4->free = 1;
 }
 (void)FUNC_4(VAR_2, &VAR_6, ((void*)0));
}
