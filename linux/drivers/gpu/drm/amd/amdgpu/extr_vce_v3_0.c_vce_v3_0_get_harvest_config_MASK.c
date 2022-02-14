
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {scalar_t__ asic_type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static unsigned FUNC_1(struct amdgpu_device *VAR_15)
{
 u32 VAR_16;

 if ((VAR_15->asic_type == VAR_5) ||
     (VAR_15->asic_type == VAR_9))
  return VAR_1;

 if (VAR_15->flags & VAR_2)
  VAR_16 = (FUNC_0(VAR_14) &
         VAR_11) >>
   VAR_12;
 else
  VAR_16 = (FUNC_0(VAR_13) &
         VAR_3) >>
   VAR_4;

 switch (VAR_16) {
 case 1:
  return VAR_0;
 case 2:
  return VAR_1;
 case 3:
  return VAR_0 | VAR_1;
 default:
  if ((VAR_15->asic_type == VAR_6) ||
      (VAR_15->asic_type == VAR_7) ||
      (VAR_15->asic_type == VAR_8) ||
      (VAR_15->asic_type == VAR_10))
   return VAR_1;

  return 0;
 }
}
