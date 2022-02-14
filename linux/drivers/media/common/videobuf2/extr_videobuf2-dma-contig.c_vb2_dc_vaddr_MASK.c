
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vb2_dc_buf {void* vaddr; TYPE_1__* db_attach; } ;
struct TYPE_2__ {int dmabuf; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void *FUNC_1(void *VAR_0)
{
 struct vb2_dc_buf *VAR_1 = VAR_0;

 if (!VAR_1->vaddr && VAR_1->db_attach)
  VAR_1->vaddr = FUNC_0(VAR_1->db_attach->dmabuf);

 return VAR_1->vaddr;
}
