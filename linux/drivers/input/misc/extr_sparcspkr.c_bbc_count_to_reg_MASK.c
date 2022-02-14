
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct bbc_beep_info {unsigned int clock_freq; } ;



__attribute__((used)) static u32 FUNC_0(struct bbc_beep_info *VAR_0, unsigned int VAR_1)
{
 u32 VAR_2, VAR_3 = VAR_0->clock_freq;
 int VAR_4;

 if (!VAR_1)
  return 0;

 if (VAR_1 <= VAR_3 >> 20)
  return 1 << 18;

 if (VAR_1 >= VAR_3 >> 12)
  return 1 << 10;

 VAR_2 = 1 << 18;
 for (VAR_4 = 19; VAR_4 >= 11; VAR_4--) {
  VAR_2 >>= 1;
  if (VAR_1 <= VAR_3 >> VAR_4)
   break;
 }

 return VAR_2;
}
