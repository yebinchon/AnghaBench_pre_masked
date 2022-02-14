
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmgt_guest_info {TYPE_2__* vgpu; } ;
struct gvt_dma {int ref; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int cache_lock; } ;
struct TYPE_4__ {TYPE_1__ vdev; } ;


 struct gvt_dma* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1, dma_addr_t VAR_2)
{
 struct kvmgt_guest_info *VAR_3;
 struct gvt_dma *VAR_4;

 if (!FUNC_1(VAR_1))
  return;

 VAR_3 = (struct kvmgt_guest_info *)VAR_1;

 FUNC_3(&VAR_3->vgpu->vdev.cache_lock);
 VAR_4 = FUNC_0(VAR_3->vgpu, VAR_2);
 if (VAR_4)
  FUNC_2(&VAR_4->ref, VAR_0);
 FUNC_4(&VAR_3->vgpu->vdev.cache_lock);
}
