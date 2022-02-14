
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
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct amdgpu_device *VAR_4,
         u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = (FUNC_0(VAR_0) & VAR_2) >> VAR_3;

 if (VAR_9 >= 4)
  VAR_6 = 16384;
 else
  VAR_6 = 1 << (VAR_9 + 10);

 VAR_7 = 1 << ((FUNC_0(VAR_1) & 0x3) + 3);
 VAR_8 = ((VAR_5 * 10) * VAR_7 / VAR_6 - 32) / 64;

 return VAR_8;
}
