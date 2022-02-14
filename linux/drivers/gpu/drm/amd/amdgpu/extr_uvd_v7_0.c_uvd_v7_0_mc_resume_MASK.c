
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int num_uvd_inst; int harvest_config; int max_handles; TYPE_3__* inst; } ;
struct TYPE_10__ {int gb_addr_config; } ;
struct TYPE_11__ {TYPE_4__ config; } ;
struct TYPE_8__ {scalar_t__ load_type; TYPE_1__* ucode; } ;
struct amdgpu_device {TYPE_6__ uvd; TYPE_5__ gfx; TYPE_2__ firmware; } ;
struct TYPE_9__ {int gpu_addr; } ;
struct TYPE_7__ {int tmr_mc_addr_lo; int tmr_mc_addr_hi; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_24)
{
 uint32_t VAR_25 = FUNC_0(VAR_24);
 uint32_t VAR_26;
 int VAR_27;

 for (VAR_27 = 0; VAR_27 < VAR_24->uvd.num_uvd_inst; ++VAR_27) {
  if (VAR_24->uvd.harvest_config & (1 << VAR_27))
   continue;
  if (VAR_24->firmware.load_type == VAR_0) {
   FUNC_1(VAR_7, VAR_27, VAR_14,
    VAR_27 == 0 ?
    VAR_24->firmware.ucode[VAR_1].tmr_mc_addr_lo:
    VAR_24->firmware.ucode[VAR_2].tmr_mc_addr_lo);
   FUNC_1(VAR_7, VAR_27, VAR_13,
    VAR_27 == 0 ?
    VAR_24->firmware.ucode[VAR_1].tmr_mc_addr_hi:
    VAR_24->firmware.ucode[VAR_2].tmr_mc_addr_hi);
   FUNC_1(VAR_7, VAR_27, VAR_18, 0);
   VAR_26 = 0;
  } else {
   FUNC_1(VAR_7, VAR_27, VAR_14,
    FUNC_2(VAR_24->uvd.inst[VAR_27].gpu_addr));
   FUNC_1(VAR_7, VAR_27, VAR_13,
    FUNC_3(VAR_24->uvd.inst[VAR_27].gpu_addr));
   VAR_26 = VAR_25;
   FUNC_1(VAR_7, VAR_27, VAR_18,
     VAR_3 >> 3);
  }

  FUNC_1(VAR_7, VAR_27, VAR_21, VAR_25);

  FUNC_1(VAR_7, VAR_27, VAR_10,
    FUNC_2(VAR_24->uvd.inst[VAR_27].gpu_addr + VAR_26));
  FUNC_1(VAR_7, VAR_27, VAR_9,
    FUNC_3(VAR_24->uvd.inst[VAR_27].gpu_addr + VAR_26));
  FUNC_1(VAR_7, VAR_27, VAR_19, (1 << 21));
  FUNC_1(VAR_7, VAR_27, VAR_22, VAR_4);

  FUNC_1(VAR_7, VAR_27, VAR_12,
    FUNC_2(VAR_24->uvd.inst[VAR_27].gpu_addr + VAR_26 + VAR_4));
  FUNC_1(VAR_7, VAR_27, VAR_11,
    FUNC_3(VAR_24->uvd.inst[VAR_27].gpu_addr + VAR_26 + VAR_4));
  FUNC_1(VAR_7, VAR_27, VAR_20, (2 << 21));
  FUNC_1(VAR_7, VAR_27, VAR_23,
    VAR_6 + (VAR_5 * 40));

  FUNC_1(VAR_7, VAR_27, VAR_15,
    VAR_24->gfx.config.gb_addr_config);
  FUNC_1(VAR_7, VAR_27, VAR_17,
    VAR_24->gfx.config.gb_addr_config);
  FUNC_1(VAR_7, VAR_27, VAR_16,
    VAR_24->gfx.config.gb_addr_config);

  FUNC_1(VAR_7, VAR_27, VAR_8, VAR_24->uvd.max_handles);
 }
}
