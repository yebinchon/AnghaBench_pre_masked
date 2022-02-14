
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct amdgpu_device *VAR_1,
            const u16 VAR_2,
            const u16 VAR_3)
{
 u64 VAR_4 = (u64)VAR_0;
 u64 VAR_5 = (u64)VAR_2;
 u64 VAR_6 = (u64)VAR_3;
 u64 VAR_7, VAR_8, VAR_9;

 if ((VAR_5 == 0) || (VAR_6 == 0))
  return 0;

 VAR_8 = FUNC_0((u64)1024 * VAR_6 * VAR_6 * ((u64)1000 + VAR_4), (u64)1000);
 VAR_9 = VAR_5 * VAR_5;
 VAR_7 = FUNC_0(VAR_8, VAR_9);

 if (VAR_7 > (u64)0xFFFF)
  return 0;

 return (u16)VAR_7;
}
