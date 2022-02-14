
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct amdgpu_device {scalar_t__*** reg_offset; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static u32 FUNC_0(struct amdgpu_device *VAR_5, u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 if (VAR_7 >= VAR_2 &&
     VAR_7 <= VAR_1) {
  VAR_8 = VAR_5->reg_offset[VAR_0][0][1];
  if (VAR_6 == 1)
   VAR_7 += VAR_3;
 } else {
  VAR_8 = VAR_5->reg_offset[VAR_0][0][0];
  if (VAR_6 == 1)
   VAR_7 += VAR_4;
 }

 return VAR_8 + VAR_7;
}
