
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sg_table {int nents; int orig_nents; int sgl; } ;
struct vb2_dc_attachment {int dma_dir; struct sg_table sgt; } ;
struct mutex {int dummy; } ;
struct dma_buf_attachment {int dev; TYPE_1__* dmabuf; struct vb2_dc_attachment* priv; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct mutex lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sg_table* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct mutex*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct sg_table *FUNC_6(
 struct dma_buf_attachment *VAR_3, enum dma_data_direction VAR_4)
{
 struct vb2_dc_attachment *VAR_5 = VAR_3->priv;

 struct mutex *VAR_6 = &VAR_3->dmabuf->lock;
 struct sg_table *VAR_7;

 FUNC_3(VAR_6);

 VAR_7 = &VAR_5->sgt;

 if (VAR_5->dma_dir == VAR_4) {
  FUNC_4(VAR_6);
  return VAR_7;
 }


 if (VAR_5->dma_dir != VAR_1) {
  FUNC_2(VAR_3->dev, VAR_7->sgl, VAR_7->orig_nents,
       VAR_5->dma_dir, VAR_0);
  VAR_5->dma_dir = VAR_1;
 }





 VAR_7->nents = FUNC_1(VAR_3->dev, VAR_7->sgl, VAR_7->orig_nents,
          VAR_4, VAR_0);
 if (!VAR_7->nents) {
  FUNC_5("failed to map scatterlist\n");
  FUNC_4(VAR_6);
  return FUNC_0(-VAR_2);
 }

 VAR_5->dma_dir = VAR_4;

 FUNC_4(VAR_6);

 return VAR_7;
}
