
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_10__ {int private_aperture_start; int shared_aperture_start; } ;
struct TYPE_9__ {TYPE_3__* id_mgr; } ;
struct TYPE_6__ {int pa_sc_tile_steering_override; } ;
struct TYPE_7__ {TYPE_1__ config; int cu_info; } ;
struct amdgpu_device {int srbm_mutex; TYPE_5__ gmc; TYPE_4__ vm_manager; TYPE_2__ gfx; } ;
struct TYPE_8__ {int num_ids; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (struct amdgpu_device*,int *) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct amdgpu_device*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_13(struct amdgpu_device *VAR_10)
{
 u32 VAR_11;
 int VAR_12;

 FUNC_1(VAR_2, 0, VAR_3, VAR_5, 0xff);

 FUNC_9(VAR_10);

 FUNC_8(VAR_10);
 FUNC_3(VAR_10, &VAR_10->gfx.cu_info);
 FUNC_4(VAR_10);
 VAR_10->gfx.config.pa_sc_tile_steering_override =
  FUNC_7(VAR_10);



 FUNC_10(&VAR_10->srbm_mutex);
 for (VAR_12 = 0; VAR_12 < VAR_10->vm_manager.id_mgr[VAR_0].num_ids; VAR_12++) {
  FUNC_12(VAR_10, 0, 0, 0, VAR_12);

  FUNC_2(VAR_2, 0, VAR_9, VAR_1);
  if (VAR_12 != 0) {
   VAR_11 = FUNC_0(0, VAR_7, VAR_4,
    (VAR_10->gmc.private_aperture_start >> 48));
   VAR_11 = FUNC_0(VAR_11, VAR_7, VAR_6,
    (VAR_10->gmc.shared_aperture_start >> 48));
   FUNC_2(VAR_2, 0, VAR_8, VAR_11);
  }
 }
 FUNC_12(VAR_10, 0, 0, 0, 0);

 FUNC_11(&VAR_10->srbm_mutex);

 FUNC_5(VAR_10);
 FUNC_6(VAR_10);

}
