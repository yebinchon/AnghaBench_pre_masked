
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refcnt; int commit; int blob; struct TYPE_4__* previous; } ;
typedef TYPE_1__ git_blame__origin ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(git_blame__origin *VAR_0)
{
 if (VAR_0 && --VAR_0->refcnt <= 0) {
  if (VAR_0->previous)
   FUNC_3(VAR_0->previous);
  FUNC_1(VAR_0->blob);
  FUNC_2(VAR_0->commit);
  FUNC_0(VAR_0);
 }
}
