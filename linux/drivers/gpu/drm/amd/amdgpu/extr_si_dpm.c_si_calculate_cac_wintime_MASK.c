
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static u32 FUNC_2(struct amdgpu_device *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 VAR_3 = FUNC_1(VAR_2);

 if (VAR_3 == 0)
  return 0;

 VAR_5 = FUNC_0(VAR_1) & VAR_0;
 VAR_6 = ((VAR_5 & 0xFFFF0000) >> 16) * (VAR_5 & 0x0000FFFF);

 VAR_4 = (VAR_6 * 100) / VAR_3;

 return VAR_4;
}
