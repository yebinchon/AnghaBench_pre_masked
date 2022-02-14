
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; struct scatterlist* sgl; } ;
struct scatterlist {int dummy; } ;
struct mock_dmabuf {int npages; int * pages; } ;
struct dma_buf_attachment {int dev; int dmabuf; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 struct sg_table* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct scatterlist*,int ,int) ;
 int FUNC_2 (struct sg_table*) ;
 struct sg_table* FUNC_3 (int,int ) ;
 int FUNC_4 (struct sg_table*,int,int ) ;
 int FUNC_5 (struct sg_table*) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*,int ,int ,int ) ;
 struct mock_dmabuf* FUNC_8 (int ) ;

__attribute__((used)) static struct sg_table *FUNC_9(struct dma_buf_attachment *VAR_3,
      enum dma_data_direction VAR_4)
{
 struct mock_dmabuf *VAR_5 = FUNC_8(VAR_3->dmabuf);
 struct sg_table *VAR_6;
 struct scatterlist *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_4(VAR_6, VAR_5->npages, VAR_1);
 if (VAR_9)
  goto err_free;

 VAR_7 = VAR_6->sgl;
 for (VAR_8 = 0; VAR_8 < VAR_5->npages; VAR_8++) {
  FUNC_7(VAR_7, VAR_5->pages[VAR_8], VAR_2, 0);
  VAR_7 = FUNC_6(VAR_7);
 }

 if (!FUNC_1(VAR_3->dev, VAR_6->sgl, VAR_6->nents, VAR_4)) {
  VAR_9 = -VAR_0;
  goto err_st;
 }

 return VAR_6;

err_st:
 FUNC_5(VAR_6);
err_free:
 FUNC_2(VAR_6);
 return FUNC_0(VAR_9);
}
