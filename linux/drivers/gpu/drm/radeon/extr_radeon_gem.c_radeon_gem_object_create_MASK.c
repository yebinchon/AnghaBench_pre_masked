
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mutex; int objects; } ;
struct TYPE_4__ {unsigned long gtt_size; } ;
struct radeon_device {unsigned long gart_pin_size; TYPE_3__ gem; TYPE_1__ mc; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_5__ {struct drm_gem_object base; } ;
struct radeon_bo {int list; int pid; TYPE_2__ tbo; } ;


 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int FUNC_1 (char*,unsigned long,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct radeon_device*,unsigned long,int,int,int,int ,int *,int *,struct radeon_bo**) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct radeon_device *VAR_6, unsigned long VAR_7,
    int VAR_8, int VAR_9,
    u32 VAR_10, bool VAR_11,
    struct drm_gem_object **VAR_12)
{
 struct radeon_bo *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 *VAR_12 = ((void*)0);

 if (VAR_8 < VAR_2) {
  VAR_8 = VAR_2;
 }




 VAR_14 = VAR_6->mc.gtt_size - VAR_6->gart_pin_size;
 if (VAR_7 > VAR_14) {
  FUNC_0("Allocation size %ldMb bigger than %ldMb limit\n",
     VAR_7 >> 20, VAR_14 >> 20);
  return -VAR_0;
 }

retry:
 VAR_15 = FUNC_5(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9,
        VAR_10, ((void*)0), ((void*)0), &VAR_13);
 if (VAR_15) {
  if (VAR_15 != -VAR_1) {
   if (VAR_9 == VAR_4) {
    VAR_9 |= VAR_3;
    goto retry;
   }
   FUNC_1("Failed to allocate GEM object (%ld, %d, %u, %d)\n",
      VAR_7, VAR_9, VAR_8, VAR_15);
  }
  return VAR_15;
 }
 *VAR_12 = &VAR_13->tbo.base;
 VAR_13->pid = FUNC_6(VAR_5);

 FUNC_3(&VAR_6->gem.mutex);
 FUNC_2(&VAR_13->list, &VAR_6->gem.objects);
 FUNC_4(&VAR_6->gem.mutex);

 return 0;
}
