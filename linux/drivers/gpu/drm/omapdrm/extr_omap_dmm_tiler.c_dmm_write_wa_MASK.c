
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dmm {scalar_t__ base; int dev; scalar_t__ phys_base; scalar_t__ wa_dma_handle; scalar_t__ wa_dma_data; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dmm*,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dmm *VAR_0, u32 VAR_1, u32 VAR_2)
{
 dma_addr_t VAR_3, VAR_4;
 int VAR_5;

 FUNC_3(VAR_1, VAR_0->wa_dma_data);






 FUNC_2();

 VAR_3 = VAR_0->wa_dma_handle;
 VAR_4 = VAR_0->phys_base + VAR_2;

 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_0->dev, "sDMA write transfer timeout\n");
  FUNC_3(VAR_1, VAR_0->base + VAR_2);
 }
}
