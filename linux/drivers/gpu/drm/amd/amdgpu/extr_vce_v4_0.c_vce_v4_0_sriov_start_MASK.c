
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct mmsch_v1_0_init_header {int vce_table_offset; scalar_t__ vce_table_size; int header_size; int uvd_table_offset; int uvd_table_size; int version; } ;
struct TYPE_26__ {int command_type; } ;
struct TYPE_21__ {int member_0; } ;
struct mmsch_v1_0_cmd_end {TYPE_9__ cmd_header; TYPE_4__ member_0; } ;
struct TYPE_23__ {int command_type; } ;
struct TYPE_18__ {int member_0; } ;
struct mmsch_v1_0_cmd_direct_write {TYPE_6__ cmd_header; TYPE_1__ member_0; } ;
struct TYPE_24__ {int command_type; } ;
struct TYPE_19__ {int member_0; } ;
struct mmsch_v1_0_cmd_direct_read_modify_write {TYPE_7__ cmd_header; TYPE_2__ member_0; } ;
struct TYPE_25__ {int command_type; } ;
struct TYPE_20__ {int member_0; } ;
struct mmsch_v1_0_cmd_direct_polling {TYPE_8__ cmd_header; TYPE_3__ member_0; } ;
struct amdgpu_ring {int ring_size; int gpu_addr; } ;
struct TYPE_17__ {int* cpu_addr; } ;
struct TYPE_22__ {TYPE_13__ mm_table; } ;
struct TYPE_16__ {scalar_t__ load_type; TYPE_10__* ucode; } ;
struct TYPE_15__ {int gpu_addr; struct amdgpu_ring* ring; } ;
struct amdgpu_device {TYPE_5__ virt; TYPE_12__ firmware; TYPE_11__ vce; } ;
struct TYPE_14__ {int tmr_mc_addr_lo; int tmr_mc_addr_hi; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,struct mmsch_v1_0_cmd_end*,int) ;
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
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct amdgpu_device*,TYPE_13__*) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_42)
{
 struct amdgpu_ring *VAR_43;
 uint32_t VAR_44, VAR_45;
 uint32_t VAR_46 = 0;
 struct mmsch_v1_0_cmd_direct_write VAR_47 = { { 0 } };
 struct mmsch_v1_0_cmd_direct_read_modify_write VAR_48 = { { 0 } };
 struct mmsch_v1_0_cmd_direct_polling VAR_49 = { { 0 } };
 struct mmsch_v1_0_cmd_end VAR_50 = { { 0 } };
 uint32_t *VAR_51 = VAR_42->virt.mm_table.cpu_addr;
 struct mmsch_v1_0_init_header *VAR_52 = (struct mmsch_v1_0_init_header *)VAR_51;

 VAR_47.cmd_header.command_type = VAR_5;
 VAR_48.cmd_header.command_type = VAR_4;
 VAR_49.cmd_header.command_type = VAR_3;
 VAR_50.cmd_header.command_type = VAR_6;

 if (VAR_52->vce_table_offset == 0 && VAR_52->vce_table_size == 0) {
  VAR_52->version = VAR_7;
  VAR_52->header_size = sizeof(struct mmsch_v1_0_init_header) >> 2;

  if (VAR_52->uvd_table_offset == 0 && VAR_52->uvd_table_size == 0)
   VAR_52->vce_table_offset = VAR_52->header_size;
  else
   VAR_52->vce_table_offset = VAR_52->uvd_table_size + VAR_52->uvd_table_offset;

  VAR_51 += VAR_52->vce_table_offset;

  VAR_43 = &VAR_42->vce.ring[0];
  FUNC_2(FUNC_3(VAR_8, 0, VAR_30),
         FUNC_4(VAR_43->gpu_addr));
  FUNC_2(FUNC_3(VAR_8, 0, VAR_29),
         FUNC_6(VAR_43->gpu_addr));
  FUNC_2(FUNC_3(VAR_8, 0, VAR_31),
         VAR_43->ring_size / 4);


  FUNC_2(FUNC_3(VAR_8, 0, VAR_18), 0x398000);
  FUNC_1(FUNC_3(VAR_8, 0, VAR_17), ~0x1, 0);
  FUNC_2(FUNC_3(VAR_8, 0, VAR_20), 0);
  FUNC_2(FUNC_3(VAR_8, 0, VAR_21), 0);
  FUNC_2(FUNC_3(VAR_8, 0, VAR_28), 0);

  VAR_44 = VAR_2;
  if (VAR_42->firmware.load_type == VAR_0) {
   uint32_t VAR_53 = VAR_42->firmware.ucode[VAR_1].tmr_mc_addr_lo;
   uint32_t VAR_54 = VAR_42->firmware.ucode[VAR_1].tmr_mc_addr_hi;
   uint64_t VAR_55 = (uint64_t)(VAR_54) << 32 | VAR_53;

   FUNC_2(FUNC_3(VAR_8, 0,
      VAR_22), VAR_55 >> 8);
   FUNC_2(FUNC_3(VAR_8, 0,
      VAR_25),
      (VAR_55 >> 40) & 0xff);
   FUNC_2(FUNC_3(VAR_8, 0, VAR_35), 0);
  } else {
   FUNC_2(FUNC_3(VAR_8, 0,
      VAR_22),
      VAR_42->vce.gpu_addr >> 8);
   FUNC_2(FUNC_3(VAR_8, 0,
      VAR_25),
      (VAR_42->vce.gpu_addr >> 40) & 0xff);
   FUNC_2(FUNC_3(VAR_8, 0, VAR_35),
      VAR_44 & ~0x0f000000);

  }
  FUNC_2(FUNC_3(VAR_8, 0,
      VAR_23),
      VAR_42->vce.gpu_addr >> 8);
  FUNC_2(FUNC_3(VAR_8, 0,
      VAR_26),
      (VAR_42->vce.gpu_addr >> 40) & 0xff);
  FUNC_2(FUNC_3(VAR_8, 0,
      VAR_24),
      VAR_42->vce.gpu_addr >> 8);
  FUNC_2(FUNC_3(VAR_8, 0,
      VAR_27),
      (VAR_42->vce.gpu_addr >> 40) & 0xff);

  VAR_45 = VAR_14;
  FUNC_2(FUNC_3(VAR_8, 0, VAR_38), VAR_45);

  VAR_44 = (VAR_42->firmware.load_type != VAR_0) ? VAR_44 + VAR_45 : 0;
  VAR_45 = VAR_15;
  FUNC_2(FUNC_3(VAR_8, 0, VAR_36),
     (VAR_44 & ~0x0f000000) | (1 << 24));
  FUNC_2(FUNC_3(VAR_8, 0, VAR_39), VAR_45);

  VAR_44 += VAR_45;
  VAR_45 = VAR_13;
  FUNC_2(FUNC_3(VAR_8, 0, VAR_37),
     (VAR_44 & ~0x0f000000) | (2 << 24));
  FUNC_2(FUNC_3(VAR_8, 0, VAR_40), VAR_45);

  FUNC_1(FUNC_3(VAR_8, 0, VAR_19), ~0x100, 0);
  FUNC_1(FUNC_3(VAR_8, 0, VAR_34),
         VAR_12,
         VAR_12);


  FUNC_1(FUNC_3(VAR_8, 0, VAR_33),
         VAR_11, ~VAR_11);
  FUNC_1(FUNC_3(VAR_8, 0, VAR_41),
         ~0x200001, VAR_16);
  FUNC_1(FUNC_3(VAR_8, 0, VAR_32),
         ~VAR_9, 0);

  FUNC_0(FUNC_3(VAR_8, 0, VAR_33),
           VAR_10,
           VAR_10);


  FUNC_1(FUNC_3(VAR_8, 0, VAR_33),
         ~VAR_11, 0);


  FUNC_5((void *)VAR_51, &VAR_50, sizeof(struct mmsch_v1_0_cmd_end));
  VAR_46 += sizeof(struct mmsch_v1_0_cmd_end) / 4;
  VAR_52->vce_table_size = VAR_46;
 }

 return FUNC_7(VAR_42, &VAR_42->virt.mm_table);
}
