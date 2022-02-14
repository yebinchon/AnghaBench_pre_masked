
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct drm_gem_object {struct dma_buf_attachment* import_attach; } ;
struct dma_buf_attachment {struct dma_buf* dmabuf; } ;
struct dma_buf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dma_buf*,struct dma_buf_attachment*) ;
 int FUNC_1 (struct dma_buf*) ;
 int FUNC_2 (struct dma_buf_attachment*,struct sg_table*,int ) ;

void FUNC_3(struct drm_gem_object *VAR_1, struct sg_table *VAR_2)
{
 struct dma_buf_attachment *VAR_3;
 struct dma_buf *VAR_4;
 VAR_3 = VAR_1->import_attach;
 if (VAR_2)
  FUNC_2(VAR_3, VAR_2, VAR_0);
 VAR_4 = VAR_3->dmabuf;
 FUNC_0(VAR_3->dmabuf, VAR_3);

 FUNC_1(VAR_4);
}
