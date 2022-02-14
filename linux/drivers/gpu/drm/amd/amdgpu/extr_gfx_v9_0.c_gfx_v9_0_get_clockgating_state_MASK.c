
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {scalar_t__ asic_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void FUNC_2(void *VAR_22, u32 *VAR_23)
{
 struct amdgpu_device *VAR_24 = (struct amdgpu_device *)VAR_22;
 int VAR_25;

 if (FUNC_1(VAR_24))
  *VAR_23 = 0;


 VAR_25 = FUNC_0(VAR_10, 0, VAR_20);
 if (!(VAR_25 & VAR_15))
  *VAR_23 |= VAR_5;


 VAR_25 = FUNC_0(VAR_10, 0, VAR_18);
 if (VAR_25 & VAR_13)
  *VAR_23 |= VAR_2;


 if (VAR_25 & VAR_14)
  *VAR_23 |= VAR_3;


 VAR_25 = FUNC_0(VAR_10, 0, VAR_21);
 if (VAR_25 & VAR_16)
  *VAR_23 |= VAR_7 | VAR_6;


 VAR_25 = FUNC_0(VAR_10, 0, VAR_17);
 if (VAR_25 & VAR_9)
  *VAR_23 |= VAR_4 | VAR_6;

 if (VAR_24->asic_type != VAR_8) {

  VAR_25 = FUNC_0(VAR_10, 0, VAR_19);
  if (VAR_25 & VAR_11)
   *VAR_23 |= VAR_0;


  if (VAR_25 & VAR_12)
   *VAR_23 |= VAR_1;
 }
}
