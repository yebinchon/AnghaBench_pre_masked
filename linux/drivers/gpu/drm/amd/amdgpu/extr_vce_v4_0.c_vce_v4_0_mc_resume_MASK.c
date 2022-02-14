
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int gpu_addr; } ;
struct TYPE_5__ {scalar_t__ load_type; TYPE_1__* ucode; } ;
struct amdgpu_device {TYPE_3__ vce; TYPE_2__ firmware; } ;
struct TYPE_4__ {int tmr_mc_addr_lo; scalar_t__ tmr_mc_addr_hi; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int,int) ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_31)
{
 uint32_t VAR_32, VAR_33;
 uint64_t VAR_34;

 FUNC_2(FUNC_0(VAR_3, 0, VAR_8), 0, ~(1 << 16));
 FUNC_2(FUNC_0(VAR_3, 0, VAR_23), 0x1FF000, ~0xFF9FF000);
 FUNC_2(FUNC_0(VAR_3, 0, VAR_24), 0x3F, ~0x3F);
 FUNC_1(FUNC_0(VAR_3, 0, VAR_9), 0x1FF);

 FUNC_1(FUNC_0(VAR_3, 0, VAR_11), 0x00398000);
 FUNC_2(FUNC_0(VAR_3, 0, VAR_10), 0x0, ~0x1);
 FUNC_1(FUNC_0(VAR_3, 0, VAR_13), 0);
 FUNC_1(FUNC_0(VAR_3, 0, VAR_14), 0);
 FUNC_1(FUNC_0(VAR_3, 0, VAR_21), 0);

 VAR_32 = VAR_2;

 if (VAR_31->firmware.load_type == VAR_0) {
  VAR_34 = (uint64_t)(VAR_31->firmware.ucode[VAR_1].tmr_mc_addr_hi) << 32 |
          VAR_31->firmware.ucode[VAR_1].tmr_mc_addr_lo;
  FUNC_1(FUNC_0(VAR_3, 0, VAR_15),
   (VAR_34 >> 8));
  FUNC_1(FUNC_0(VAR_3, 0, VAR_18),
   (VAR_34 >> 40) & 0xff);
  FUNC_1(FUNC_0(VAR_3, 0, VAR_25), 0);
 } else {
  FUNC_1(FUNC_0(VAR_3, 0, VAR_15),
   (VAR_31->vce.gpu_addr >> 8));
  FUNC_1(FUNC_0(VAR_3, 0, VAR_18),
   (VAR_31->vce.gpu_addr >> 40) & 0xff);
  FUNC_1(FUNC_0(VAR_3, 0, VAR_25), VAR_32 & ~0x0f000000);
 }

 VAR_33 = VAR_6;
 FUNC_1(FUNC_0(VAR_3, 0, VAR_28), VAR_33);

 FUNC_1(FUNC_0(VAR_3, 0, VAR_16), (VAR_31->vce.gpu_addr >> 8));
 FUNC_1(FUNC_0(VAR_3, 0, VAR_19), (VAR_31->vce.gpu_addr >> 40) & 0xff);
 VAR_32 = (VAR_31->firmware.load_type != VAR_0) ? VAR_32 + VAR_33 : 0;
 VAR_33 = VAR_7;
 FUNC_1(FUNC_0(VAR_3, 0, VAR_26), (VAR_32 & ~0x0f000000) | (1 << 24));
 FUNC_1(FUNC_0(VAR_3, 0, VAR_29), VAR_33);

 FUNC_1(FUNC_0(VAR_3, 0, VAR_17), (VAR_31->vce.gpu_addr >> 8));
 FUNC_1(FUNC_0(VAR_3, 0, VAR_20), (VAR_31->vce.gpu_addr >> 40) & 0xff);
 VAR_32 += VAR_33;
 VAR_33 = VAR_5;
 FUNC_1(FUNC_0(VAR_3, 0, VAR_27), (VAR_32 & ~0x0f000000) | (2 << 24));
 FUNC_1(FUNC_0(VAR_3, 0, VAR_30), VAR_33);

 FUNC_2(FUNC_0(VAR_3, 0, VAR_12), 0x0, ~0x100);
 FUNC_2(FUNC_0(VAR_3, 0, VAR_22),
   VAR_4,
   ~VAR_4);
}
