
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int num_vcn_inst; int harvest_config; TYPE_4__* inst; TYPE_1__* fw; } ;
struct TYPE_8__ {scalar_t__ load_type; TYPE_2__* ucode; } ;
struct amdgpu_device {TYPE_5__ vcn; TYPE_3__ firmware; } ;
struct TYPE_9__ {int gpu_addr; } ;
struct TYPE_7__ {int tmr_mc_addr_lo; int tmr_mc_addr_hi; } ;
struct TYPE_6__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_18)
{
 uint32_t VAR_19 = FUNC_0(VAR_18->vcn.fw->size + 4);
 uint32_t VAR_20;
 int VAR_21;

 for (VAR_21 = 0; VAR_21 < VAR_18->vcn.num_vcn_inst; ++VAR_21) {
  if (VAR_18->vcn.harvest_config & (1 << VAR_21))
   continue;

  if (VAR_18->firmware.load_type == VAR_0) {
   FUNC_1(VAR_5, VAR_21, VAR_11,
    (VAR_18->firmware.ucode[VAR_1].tmr_mc_addr_lo));
   FUNC_1(VAR_5, VAR_21, VAR_10,
    (VAR_18->firmware.ucode[VAR_1].tmr_mc_addr_hi));
   FUNC_1(VAR_5, VAR_21, VAR_12, 0);
   VAR_20 = 0;
  } else {
   FUNC_1(VAR_5, VAR_21, VAR_11,
    FUNC_2(VAR_18->vcn.inst[VAR_21].gpu_addr));
   FUNC_1(VAR_5, VAR_21, VAR_10,
    FUNC_3(VAR_18->vcn.inst[VAR_21].gpu_addr));
   VAR_20 = VAR_19;
   FUNC_1(VAR_5, VAR_21, VAR_12,
    VAR_2 >> 3);
  }
  FUNC_1(VAR_5, VAR_21, VAR_15, VAR_19);


  FUNC_1(VAR_5, VAR_21, VAR_7,
   FUNC_2(VAR_18->vcn.inst[VAR_21].gpu_addr + VAR_20));
  FUNC_1(VAR_5, VAR_21, VAR_6,
   FUNC_3(VAR_18->vcn.inst[VAR_21].gpu_addr + VAR_20));
  FUNC_1(VAR_5, VAR_21, VAR_13, 0);
  FUNC_1(VAR_5, VAR_21, VAR_16, VAR_4);


  FUNC_1(VAR_5, VAR_21, VAR_9,
   FUNC_2(VAR_18->vcn.inst[VAR_21].gpu_addr + VAR_20 + VAR_4));
  FUNC_1(VAR_5, VAR_21, VAR_8,
   FUNC_3(VAR_18->vcn.inst[VAR_21].gpu_addr + VAR_20 + VAR_4));
  FUNC_1(VAR_5, VAR_21, VAR_14, 0);
  FUNC_1(VAR_5, VAR_21, VAR_17, VAR_3);
 }
}
