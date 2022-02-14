
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmgt_guest_info {struct intel_vgpu* vgpu; } ;
struct TYPE_2__ {int cache_lock; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;
struct gvt_dma {unsigned long size; int dma_addr; int ref; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct intel_vgpu*,unsigned long,int ,unsigned long) ;
 struct gvt_dma* FUNC_1 (struct intel_vgpu*,unsigned long) ;
 int FUNC_2 (struct intel_vgpu*,struct gvt_dma*) ;
 int FUNC_3 (struct intel_vgpu*,unsigned long,int *,unsigned long) ;
 int FUNC_4 (struct intel_vgpu*,unsigned long,int ,unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(unsigned long VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, dma_addr_t *VAR_4)
{
 struct kvmgt_guest_info *VAR_5;
 struct intel_vgpu *VAR_6;
 struct gvt_dma *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_1))
  return -VAR_0;

 VAR_5 = (struct kvmgt_guest_info *)VAR_1;
 VAR_6 = VAR_5->vgpu;

 FUNC_7(&VAR_5->vgpu->vdev.cache_lock);

 VAR_7 = FUNC_1(VAR_5->vgpu, VAR_2);
 if (!VAR_7) {
  VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_4, VAR_3);
  if (VAR_8)
   goto err_unlock;

  VAR_8 = FUNC_0(VAR_5->vgpu, VAR_2, *VAR_4, VAR_3);
  if (VAR_8)
   goto err_unmap;
 } else if (VAR_7->size != VAR_3) {

  FUNC_4(VAR_6, VAR_2, VAR_7->dma_addr, VAR_7->size);
  FUNC_2(VAR_6, VAR_7);

  VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_4, VAR_3);
  if (VAR_8)
   goto err_unlock;

  VAR_8 = FUNC_0(VAR_5->vgpu, VAR_2, *VAR_4, VAR_3);
  if (VAR_8)
   goto err_unmap;
 } else {
  FUNC_6(&VAR_7->ref);
  *VAR_4 = VAR_7->dma_addr;
 }

 FUNC_8(&VAR_5->vgpu->vdev.cache_lock);
 return 0;

err_unmap:
 FUNC_4(VAR_6, VAR_2, *VAR_4, VAR_3);
err_unlock:
 FUNC_8(&VAR_5->vgpu->vdev.cache_lock);
 return VAR_8;
}
