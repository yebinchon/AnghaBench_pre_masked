
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_13__ {int gb_addr_config; } ;
struct TYPE_14__ {TYPE_6__ config; } ;
struct TYPE_12__ {TYPE_4__* inst; TYPE_1__* fw; } ;
struct TYPE_10__ {scalar_t__ load_type; TYPE_2__* ucode; } ;
struct amdgpu_device {TYPE_7__ gfx; TYPE_5__ vcn; TYPE_3__ firmware; } ;
struct TYPE_11__ {int gpu_addr; } ;
struct TYPE_9__ {int tmr_mc_addr_lo; int tmr_mc_addr_hi; } ;
struct TYPE_8__ {scalar_t__ size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (int) ;
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
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct amdgpu_device *VAR_23, bool VAR_24)
{
 uint32_t VAR_25 = FUNC_0(VAR_23->vcn.fw->size + 4);
 uint32_t VAR_26;


 if (VAR_23->firmware.load_type == VAR_0) {
  if (!VAR_24) {
   FUNC_2(FUNC_1(
    VAR_5, 0, VAR_12),
    (VAR_23->firmware.ucode[VAR_1].tmr_mc_addr_lo), 0, VAR_24);
   FUNC_2(FUNC_1(
    VAR_5, 0, VAR_11),
    (VAR_23->firmware.ucode[VAR_1].tmr_mc_addr_hi), 0, VAR_24);
   FUNC_2(FUNC_1(
    VAR_5, 0, VAR_15), 0, 0, VAR_24);
  } else {
   FUNC_2(FUNC_1(
    VAR_5, 0, VAR_12), 0, 0, VAR_24);
   FUNC_2(FUNC_1(
    VAR_5, 0, VAR_11), 0, 0, VAR_24);
   FUNC_2(FUNC_1(
    VAR_5, 0, VAR_15), 0, 0, VAR_24);
  }
  VAR_26 = 0;
 } else {
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_12),
   FUNC_3(VAR_23->vcn.inst->gpu_addr), 0, VAR_24);
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_11),
   FUNC_4(VAR_23->vcn.inst->gpu_addr), 0, VAR_24);
  VAR_26 = VAR_25;
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_15),
   VAR_2 >> 3, 0, VAR_24);
 }

 if (!VAR_24)
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_18), VAR_25, 0, VAR_24);
 else
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_18), 0, 0, VAR_24);


 if (!VAR_24) {
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_8),
   FUNC_3(VAR_23->vcn.inst->gpu_addr + VAR_26), 0, VAR_24);
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_7),
   FUNC_4(VAR_23->vcn.inst->gpu_addr + VAR_26), 0, VAR_24);
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_16), 0, 0, VAR_24);
 } else {
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_8), 0, 0, VAR_24);
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_7), 0, 0, VAR_24);
  FUNC_2(FUNC_1(
   VAR_5, 0, VAR_16), 0, 0, VAR_24);
 }
 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_19), VAR_4, 0, VAR_24);


 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_10),
  FUNC_3(VAR_23->vcn.inst->gpu_addr + VAR_26 + VAR_4), 0, VAR_24);
 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_9),
  FUNC_4(VAR_23->vcn.inst->gpu_addr + VAR_26 + VAR_4), 0, VAR_24);
 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_17), 0, 0, VAR_24);
 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_20), VAR_3, 0, VAR_24);


 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_14), 0, 0, VAR_24);
 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_13), 0, 0, VAR_24);
 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_21), 0, 0, VAR_24);
 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_22), 0, 0, VAR_24);


 FUNC_2(FUNC_1(
  VAR_5, 0, VAR_6), VAR_23->gfx.config.gb_addr_config, 0, VAR_24);
}
