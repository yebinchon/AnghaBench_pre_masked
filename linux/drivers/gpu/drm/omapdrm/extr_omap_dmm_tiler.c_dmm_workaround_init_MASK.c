
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dmm {int wa_dma_handle; int wa_dma_data; int dev; int wa_dma_chan; int wa_lock; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct dmm *VAR_4)
{
 dma_cap_mask_t VAR_5;

 FUNC_5(&VAR_4->wa_lock);

 VAR_4->wa_dma_data = FUNC_0(VAR_4->dev, sizeof(u32),
           &VAR_4->wa_dma_handle, VAR_3);
 if (!VAR_4->wa_dma_data)
  return -VAR_2;

 FUNC_2(VAR_5);
 FUNC_1(VAR_0, VAR_5);

 VAR_4->wa_dma_chan = FUNC_4(VAR_5, ((void*)0), ((void*)0));
 if (!VAR_4->wa_dma_chan) {
  FUNC_3(VAR_4->dev, 4, VAR_4->wa_dma_data, VAR_4->wa_dma_handle);
  return -VAR_1;
 }

 return 0;
}
