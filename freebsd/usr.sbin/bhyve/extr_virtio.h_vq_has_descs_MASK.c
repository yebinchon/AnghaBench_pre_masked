
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {scalar_t__ vq_last_avail; TYPE_1__* vq_avail; } ;
struct TYPE_2__ {scalar_t__ va_idx; } ;


 scalar_t__ FUNC_0 (struct vqueue_info*) ;

__attribute__((used)) static inline int
FUNC_1(struct vqueue_info *VAR_0)
{

 return (FUNC_0(VAR_0) && VAR_0->vq_last_avail !=
     VAR_0->vq_avail->va_idx);
}
