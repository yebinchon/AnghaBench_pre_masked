
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {int vq_next_used; TYPE_1__* vq_used; } ;
struct TYPE_2__ {int vu_idx; } ;


 int FUNC_0 () ;

void
FUNC_1(struct vqueue_info *VAR_0)
{





 FUNC_0();
 VAR_0->vq_used->vu_idx = VAR_0->vq_next_used;
}
