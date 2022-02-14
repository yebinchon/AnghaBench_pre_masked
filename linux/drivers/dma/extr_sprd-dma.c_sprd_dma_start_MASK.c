
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int node; } ;
struct sprd_dma_chn {scalar_t__ chn_mode; scalar_t__ dev_id; int cur_desc; int vc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sprd_dma_chn*) ;
 scalar_t__ FUNC_2 (struct sprd_dma_chn*) ;
 int FUNC_3 (struct sprd_dma_chn*,int ) ;
 int FUNC_4 (struct sprd_dma_chn*) ;
 int FUNC_5 (struct sprd_dma_chn*) ;
 int FUNC_6 (struct virt_dma_desc*) ;
 struct virt_dma_desc* FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct sprd_dma_chn *VAR_3)
{
 struct virt_dma_desc *VAR_4 = FUNC_7(&VAR_3->vc);

 if (!VAR_4)
  return;

 FUNC_0(&VAR_4->node);
 VAR_3->cur_desc = FUNC_6(VAR_4);





 if (VAR_3->chn_mode && FUNC_2(VAR_3))
  return;





 FUNC_3(VAR_3, VAR_3->cur_desc);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3);

 if (VAR_3->dev_id == VAR_2 &&
     VAR_3->chn_mode != VAR_0 &&
     VAR_3->chn_mode != VAR_1)
  FUNC_5(VAR_3);
}
