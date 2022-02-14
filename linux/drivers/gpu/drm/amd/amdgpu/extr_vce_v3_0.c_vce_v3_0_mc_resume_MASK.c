
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int gpu_addr; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ vce; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_28, int VAR_29)
{
 uint32_t VAR_30, VAR_31;

 FUNC_3(VAR_7, 0, ~(1 << 16));
 FUNC_3(VAR_19, 0x1FF000, ~0xFF9FF000);
 FUNC_3(VAR_20, 0x3F, ~0x3F);
 FUNC_0(VAR_8, 0x1FF);

 FUNC_0(VAR_10, 0x00398000);
 FUNC_3(VAR_9, 0x0, ~0x1);
 FUNC_0(VAR_12, 0);
 FUNC_0(VAR_13, 0);
 FUNC_0(VAR_18, 0);
 FUNC_2(VAR_27, 0x00100000);

 if (VAR_28->asic_type >= VAR_1) {
  FUNC_0(VAR_15, (VAR_28->vce.gpu_addr >> 8));
  FUNC_0(VAR_16, (VAR_28->vce.gpu_addr >> 8));
  FUNC_0(VAR_17, (VAR_28->vce.gpu_addr >> 8));
 } else
  FUNC_0(VAR_14, (VAR_28->vce.gpu_addr >> 8));
 VAR_30 = VAR_0;
 VAR_31 = VAR_5;
 FUNC_0(VAR_21, VAR_30 & 0x7fffffff);
 FUNC_0(VAR_24, VAR_31);

 if (VAR_29 == 0) {
  VAR_30 += VAR_31;
  VAR_31 = VAR_6;
  FUNC_0(VAR_22, VAR_30 & 0x7fffffff);
  FUNC_0(VAR_25, VAR_31);
  VAR_30 += VAR_31;
  VAR_31 = VAR_4;
  FUNC_0(VAR_23, VAR_30 & 0x7fffffff);
  FUNC_0(VAR_26, VAR_31);
 } else {
  VAR_30 += VAR_31 + VAR_6 + VAR_4;
  VAR_31 = VAR_6;
  FUNC_0(VAR_22, VAR_30 & 0xfffffff);
  FUNC_0(VAR_25, VAR_31);
  VAR_30 += VAR_31;
  VAR_31 = VAR_4;
  FUNC_0(VAR_23, VAR_30 & 0xfffffff);
  FUNC_0(VAR_26, VAR_31);
 }

 FUNC_3(VAR_11, 0x0, ~0x100);
 FUNC_1(VAR_2, VAR_3, 1);
}
