
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int gb_addr_config; int sc_prim_fifo_size_frontend; int sc_prim_fifo_size_backend; int sc_hiz_tile_fifo_size; int sc_earlyz_tile_fifo_size; } ;
struct TYPE_10__ {TYPE_4__ config; } ;
struct TYPE_8__ {int shared_aperture_start; } ;
struct TYPE_7__ {TYPE_1__* id_mgr; } ;
struct amdgpu_device {int grbm_idx_mutex; TYPE_5__ gfx; int srbm_mutex; TYPE_3__ gmc; TYPE_2__ vm_manager; } ;
struct TYPE_6__ {int num_ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,int,int,int) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct amdgpu_device*,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_14(struct amdgpu_device *VAR_32)
{
 u32 VAR_33, VAR_34;
 int VAR_35;

 FUNC_3(VAR_4, VAR_16, 0xFF);
 FUNC_2(VAR_23, VAR_32->gfx.config.gb_addr_config);
 FUNC_2(VAR_24, VAR_32->gfx.config.gb_addr_config);
 FUNC_2(VAR_22, VAR_32->gfx.config.gb_addr_config);

 FUNC_10(VAR_32);
 FUNC_9(VAR_32);
 FUNC_5(VAR_32);
 FUNC_4(VAR_32);



 VAR_34 = FUNC_0(0, VAR_19,
       VAR_21, 1);
 VAR_34 = FUNC_0(VAR_34, VAR_19,
       VAR_3, 1);
 VAR_34 = FUNC_0(VAR_34, VAR_19,
       VAR_5, 3);
 FUNC_2(VAR_30, VAR_34);

 FUNC_11(&VAR_32->srbm_mutex);
 for (VAR_35 = 0; VAR_35 < VAR_32->vm_manager.id_mgr[0].num_ids; VAR_35++) {
  FUNC_13(VAR_32, 0, 0, 0, VAR_35);

  if (VAR_35 == 0) {
   VAR_33 = FUNC_0(0, VAR_18, VAR_2, VAR_7);
   VAR_33 = FUNC_0(VAR_33, VAR_18, VAR_1, VAR_7);
   VAR_33 = FUNC_0(VAR_33, VAR_18, VAR_0,
         VAR_17);
   FUNC_2(VAR_29, VAR_33);
   FUNC_2(VAR_28, 0);
  } else {
   VAR_33 = FUNC_0(0, VAR_18, VAR_2, VAR_6);
   VAR_33 = FUNC_0(VAR_33, VAR_18, VAR_1, VAR_7);
   VAR_33 = FUNC_0(VAR_33, VAR_18, VAR_0,
         VAR_17);
   FUNC_2(VAR_29, VAR_33);
   VAR_33 = VAR_32->gmc.shared_aperture_start >> 48;
   FUNC_2(VAR_28, VAR_33);
  }

  FUNC_2(VAR_26, 1);
  FUNC_2(VAR_27, 0);
 }
 FUNC_13(VAR_32, 0, 0, 0, 0);
 FUNC_12(&VAR_32->srbm_mutex);

 FUNC_6(VAR_32);
 FUNC_7(VAR_32);

 FUNC_11(&VAR_32->grbm_idx_mutex);




 FUNC_8(VAR_32, 0xffffffff, 0xffffffff, 0xffffffff);

 FUNC_2(VAR_25,
     (VAR_32->gfx.config.sc_prim_fifo_size_frontend <<
   VAR_10) |
     (VAR_32->gfx.config.sc_prim_fifo_size_backend <<
   VAR_8) |
     (VAR_32->gfx.config.sc_hiz_tile_fifo_size <<
   VAR_11) |
     (VAR_32->gfx.config.sc_earlyz_tile_fifo_size <<
   VAR_9));

 VAR_33 = FUNC_1(VAR_31);
 VAR_33 = FUNC_0(VAR_33, VAR_20, VAR_12, 2);
 VAR_33 = FUNC_0(VAR_33, VAR_20, VAR_13, 2);
 VAR_33 = FUNC_0(VAR_33, VAR_20, VAR_14, 2);
 VAR_33 = FUNC_0(VAR_33, VAR_20, VAR_15, 2);
 FUNC_2(VAR_31, VAR_33);

 FUNC_12(&VAR_32->grbm_idx_mutex);

}
