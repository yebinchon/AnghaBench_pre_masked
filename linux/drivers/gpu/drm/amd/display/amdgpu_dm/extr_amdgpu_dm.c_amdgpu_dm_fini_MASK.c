
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dc_lock; int audio_lock; int * freesync_module; int * cgs_device; scalar_t__ dc; } ;
struct amdgpu_device {TYPE_1__ dm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_device *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_2(&VAR_0->dm);


 if (VAR_0->dm.dc)
  FUNC_3(&VAR_0->dm.dc);






 if (VAR_0->dm.cgs_device) {
  FUNC_0(VAR_0->dm.cgs_device);
  VAR_0->dm.cgs_device = ((void*)0);
 }
 if (VAR_0->dm.freesync_module) {
  FUNC_4(VAR_0->dm.freesync_module);
  VAR_0->dm.freesync_module = ((void*)0);
 }

 FUNC_5(&VAR_0->dm.audio_lock);
 FUNC_5(&VAR_0->dm.dc_lock);

 return;
}
