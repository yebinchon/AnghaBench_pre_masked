
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udmabuf {int pagecount; int pages; } ;
struct sg_table {int nents; int sgl; } ;
struct dma_buf_attachment {int dev; TYPE_1__* dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {struct udmabuf* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct sg_table*) ;
 struct sg_table* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sg_table*,int ,int,int ,int,int ) ;
 int FUNC_5 (struct sg_table*) ;

__attribute__((used)) static struct sg_table *FUNC_6(struct dma_buf_attachment *VAR_4,
        enum dma_data_direction VAR_5)
{
 struct udmabuf *VAR_6 = VAR_4->dmabuf->priv;
 struct sg_table *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);
 VAR_8 = FUNC_4(VAR_7, VAR_6->pages, VAR_6->pagecount,
     0, VAR_6->pagecount << VAR_3,
     VAR_2);
 if (VAR_8 < 0)
  goto err;
 if (!FUNC_1(VAR_4->dev, VAR_7->sgl, VAR_7->nents, VAR_5)) {
  VAR_8 = -VAR_0;
  goto err;
 }
 return VAR_7;

err:
 FUNC_5(VAR_7);
 FUNC_2(VAR_7);
 return FUNC_0(VAR_8);
}
