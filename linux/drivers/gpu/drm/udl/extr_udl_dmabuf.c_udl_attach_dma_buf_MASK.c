
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udl_drm_dmabuf_attachment {int dir; } ;
struct dma_buf_attachment {struct udl_drm_dmabuf_attachment* priv; TYPE_1__* dmabuf; int dev; } ;
struct dma_buf {int dummy; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct udl_drm_dmabuf_attachment* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct dma_buf *VAR_3,
         struct dma_buf_attachment *VAR_4)
{
 struct udl_drm_dmabuf_attachment *VAR_5;

 FUNC_0("[DEV:%s] size:%zd\n", FUNC_1(VAR_4->dev),
   VAR_4->dmabuf->size);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->dir = VAR_0;
 VAR_4->priv = VAR_5;

 return 0;
}
