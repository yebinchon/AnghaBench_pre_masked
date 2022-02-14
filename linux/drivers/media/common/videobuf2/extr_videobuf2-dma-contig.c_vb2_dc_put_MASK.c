
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_dc_buf {int dev; int attrs; int dma_addr; int cookie; int size; struct vb2_dc_buf* sgt_base; int refcount; } ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct vb2_dc_buf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vb2_dc_buf*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct vb2_dc_buf *VAR_1 = VAR_0;

 if (!FUNC_3(&VAR_1->refcount))
  return;

 if (VAR_1->sgt_base) {
  FUNC_4(VAR_1->sgt_base);
  FUNC_1(VAR_1->sgt_base);
 }
 FUNC_0(VAR_1->dev, VAR_1->size, VAR_1->cookie, VAR_1->dma_addr,
         VAR_1->attrs);
 FUNC_2(VAR_1->dev);
 FUNC_1(VAR_1);
}
