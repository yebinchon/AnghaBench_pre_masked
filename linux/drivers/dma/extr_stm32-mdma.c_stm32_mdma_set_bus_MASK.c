
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_mdma_device {int nr_ahb_addr_masks; int* ahb_addr_masks; } ;



__attribute__((used)) static void FUNC_0(struct stm32_mdma_device *VAR_0, u32 *VAR_1,
          u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 int VAR_5;


 *VAR_1 &= ~VAR_2;
 VAR_4 = VAR_3 & 0xF0000000;
 for (VAR_5 = 0; VAR_5 < VAR_0->nr_ahb_addr_masks; VAR_5++) {
  if (VAR_4 == VAR_0->ahb_addr_masks[VAR_5]) {
   *VAR_1 |= VAR_2;
   break;
  }
 }
}
