
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int sgl; } ;
struct dma_buf_attachment {int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (struct sg_table*) ;
 int FUNC_2 (struct sg_table*) ;

void FUNC_3(struct dma_buf_attachment *VAR_1,
      struct sg_table *VAR_2,
      enum dma_data_direction VAR_3)
{
 if (!VAR_2)
  return;

 FUNC_0(VAR_1->dev, VAR_2->sgl, VAR_2->nents, VAR_3,
      VAR_0);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
