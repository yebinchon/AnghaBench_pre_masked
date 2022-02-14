
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clockdomain {int clkdm_offs; int cm_inst; int context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct clockdomain *VAR_1)
{
 VAR_1->context = FUNC_0(VAR_1->cm_inst,
       VAR_1->clkdm_offs,
       VAR_0);

 return 0;
}
