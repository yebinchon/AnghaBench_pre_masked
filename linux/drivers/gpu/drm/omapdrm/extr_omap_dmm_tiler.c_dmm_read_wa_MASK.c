
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dmm {scalar_t__ wa_dma_data; scalar_t__ base; int dev; scalar_t__ wa_dma_handle; scalar_t__ phys_base; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dmm*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;

__attribute__((used)) static u32 FUNC_4(struct dmm *VAR_0, u32 VAR_1)
{
 dma_addr_t VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = VAR_0->phys_base + VAR_1;
 VAR_3 = VAR_0->wa_dma_handle;

 VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "sDMA read transfer timeout\n");
  return FUNC_2(VAR_0->base + VAR_1);
 }






 FUNC_3();
 return FUNC_2(VAR_0->wa_dma_data);
}
