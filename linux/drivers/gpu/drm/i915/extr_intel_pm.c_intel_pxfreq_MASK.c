
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static unsigned long FUNC_0(u32 VAR_0)
{
 unsigned long VAR_1;
 int VAR_2 = (VAR_0 & 0x3f0000) >> 16;
 int VAR_3 = (VAR_0 & 0x3000) >> 12;
 int VAR_4 = (VAR_0 & 0x7);

 if (!VAR_4)
  return 0;

 VAR_1 = ((VAR_2 * 133333) / ((1<<VAR_3) * VAR_4));

 return VAR_1;
}
