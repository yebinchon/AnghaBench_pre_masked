
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ptr; } ;
struct clockdomain {TYPE_2__ pwrdm; } ;
struct TYPE_3__ {int prcm_offs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

int FUNC_1(struct clockdomain *VAR_2)
{
 FUNC_0(VAR_0,
       VAR_2->pwrdm.ptr->prcm_offs,
       VAR_1);
 return 0;
}
