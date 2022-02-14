
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int size; struct drm_device* dev; } ;
struct udl_gem_object {TYPE_3__* sg; int pages; TYPE_2__ base; } ;
struct sg_table {unsigned int orig_nents; struct scatterlist* sgl; } ;
struct udl_drm_dmabuf_attachment {int dir; int is_mapped; struct sg_table sgt; } ;
struct udl_device {int gem_lock; } ;
struct scatterlist {int offset; int length; } ;
struct drm_device {struct udl_device* dev_private; } ;
struct dma_buf_attachment {struct udl_drm_dmabuf_attachment* priv; int dev; TYPE_1__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {struct scatterlist* sgl; int orig_nents; } ;
struct TYPE_6__ {int size; int priv; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sg_table* FUNC_2 (TYPE_3__*) ;
 struct sg_table* FUNC_3 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct scatterlist*,unsigned int,int) ;
 TYPE_3__* FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sg_table*,int ,int ) ;
 int FUNC_11 (struct sg_table*) ;
 struct scatterlist* FUNC_12 (struct scatterlist*) ;
 int FUNC_13 (struct scatterlist*) ;
 int FUNC_14 (struct scatterlist*,int ,int ,int ) ;
 struct udl_gem_object* FUNC_15 (int ) ;
 int FUNC_16 (struct udl_gem_object*) ;

__attribute__((used)) static struct sg_table *FUNC_17(struct dma_buf_attachment *VAR_5,
     enum dma_data_direction VAR_6)
{
 struct udl_drm_dmabuf_attachment *VAR_7 = VAR_5->priv;
 struct udl_gem_object *VAR_8 = FUNC_15(VAR_5->dmabuf->priv);
 struct drm_device *VAR_9 = VAR_8->base.dev;
 struct udl_device *VAR_10 = VAR_9->dev_private;
 struct scatterlist *VAR_11, *VAR_12;
 struct sg_table *VAR_13 = ((void*)0);
 unsigned int VAR_14;
 int VAR_15;
 int VAR_16, VAR_17;

 FUNC_0("[DEV:%s] size:%zd dir=%d\n", FUNC_5(VAR_5->dev),
   VAR_5->dmabuf->size, VAR_6);


 if (VAR_7->dir == VAR_6 && VAR_7->is_mapped)
  return &VAR_7->sgt;

 if (!VAR_8->pages) {
  VAR_17 = FUNC_16(VAR_8);
  if (VAR_17) {
   FUNC_1("failed to map pages.\n");
   return FUNC_3(VAR_17);
  }
 }

 VAR_15 = VAR_8->base.size / VAR_4;
 VAR_8->sg = FUNC_7(VAR_8->pages, VAR_15);
 if (FUNC_4(VAR_8->sg)) {
  FUNC_1("failed to allocate sgt.\n");
  return FUNC_2(VAR_8->sg);
 }

 VAR_13 = &VAR_7->sgt;

 VAR_17 = FUNC_10(VAR_13, VAR_8->sg->orig_nents, VAR_3);
 if (VAR_17) {
  FUNC_1("failed to alloc sgt.\n");
  return FUNC_3(-VAR_2);
 }

 FUNC_8(&VAR_10->gem_lock);

 VAR_11 = VAR_8->sg->sgl;
 VAR_12 = VAR_13->sgl;
 for (VAR_14 = 0; VAR_14 < VAR_13->orig_nents; ++VAR_14) {
  FUNC_14(VAR_12, FUNC_13(VAR_11), VAR_11->length, VAR_11->offset);
  VAR_11 = FUNC_12(VAR_11);
  VAR_12 = FUNC_12(VAR_12);
 }

 if (VAR_6 != VAR_0) {
  VAR_16 = FUNC_6(VAR_5->dev, VAR_13->sgl, VAR_13->orig_nents, VAR_6);
  if (!VAR_16) {
   FUNC_1("failed to map sgl with iommu.\n");
   FUNC_11(VAR_13);
   VAR_13 = FUNC_3(-VAR_1);
   goto err_unlock;
  }
 }

 VAR_7->is_mapped = 1;
 VAR_7->dir = VAR_6;
 VAR_5->priv = VAR_7;

err_unlock:
 FUNC_9(&VAR_10->gem_lock);
 return VAR_13;
}
