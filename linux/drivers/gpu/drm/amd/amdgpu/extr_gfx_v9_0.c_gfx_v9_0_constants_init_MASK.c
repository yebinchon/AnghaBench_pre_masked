
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
struct TYPE_6__ {int db_debug2; } ;
struct TYPE_7__ {TYPE_1__ config; int cu_info; } ;
struct amdgpu_device {int srbm_mutex; TYPE_5__ gmc; TYPE_4__ vm_manager; TYPE_2__ gfx; } ;
struct TYPE_8__ {int num_ids; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int VAR_11 ;
 int FUNC_4 (struct amdgpu_device*,int *) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct amdgpu_device*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_12(struct amdgpu_device *VAR_15)
{
 u32 VAR_16;
 int VAR_17;

 FUNC_2(VAR_2, 0, VAR_3, VAR_5, 0xff);

 FUNC_8(VAR_15);

 FUNC_7(VAR_15);
 FUNC_4(VAR_15, &VAR_15->gfx.cu_info);
 VAR_15->gfx.config.db_debug2 = FUNC_1(VAR_2, 0, VAR_12);



 FUNC_9(&VAR_15->srbm_mutex);
 for (VAR_17 = 0; VAR_17 < VAR_15->vm_manager.id_mgr[VAR_1].num_ids; VAR_17++) {
  FUNC_11(VAR_15, 0, 0, 0, VAR_17);

  if (VAR_17 == 0) {
   VAR_16 = FUNC_0(0, VAR_10, VAR_0,
         VAR_8);
   VAR_16 = FUNC_0(VAR_16, VAR_10, VAR_6,
         !!VAR_11);
   FUNC_3(VAR_2, 0, VAR_14, VAR_16);
   FUNC_3(VAR_2, 0, VAR_13, 0);
  } else {
   VAR_16 = FUNC_0(0, VAR_10, VAR_0,
         VAR_8);
   VAR_16 = FUNC_0(VAR_16, VAR_10, VAR_6,
         !!VAR_11);
   FUNC_3(VAR_2, 0, VAR_14, VAR_16);
   VAR_16 = FUNC_0(0, VAR_9, VAR_4,
    (VAR_15->gmc.private_aperture_start >> 48));
   VAR_16 = FUNC_0(VAR_16, VAR_9, VAR_7,
    (VAR_15->gmc.shared_aperture_start >> 48));
   FUNC_3(VAR_2, 0, VAR_13, VAR_16);
  }
 }
 FUNC_11(VAR_15, 0, 0, 0, 0);

 FUNC_10(&VAR_15->srbm_mutex);

 FUNC_5(VAR_15);
 FUNC_6(VAR_15);
}
