
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dma_sg_buf {int dma_sgt; int * vaddr; int dma_dir; int db_attach; } ;
struct sg_table {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sg_table*) ;
 scalar_t__ FUNC_1 (int) ;
 struct sg_table* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_1)
{
 struct vb2_dma_sg_buf *VAR_2 = VAR_1;
 struct sg_table *VAR_3;

 if (FUNC_1(!VAR_2->db_attach)) {
  FUNC_3("trying to pin a non attached buffer\n");
  return -VAR_0;
 }

 if (FUNC_1(VAR_2->dma_sgt)) {
  FUNC_3("dmabuf buffer is already pinned\n");
  return 0;
 }


 VAR_3 = FUNC_2(VAR_2->db_attach, VAR_2->dma_dir);
 if (FUNC_0(VAR_3)) {
  FUNC_3("Error getting dmabuf scatterlist\n");
  return -VAR_0;
 }

 VAR_2->dma_sgt = VAR_3;
 VAR_2->vaddr = ((void*)0);

 return 0;
}
