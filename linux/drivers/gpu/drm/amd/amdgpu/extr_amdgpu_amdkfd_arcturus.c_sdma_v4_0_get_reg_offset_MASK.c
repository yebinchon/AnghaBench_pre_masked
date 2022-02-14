
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int*** reg_offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;

__attribute__((used)) static u32 FUNC_0(struct amdgpu_device *VAR_8,
  u32 VAR_9, u32 VAR_10)
{
 switch (VAR_9) {
 case 0:
  return (VAR_8->reg_offset[VAR_0][0][0] + VAR_10);
 case 1:
  return (VAR_8->reg_offset[VAR_1][0][1] + VAR_10);
 case 2:
  return (VAR_8->reg_offset[VAR_2][0][1] + VAR_10);
 case 3:
  return (VAR_8->reg_offset[VAR_3][0][1] + VAR_10);
 case 4:
  return (VAR_8->reg_offset[VAR_4][0][1] + VAR_10);
 case 5:
  return (VAR_8->reg_offset[VAR_5][0][1] + VAR_10);
 case 6:
  return (VAR_8->reg_offset[VAR_6][0][1] + VAR_10);
 case 7:
  return (VAR_8->reg_offset[VAR_7][0][1] + VAR_10);
 default:
  break;
 }
 return 0;
}
