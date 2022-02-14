
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int dummy; } ;
struct ib_pd {int device; } ;
struct TYPE_2__ {int pdn; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct ib_pd*) ;

void FUNC_3(struct ib_pd *VAR_0, struct ib_udata *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0->device), FUNC_2(VAR_0)->pdn);
}
