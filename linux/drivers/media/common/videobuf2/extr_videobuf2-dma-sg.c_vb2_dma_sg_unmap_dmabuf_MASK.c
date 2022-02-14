
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_dma_sg_buf {struct sg_table* dma_sgt; int dma_dir; TYPE_1__* db_attach; int * vaddr; } ;
struct sg_table {int dummy; } ;
struct TYPE_2__ {int dmabuf; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct sg_table*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct vb2_dma_sg_buf *VAR_1 = VAR_0;
 struct sg_table *VAR_2 = VAR_1->dma_sgt;

 if (FUNC_0(!VAR_1->db_attach)) {
  FUNC_3("trying to unpin a not attached buffer\n");
  return;
 }

 if (FUNC_0(!VAR_2)) {
  FUNC_3("dmabuf buffer is already unpinned\n");
  return;
 }

 if (VAR_1->vaddr) {
  FUNC_2(VAR_1->db_attach->dmabuf, VAR_1->vaddr);
  VAR_1->vaddr = ((void*)0);
 }
 FUNC_1(VAR_1->db_attach, VAR_2, VAR_1->dma_dir);

 VAR_1->dma_sgt = ((void*)0);
}
