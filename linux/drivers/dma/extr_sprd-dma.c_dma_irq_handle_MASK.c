
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sprd_dma_dev {struct sprd_dma_chn* channels; scalar_t__ glb_base; } ;
struct sprd_dma_desc {int vd; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {scalar_t__ phy_addr; } ;
struct sprd_dma_chn {TYPE_2__ vc; struct sprd_dma_desc* cur_desc; TYPE_1__ linklist; } ;
typedef int irqreturn_t ;
typedef enum sprd_dma_req_mode { ____Placeholder_sprd_dma_req_mode } sprd_dma_req_mode ;
typedef enum sprd_dma_int_type { ____Placeholder_sprd_dma_int_type } sprd_dma_int_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sprd_dma_desc*,int,int) ;
 int FUNC_5 (struct sprd_dma_chn*) ;
 int FUNC_6 (struct sprd_dma_chn*) ;
 int FUNC_7 (struct sprd_dma_chn*) ;
 int FUNC_8 (struct sprd_dma_chn*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_2, void *VAR_3)
{
 struct sprd_dma_dev *VAR_4 = (struct sprd_dma_dev *)VAR_3;
 u32 VAR_5 = FUNC_1(VAR_4->glb_base + VAR_1);
 struct sprd_dma_chn *VAR_6;
 struct sprd_dma_desc *VAR_7;
 enum sprd_dma_req_mode VAR_8;
 enum sprd_dma_int_type VAR_9;
 bool VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12;

 while (VAR_5) {
  VAR_12 = FUNC_0(VAR_5);
  VAR_5 &= (VAR_5 - 1);
  VAR_6 = &VAR_4->channels[VAR_12];

  FUNC_2(&VAR_6->vc.lock);

  VAR_7 = VAR_6->cur_desc;
  if (!VAR_7) {
   FUNC_3(&VAR_6->vc.lock);
   return VAR_0;
  }

  VAR_9 = FUNC_6(VAR_6);
  VAR_8 = FUNC_7(VAR_6);
  FUNC_5(VAR_6);


  VAR_11 = VAR_6->linklist.phy_addr ? 1 : 0;
  if (VAR_11 == 1) {
   FUNC_10(&VAR_7->vd);
  } else {

   VAR_10 = FUNC_4(VAR_7, VAR_9,
              VAR_8);
   if (VAR_10 == 1) {
    FUNC_9(&VAR_7->vd);
    VAR_6->cur_desc = ((void*)0);
    FUNC_8(VAR_6);
   }
  }
  FUNC_3(&VAR_6->vc.lock);
 }

 return VAR_0;
}
