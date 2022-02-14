
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0,
        u32 VAR_1,
        u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = (256 * ((8 * (VAR_0 - 1)) - VAR_2)) / (VAR_1 - 1);
 VAR_4 = ((VAR_3 * (VAR_1 - 1)) + (256 * VAR_2)) / 2048;

 if (VAR_4 > VAR_0 - 1)
  VAR_3--;

 return VAR_3;
}
