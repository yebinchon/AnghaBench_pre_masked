
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int grbm_soft_reset; int srbm_soft_reset; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


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
 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int) ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
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

__attribute__((used)) static bool FUNC_3(void *VAR_35)
{
 struct amdgpu_device *VAR_36 = (struct amdgpu_device *)VAR_35;
 u32 VAR_37 = 0, VAR_38 = 0;
 u32 VAR_39;


 VAR_39 = FUNC_2(VAR_32);
 if (VAR_39 & (VAR_14 | VAR_15 |
     VAR_6 | VAR_17 |
     VAR_18 | VAR_19 |
     VAR_10 | VAR_7 |
     VAR_11 | VAR_16 |
     VAR_12 | VAR_13 |
     VAR_8 | VAR_9)) {
  VAR_37 = FUNC_1(VAR_37,
      VAR_4, VAR_22, 1);
  VAR_37 = FUNC_1(VAR_37,
      VAR_4, VAR_26, 1);
  VAR_38 = FUNC_1(VAR_38,
      VAR_30, VAR_27, 1);
 }


 VAR_39 = FUNC_2(VAR_33);
 if (FUNC_0(VAR_39, VAR_5, VAR_20))
  VAR_37 = FUNC_1(VAR_37,
      VAR_4, VAR_28, 1);

 if (FUNC_0(VAR_39, VAR_5, VAR_1) ||
     FUNC_0(VAR_39, VAR_5, VAR_0) ||
     FUNC_0(VAR_39, VAR_5, VAR_2)) {
  VAR_37 = FUNC_1(VAR_37, VAR_4,
      VAR_24, 1);
  VAR_37 = FUNC_1(VAR_37, VAR_4,
      VAR_23, 1);
  VAR_37 = FUNC_1(VAR_37, VAR_4,
      VAR_25, 1);
  VAR_38 = FUNC_1(VAR_38, VAR_30,
      VAR_27, 1);
 }


 VAR_39 = FUNC_2(VAR_34);
 if (FUNC_0(VAR_39, VAR_31, VAR_3))
  VAR_38 = FUNC_1(VAR_38,
      VAR_30, VAR_27, 1);
 if (FUNC_0(VAR_39, VAR_31, VAR_21))
  VAR_38 = FUNC_1(VAR_38,
      VAR_30, VAR_29, 1);

 if (VAR_37 || VAR_38) {
  VAR_36->gfx.grbm_soft_reset = VAR_37;
  VAR_36->gfx.srbm_soft_reset = VAR_38;
  return 1;
 } else {
  VAR_36->gfx.grbm_soft_reset = 0;
  VAR_36->gfx.srbm_soft_reset = 0;
  return 0;
 }
}
