
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int * dbgname; int * dbgdir; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct vas_window *VAR_0)
{
 if (VAR_0->dbgdir) {
  FUNC_0(VAR_0->dbgdir);
  FUNC_1(VAR_0->dbgname);
  VAR_0->dbgdir = ((void*)0);
  VAR_0->dbgname = ((void*)0);
 }
}
