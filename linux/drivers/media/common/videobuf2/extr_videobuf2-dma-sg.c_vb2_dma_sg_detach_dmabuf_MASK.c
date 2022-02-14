
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_dma_sg_buf {TYPE_1__* db_attach; int dma_sgt; } ;
struct TYPE_2__ {int dmabuf; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (struct vb2_dma_sg_buf*) ;
 int FUNC_3 (struct vb2_dma_sg_buf*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct vb2_dma_sg_buf *VAR_1 = VAR_0;


 if (FUNC_0(VAR_1->dma_sgt))
  FUNC_3(VAR_1);


 FUNC_1(VAR_1->db_attach->dmabuf, VAR_1->db_attach);
 FUNC_2(VAR_1);
}
