
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_card {unsigned int split_timeout_cycles; } ;



__attribute__((used)) static u32 FUNC_0(struct fw_card *VAR_0,
        u32 VAR_1)
{
 unsigned int VAR_2;
 u32 VAR_3;

 VAR_2 = VAR_0->split_timeout_cycles;
 VAR_2 += VAR_1 & 0x1fff;

 VAR_3 = VAR_1 & ~0x1fff;
 VAR_3 += (VAR_2 / 8000) << 13;
 VAR_3 |= VAR_2 % 8000;

 return VAR_3;
}
