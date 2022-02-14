
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btusb_data {int ctrl_anchor; int diag_anchor; int isoc_anchor; int bulk_anchor; int intr_anchor; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct btusb_data *VAR_0)
{
 FUNC_0(&VAR_0->intr_anchor);
 FUNC_0(&VAR_0->bulk_anchor);
 FUNC_0(&VAR_0->isoc_anchor);
 FUNC_0(&VAR_0->diag_anchor);
 FUNC_0(&VAR_0->ctrl_anchor);
}
