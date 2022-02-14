
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sprd_dma_dev {scalar_t__ glb_base; } ;
struct TYPE_2__ {int chan; } ;
struct sprd_dma_chn {scalar_t__ dev_id; scalar_t__ chn_num; TYPE_1__ vc; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct sprd_dma_dev* FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct sprd_dma_chn *VAR_2)
{
 struct sprd_dma_dev *VAR_3 = FUNC_1(&VAR_2->vc.chan);
 u32 VAR_4 = VAR_2->dev_id;

 if (VAR_4 != VAR_1) {
  u32 VAR_5 = VAR_0 +
     FUNC_0(VAR_4);

  FUNC_2(VAR_2->chn_num + 1, VAR_3->glb_base + VAR_5);
 }
}
