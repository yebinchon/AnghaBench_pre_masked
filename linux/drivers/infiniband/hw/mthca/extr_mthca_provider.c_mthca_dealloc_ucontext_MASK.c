
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_ucontext {int device; } ;
struct TYPE_2__ {int uar; int db_tab; } ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct ib_ucontext*) ;

__attribute__((used)) static void FUNC_4(struct ib_ucontext *VAR_0)
{
 FUNC_0(FUNC_2(VAR_0->device), &FUNC_3(VAR_0)->uar,
      FUNC_3(VAR_0)->db_tab);
 FUNC_1(FUNC_2(VAR_0->device), &FUNC_3(VAR_0)->uar);
}
