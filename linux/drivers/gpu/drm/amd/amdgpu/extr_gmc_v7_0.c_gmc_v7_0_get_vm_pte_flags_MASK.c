
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static uint64_t FUNC_0(struct amdgpu_device *VAR_6,
       uint32_t VAR_7)
{
 uint64_t VAR_8 = 0;

 if (VAR_7 & VAR_4)
  VAR_8 |= VAR_1;
 if (VAR_7 & VAR_5)
  VAR_8 |= VAR_2;
 if (VAR_7 & VAR_3)
  VAR_8 |= VAR_0;

 return VAR_8;
}
