
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dc_buf {int dev; int attrs; int size; int dma_addr; int cookie; } ;
struct sg_table {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct sg_table*,int ,int ,int ,int ) ;
 int FUNC_2 (struct sg_table*) ;
 struct sg_table* FUNC_3 (int,int ) ;

__attribute__((used)) static struct sg_table *FUNC_4(struct vb2_dc_buf *VAR_1)
{
 int VAR_2;
 struct sg_table *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_0(VAR_1->dev, "failed to alloc sg table\n");
  return ((void*)0);
 }

 VAR_2 = FUNC_1(VAR_1->dev, VAR_3, VAR_1->cookie, VAR_1->dma_addr,
  VAR_1->size, VAR_1->attrs);
 if (VAR_2 < 0) {
  FUNC_0(VAR_1->dev, "failed to get scatterlist from DMA API\n");
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
