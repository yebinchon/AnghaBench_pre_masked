
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


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
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_2(void *VAR_20, u32 *VAR_21)
{
 struct amdgpu_device *VAR_22 = (struct amdgpu_device *)VAR_20;
 int VAR_23;

 if (FUNC_1(VAR_22))
  *VAR_21 = 0;


 VAR_23 = FUNC_0(VAR_18);
 if (!(VAR_23 & VAR_13))
  *VAR_21 |= VAR_5;


 VAR_23 = FUNC_0(VAR_17);
 if (VAR_23 & VAR_11)
  *VAR_21 |= VAR_0;


 if (VAR_23 & VAR_12)
  *VAR_21 |= VAR_1;


 VAR_23 = FUNC_0(VAR_15);
 if (!(VAR_23 & VAR_9))
  *VAR_21 |= VAR_2;


 if (!(VAR_23 & VAR_8))
  *VAR_21 |= VAR_3;


 VAR_23 = FUNC_0(VAR_19);
 if (VAR_23 & VAR_14)
  *VAR_21 |= VAR_7 | VAR_6;


 VAR_23 = FUNC_0(VAR_16);
 if (VAR_23 & VAR_10)
  *VAR_21 |= VAR_4 | VAR_6;
}
