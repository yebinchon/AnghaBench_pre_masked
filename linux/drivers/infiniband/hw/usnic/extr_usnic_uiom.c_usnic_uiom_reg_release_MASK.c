
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usnic_uiom_reg {TYPE_1__* owning_mm; int pd; } ;
struct TYPE_2__ {int pinned_vm; } ;


 int FUNC_0 (int ,struct usnic_uiom_reg*,int) ;
 int FUNC_1 (struct usnic_uiom_reg*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct usnic_uiom_reg*) ;

void FUNC_4(struct usnic_uiom_reg *VAR_0)
{
 FUNC_0(VAR_0->pd, VAR_0, 1);

 FUNC_2(FUNC_3(VAR_0), &VAR_0->owning_mm->pinned_vm);
 FUNC_1(VAR_0);
}
