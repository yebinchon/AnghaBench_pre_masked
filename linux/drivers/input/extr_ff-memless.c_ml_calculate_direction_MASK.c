
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static u16 FUNC_0(u16 VAR_0, u16 VAR_1,
      u16 VAR_2, u16 VAR_3)
{
 if (!VAR_1)
  return VAR_2;
 if (!VAR_3)
  return VAR_0;
 return (((u32)(VAR_0 >> 1) * VAR_1 +
   (VAR_2 >> 1) * VAR_3) /
  (VAR_1 + VAR_3)) << 1;
}
