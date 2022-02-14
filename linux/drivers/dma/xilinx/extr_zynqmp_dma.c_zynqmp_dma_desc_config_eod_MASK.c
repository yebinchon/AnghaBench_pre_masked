
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zynqmp_dma_desc_ll {int ctrl; } ;
struct zynqmp_dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct zynqmp_dma_chan *VAR_2,
           void *VAR_3)
{
 struct zynqmp_dma_desc_ll *VAR_4 = (struct zynqmp_dma_desc_ll *)VAR_3;

 VAR_4->ctrl |= VAR_1;
 VAR_4++;
 VAR_4->ctrl |= VAR_0 | VAR_1;
}
