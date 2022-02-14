
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_mdma_desc_node {TYPE_1__* hwdesc; int hwdesc_phys; } ;
struct stm32_mdma_chan {int dummy; } ;
struct TYPE_2__ {int * cmdr; int * cmar; int * ctbr; int * clar; int * cbrur; int * cdar; int * csar; int * cbndtr; int * ctcr; } ;


 int FUNC_0 (struct stm32_mdma_chan*) ;
 int FUNC_1 (int ,char*,int *) ;

__attribute__((used)) static void FUNC_2(struct stm32_mdma_chan *VAR_0,
       struct stm32_mdma_desc_node *VAR_1)
{
 FUNC_1(FUNC_0(VAR_0), "hwdesc:  %pad\n", &VAR_1->hwdesc_phys);
 FUNC_1(FUNC_0(VAR_0), "CTCR:    0x%08x\n", VAR_1->hwdesc->ctcr);
 FUNC_1(FUNC_0(VAR_0), "CBNDTR:  0x%08x\n", VAR_1->hwdesc->cbndtr);
 FUNC_1(FUNC_0(VAR_0), "CSAR:    0x%08x\n", VAR_1->hwdesc->csar);
 FUNC_1(FUNC_0(VAR_0), "CDAR:    0x%08x\n", VAR_1->hwdesc->cdar);
 FUNC_1(FUNC_0(VAR_0), "CBRUR:   0x%08x\n", VAR_1->hwdesc->cbrur);
 FUNC_1(FUNC_0(VAR_0), "CLAR:    0x%08x\n", VAR_1->hwdesc->clar);
 FUNC_1(FUNC_0(VAR_0), "CTBR:    0x%08x\n", VAR_1->hwdesc->ctbr);
 FUNC_1(FUNC_0(VAR_0), "CMAR:    0x%08x\n", VAR_1->hwdesc->cmar);
 FUNC_1(FUNC_0(VAR_0), "CMDR:    0x%08x\n\n", VAR_1->hwdesc->cmdr);
}
