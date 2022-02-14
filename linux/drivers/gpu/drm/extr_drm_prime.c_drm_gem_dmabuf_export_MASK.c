
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;
struct dma_buf_export_info {int priv; } ;
struct dma_buf {int dummy; } ;


 scalar_t__ FUNC_0 (struct dma_buf*) ;
 struct dma_buf* FUNC_1 (struct dma_buf_export_info*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;

struct dma_buf *FUNC_4(struct drm_device *VAR_0,
          struct dma_buf_export_info *VAR_1)
{
 struct dma_buf *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_2))
  return VAR_2;

 FUNC_2(VAR_0);
 FUNC_3(VAR_1->priv);

 return VAR_2;
}
