
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int gpu_addr; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int,int) ;
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

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_23)
{
 uint32_t VAR_24, VAR_25;

 FUNC_2(VAR_6, 0, ~(1 << 16));
 FUNC_2(VAR_15, 0x1FF000, ~0xFF9FF000);
 FUNC_2(VAR_16, 0x3F, ~0x3F);
 FUNC_0(VAR_7, 0xf7);

 FUNC_0(VAR_9, 0x00398000);
 FUNC_2(VAR_8, 0x0, ~0x1);
 FUNC_0(VAR_11, 0);
 FUNC_0(VAR_12, 0);
 FUNC_0(VAR_14, 0);

 FUNC_0(VAR_13, (VAR_23->vce.gpu_addr >> 8));

 VAR_25 = VAR_0;
 VAR_24 = VAR_4;
 FUNC_0(VAR_17, VAR_25 & 0x7fffffff);
 FUNC_0(VAR_20, VAR_24);

 VAR_25 += VAR_24;
 VAR_24 = VAR_5;
 FUNC_0(VAR_18, VAR_25 & 0x7fffffff);
 FUNC_0(VAR_21, VAR_24);

 VAR_25 += VAR_24;
 VAR_24 = VAR_3;
 FUNC_0(VAR_19, VAR_25 & 0x7fffffff);
 FUNC_0(VAR_22, VAR_24);

 FUNC_2(VAR_10, 0x0, ~0x100);
 FUNC_1(VAR_1, VAR_2, 1);
}
