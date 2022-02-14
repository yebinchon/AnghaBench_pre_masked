
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sta2x11_mapping {int amba_base; } ;
struct TYPE_2__ {int is_sta2x11; } ;
struct device {int* dma_mask; TYPE_1__ archdata; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 struct sta2x11_mapping* FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;

bool FUNC_2(struct device *VAR_1, dma_addr_t VAR_2, size_t VAR_3)
{
 struct sta2x11_mapping *VAR_4;

 if (!VAR_1->archdata.is_sta2x11) {
  if (!VAR_1->dma_mask)
   return 0;
  return VAR_2 + VAR_3 - 1 <= *VAR_1->dma_mask;
 }

 VAR_4 = FUNC_0(FUNC_1(VAR_1));

 if (!VAR_4 || (VAR_2 < VAR_4->amba_base))
  return 0;
 if (VAR_2 + VAR_3 >= VAR_4->amba_base + VAR_0) {
  return 0;
 }

 return 1;
}
