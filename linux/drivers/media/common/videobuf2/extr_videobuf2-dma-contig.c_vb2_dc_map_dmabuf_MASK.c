
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dc_buf {int dma_sgt; unsigned long size; int * vaddr; int dma_addr; int dma_dir; int db_attach; } ;
struct sg_table {int sgl; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sg_table*) ;
 scalar_t__ FUNC_1 (int) ;
 struct sg_table* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct sg_table*,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;
 unsigned long FUNC_6 (struct sg_table*) ;

__attribute__((used)) static int FUNC_7(void *VAR_2)
{
 struct vb2_dc_buf *VAR_3 = VAR_2;
 struct sg_table *VAR_4;
 unsigned long VAR_5;

 if (FUNC_1(!VAR_3->db_attach)) {
  FUNC_4("trying to pin a non attached buffer\n");
  return -VAR_1;
 }

 if (FUNC_1(VAR_3->dma_sgt)) {
  FUNC_4("dmabuf buffer is already pinned\n");
  return 0;
 }


 VAR_4 = FUNC_2(VAR_3->db_attach, VAR_3->dma_dir);
 if (FUNC_0(VAR_4)) {
  FUNC_4("Error getting dmabuf scatterlist\n");
  return -VAR_1;
 }


 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 < VAR_3->size) {
  FUNC_4("contiguous chunk is too small %lu/%lu b\n",
   VAR_5, VAR_3->size);
  FUNC_3(VAR_3->db_attach, VAR_4, VAR_3->dma_dir);
  return -VAR_0;
 }

 VAR_3->dma_addr = FUNC_5(VAR_4->sgl);
 VAR_3->dma_sgt = VAR_4;
 VAR_3->vaddr = ((void*)0);

 return 0;
}
