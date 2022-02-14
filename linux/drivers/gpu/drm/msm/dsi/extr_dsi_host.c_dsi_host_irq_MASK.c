
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_dsi_host {int dma_comp; int video_comp; int id; int intr_lock; int ctrl_base; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct msm_dsi_host*) ;
 int FUNC_3 (struct msm_dsi_host*,int ) ;
 int FUNC_4 (struct msm_dsi_host*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct msm_dsi_host *VAR_7 = VAR_6;
 u32 VAR_8;
 unsigned long VAR_9;

 if (!VAR_7->ctrl_base)
  return VAR_3;

 FUNC_5(&VAR_7->intr_lock, VAR_9);
 VAR_8 = FUNC_3(VAR_7, VAR_4);
 FUNC_4(VAR_7, VAR_4, VAR_8);
 FUNC_6(&VAR_7->intr_lock, VAR_9);

 FUNC_0("isr=0x%x, id=%d", VAR_8, VAR_7->id);

 if (VAR_8 & VAR_1)
  FUNC_2(VAR_7);

 if (VAR_8 & VAR_2)
  FUNC_1(&VAR_7->video_comp);

 if (VAR_8 & VAR_0)
  FUNC_1(&VAR_7->dma_comp);

 return VAR_3;
}
