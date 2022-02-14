
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msi_msg {int data; int address_hi; int address_lo; } ;
struct TYPE_2__ {size_t msi_index; } ;
struct msi_desc {TYPE_1__ platform; } ;
struct flexrm_ring {scalar_t__ regs; } ;
struct flexrm_mbox {struct flexrm_ring* rings; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct flexrm_mbox* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct msi_desc*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msi_desc *VAR_3, struct msi_msg *VAR_4)
{
 struct device *VAR_5 = FUNC_1(VAR_3);
 struct flexrm_mbox *VAR_6 = FUNC_0(VAR_5);
 struct flexrm_ring *VAR_7 = &VAR_6->rings[VAR_3->platform.msi_index];


 FUNC_2(VAR_4->address_lo, VAR_7->regs + VAR_0);
 FUNC_2(VAR_4->address_hi, VAR_7->regs + VAR_1);
 FUNC_2(VAR_4->data, VAR_7->regs + VAR_2);
}
