
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct mmsch_v1_0_init_header {int uvd_table_offset; scalar_t__ uvd_table_size; int header_size; int vce_table_offset; int vce_table_size; int version; } ;
struct TYPE_30__ {int command_type; } ;
struct TYPE_25__ {int member_0; } ;
struct mmsch_v1_0_cmd_end {TYPE_9__ cmd_header; TYPE_4__ member_0; } ;
struct TYPE_27__ {int command_type; } ;
struct TYPE_22__ {int member_0; } ;
struct mmsch_v1_0_cmd_direct_write {TYPE_6__ cmd_header; TYPE_1__ member_0; } ;
struct TYPE_28__ {int command_type; } ;
struct TYPE_23__ {int member_0; } ;
struct mmsch_v1_0_cmd_direct_read_modify_write {TYPE_7__ cmd_header; TYPE_2__ member_0; } ;
struct TYPE_29__ {int command_type; } ;
struct TYPE_24__ {int member_0; } ;
struct mmsch_v1_0_cmd_direct_polling {TYPE_8__ cmd_header; TYPE_3__ member_0; } ;
struct amdgpu_ring {int ring_size; int gpu_addr; scalar_t__ wptr; } ;
struct TYPE_21__ {int* cpu_addr; } ;
struct TYPE_26__ {TYPE_15__ mm_table; } ;
struct TYPE_20__ {int num_uvd_inst; int harvest_config; int max_handles; TYPE_13__* inst; TYPE_10__* fw; } ;
struct TYPE_18__ {scalar_t__ load_type; TYPE_11__* ucode; } ;
struct amdgpu_device {TYPE_5__ virt; TYPE_14__ uvd; TYPE_12__ firmware; } ;
struct TYPE_19__ {int gpu_addr; struct amdgpu_ring* ring_enc; struct amdgpu_ring ring; } ;
struct TYPE_17__ {int tmr_mc_addr_lo; int tmr_mc_addr_hi; } ;
struct TYPE_16__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int,int ,int ,int) ;
 int FUNC_5 (int ,int,int ) ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_6 (int) ;
 int FUNC_7 (void*,struct mmsch_v1_0_cmd_end*,int) ;
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
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct amdgpu_device*,TYPE_15__*) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_58)
{
 struct amdgpu_ring *VAR_59;
 uint32_t VAR_60, VAR_61, VAR_62;
 uint32_t VAR_63 = 0;
 struct mmsch_v1_0_cmd_direct_write VAR_64 = { {0} };
 struct mmsch_v1_0_cmd_direct_read_modify_write VAR_65 = { {0} };
 struct mmsch_v1_0_cmd_direct_polling VAR_66 = { {0} };
 struct mmsch_v1_0_cmd_end VAR_67 = { {0} };
 uint32_t *VAR_68 = VAR_58->virt.mm_table.cpu_addr;
 struct mmsch_v1_0_init_header *VAR_69 = (struct mmsch_v1_0_init_header *)VAR_68;
 uint8_t VAR_70 = 0;

 VAR_64.cmd_header.command_type = VAR_8;
 VAR_65.cmd_header.command_type = VAR_7;
 VAR_66.cmd_header.command_type = VAR_6;
 VAR_67.cmd_header.command_type = VAR_9;

 if (VAR_69->uvd_table_offset == 0 && VAR_69->uvd_table_size == 0) {
  VAR_69->version = VAR_10;
  VAR_69->header_size = sizeof(struct mmsch_v1_0_init_header) >> 2;

  if (VAR_69->vce_table_offset == 0 && VAR_69->vce_table_size == 0)
   VAR_69->uvd_table_offset = VAR_69->header_size;
  else
   VAR_69->uvd_table_offset = VAR_69->vce_table_size + VAR_69->vce_table_offset;

  VAR_68 += VAR_69->uvd_table_offset;

  for (VAR_70 = 0; VAR_70 < VAR_58->uvd.num_uvd_inst; ++VAR_70) {
   if (VAR_58->uvd.harvest_config & (1 << VAR_70))
    continue;
   VAR_59 = &VAR_58->uvd.inst[VAR_70].ring;
   VAR_59->wptr = 0;
   VAR_61 = FUNC_0(VAR_58->uvd.fw->size + 4);

   FUNC_2(FUNC_5(VAR_13, VAR_70, VAR_50),
          0xFFFFFFFF, 0x00000004);

   if (VAR_58->firmware.load_type == VAR_0) {
    FUNC_3(FUNC_5(VAR_13, VAR_70,
       VAR_43),
       VAR_58->firmware.ucode[VAR_1].tmr_mc_addr_lo);
    FUNC_3(FUNC_5(VAR_13, VAR_70,
       VAR_42),
       VAR_58->firmware.ucode[VAR_1].tmr_mc_addr_hi);
    FUNC_3(FUNC_5(VAR_13, 0, VAR_51), 0);
    VAR_60 = 0;
   } else {
    FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_43),
           FUNC_6(VAR_58->uvd.inst[VAR_70].gpu_addr));
    FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_42),
           FUNC_9(VAR_58->uvd.inst[VAR_70].gpu_addr));
    VAR_60 = VAR_61;
    FUNC_3(FUNC_5(VAR_13, 0, VAR_51),
       VAR_2 >> 3);

   }

   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_54), VAR_61);

   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_39),
          FUNC_6(VAR_58->uvd.inst[VAR_70].gpu_addr + VAR_60));
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_38),
          FUNC_9(VAR_58->uvd.inst[VAR_70].gpu_addr + VAR_60));
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_52), (1 << 21));
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_55), VAR_3);

   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_41),
          FUNC_6(VAR_58->uvd.inst[VAR_70].gpu_addr + VAR_60 + VAR_3));
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_40),
          FUNC_9(VAR_58->uvd.inst[VAR_70].gpu_addr + VAR_60 + VAR_3));
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_53), (2 << 21));
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_56),
          VAR_5 + (VAR_4 * 40));

   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_35), VAR_58->uvd.max_handles);



   FUNC_2(FUNC_5(VAR_13, VAR_70, VAR_34),
          ~VAR_14, 0);


   FUNC_2(FUNC_5(VAR_13, VAR_70, VAR_44),
          ~VAR_22, 0);


   FUNC_2(FUNC_5(VAR_13, VAR_70, VAR_37),
          ~VAR_15,
          VAR_15);


   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_49),
          (uint32_t)(VAR_27 |
              VAR_31 |
              VAR_26 |
              VAR_29 |
              VAR_24 |
              VAR_25 |
              VAR_30 |
              VAR_28));


   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_36),
          (uint32_t)((0x40 << VAR_20) |
              VAR_19 |
              VAR_16 |
              VAR_18 |
              VAR_17 |
              0x00100000L));


   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_49),
          VAR_31);


   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_57),
          VAR_33);


   FUNC_2(FUNC_5(VAR_13, VAR_70, VAR_44),
          ~(VAR_22|VAR_21),
          (VAR_22|VAR_21));


   FUNC_2(FUNC_5(VAR_13, VAR_70, VAR_50),
          ~(2 << VAR_32), 0);


   VAR_61 = FUNC_8(VAR_59->ring_size);
   VAR_62 = FUNC_4(0, VAR_23, VAR_11, VAR_61);
   VAR_62 = FUNC_4(VAR_62, VAR_23, VAR_12, 1);
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_45), VAR_62);

   VAR_59 = &VAR_58->uvd.inst[VAR_70].ring_enc[0];
   VAR_59->wptr = 0;
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_47), VAR_59->gpu_addr);
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_46), FUNC_9(VAR_59->gpu_addr));
   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_48), VAR_59->ring_size / 4);


   FUNC_3(FUNC_5(VAR_13, VAR_70, VAR_49), 0);


   FUNC_2(FUNC_5(VAR_13, VAR_70, VAR_37),
              ~VAR_15, 0);

   FUNC_1(FUNC_5(VAR_13, VAR_70, VAR_50), 0x02, 0x02);
  }

  FUNC_7((void *)VAR_68, &VAR_67, sizeof(struct mmsch_v1_0_cmd_end));
  VAR_63 += sizeof(struct mmsch_v1_0_cmd_end) / 4;
  VAR_69->uvd_table_size = VAR_63;

 }
 return FUNC_10(VAR_58, &VAR_58->virt.mm_table);
}
