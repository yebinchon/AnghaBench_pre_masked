
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conninfo {scalar_t__ co_numchild; struct conninfo* co_proc; } ;


 int FUNC_0 (struct conninfo*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct conninfo*) ;

__attribute__((used)) static void
FUNC_2(struct conninfo *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->co_numchild <= 0) {
  FUNC_0(VAR_1, VAR_0);
  FUNC_1(VAR_1->co_proc);
  FUNC_1(VAR_1);
 }
}
