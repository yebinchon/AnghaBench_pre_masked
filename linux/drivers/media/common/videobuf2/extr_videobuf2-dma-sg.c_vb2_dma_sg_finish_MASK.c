
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dma_sg_buf {int dma_dir; int dev; scalar_t__ db_attach; struct sg_table* dma_sgt; } ;
struct sg_table {int orig_nents; int sgl; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct vb2_dma_sg_buf *VAR_1 = VAR_0;
 struct sg_table *VAR_2 = VAR_1->dma_sgt;


 if (VAR_1->db_attach)
  return;

 FUNC_0(VAR_1->dev, VAR_2->sgl, VAR_2->orig_nents, VAR_1->dma_dir);
}
