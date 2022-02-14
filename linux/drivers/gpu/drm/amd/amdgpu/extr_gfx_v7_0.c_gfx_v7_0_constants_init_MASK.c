
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct amdgpu_device*,int ,int ,int ,int) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*,int,int,int) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct amdgpu_device *VAR_63)
{
 u32 VAR_64, VAR_65, VAR_66;
 u32 VAR_67;
 int VAR_68;

 FUNC_2(VAR_42, (0xff << VAR_7));

 FUNC_2(VAR_41, VAR_63->gfx.config.gb_addr_config);
 FUNC_2(VAR_43, VAR_63->gfx.config.gb_addr_config);
 FUNC_2(VAR_40, VAR_63->gfx.config.gb_addr_config);

 FUNC_10(VAR_63);

 FUNC_9(VAR_63);
 FUNC_5(VAR_63);
 FUNC_4(VAR_63);


 FUNC_2(VAR_35,
        (0x30 << VAR_2) |
        (0x60 << VAR_3));

 FUNC_11(&VAR_63->grbm_idx_mutex);




 FUNC_8(VAR_63, 0xffffffff, 0xffffffff, 0xffffffff);



 VAR_64 = FUNC_0(0, VAR_26, VAR_0,
       VAR_25);
 VAR_64 = FUNC_0(VAR_64, VAR_26, VAR_4,
       VAR_9);
 VAR_64 = FUNC_0(VAR_64, VAR_26, VAR_1,
       VAR_10);
 VAR_64 = FUNC_0(VAR_64, VAR_26, VAR_24, 0);

 VAR_65 = FUNC_0(0, VAR_27,
       VAR_30, 1);
 VAR_65 = FUNC_0(VAR_65, VAR_27,
       VAR_5, 1);
 VAR_65 = FUNC_0(VAR_65, VAR_27,
       VAR_8, 3);
 FUNC_2(VAR_53, VAR_65);

 FUNC_11(&VAR_63->srbm_mutex);
 for (VAR_68 = 0; VAR_68 < VAR_63->vm_manager.id_mgr[0].num_ids; VAR_68++) {
  if (VAR_68 == 0)
   VAR_66 = 0;
  else
   VAR_66 = VAR_63->gmc.shared_aperture_start >> 48;
  FUNC_3(VAR_63, 0, 0, 0, VAR_68);

  FUNC_2(VAR_52, VAR_64);
  FUNC_2(VAR_49, 1);
  FUNC_2(VAR_50, 0);
  FUNC_2(VAR_51, VAR_66);
 }
 FUNC_3(VAR_63, 0, 0, 0, 0);
 FUNC_12(&VAR_63->srbm_mutex);

 FUNC_6(VAR_63);
 FUNC_7(VAR_63);

 FUNC_2(VAR_58, 0x20);

 FUNC_2(VAR_59, 0x00010000);

 VAR_67 = FUNC_1(VAR_55);
 VAR_67 |= 0x03000000;
 FUNC_2(VAR_55, VAR_67);

 FUNC_2(VAR_57, 1);

 FUNC_2(VAR_37, 0);

 VAR_67 = FUNC_1(VAR_38) & ~0xf00fffff;
 VAR_67 |= 0x00000400;
 FUNC_2(VAR_38, VAR_67);

 VAR_67 = FUNC_1(VAR_39) & ~0x0002021c;
 VAR_67 |= 0x00020200;
 FUNC_2(VAR_39, VAR_67);

 VAR_67 = FUNC_1(VAR_34) & ~0x00010000;
 VAR_67 |= 0x00018208;
 FUNC_2(VAR_34, VAR_67);

 FUNC_2(VAR_56, (4 << VAR_29));

 FUNC_2(VAR_46,
  ((VAR_63->gfx.config.sc_prim_fifo_size_frontend << VAR_16) |
  (VAR_63->gfx.config.sc_prim_fifo_size_backend << VAR_14) |
  (VAR_63->gfx.config.sc_hiz_tile_fifo_size << VAR_17) |
  (VAR_63->gfx.config.sc_earlyz_tile_fifo_size << VAR_15)));

 FUNC_2(VAR_62, 1);

 FUNC_2(VAR_36, 0);

 FUNC_2(VAR_57, 0);

 FUNC_2(VAR_47,
  ((4095 << VAR_18) |
  (255 << VAR_19)));

 FUNC_2(VAR_60,
  (VAR_31 << VAR_33) |
  (VAR_6 << VAR_32));

 FUNC_2(VAR_61, 16);
 FUNC_2(VAR_48, 0);

 FUNC_2(VAR_44, VAR_11 |
   (3 << VAR_12));
 FUNC_2(VAR_45, VAR_13);

 VAR_67 = FUNC_1(VAR_54);
 VAR_67 = FUNC_0(VAR_67, VAR_28, VAR_20, 2);
 VAR_67 = FUNC_0(VAR_67, VAR_28, VAR_21, 2);
 VAR_67 = FUNC_0(VAR_67, VAR_28, VAR_22, 2);
 VAR_67 = FUNC_0(VAR_67, VAR_28, VAR_23, 2);
 FUNC_2(VAR_54, VAR_67);

 FUNC_12(&VAR_63->grbm_idx_mutex);

 FUNC_13(50);
}
