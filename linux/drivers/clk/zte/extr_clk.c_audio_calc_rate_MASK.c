
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_zx_audio_divider {int dummy; } ;



__attribute__((used)) static unsigned long FUNC_0(struct clk_zx_audio_divider *VAR_0,
         u32 VAR_1, u32 VAR_2,
         unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_5 = VAR_1 & 0xffff;
 VAR_6 = (VAR_1 >> 16) & 0xffff;

 VAR_5 = (VAR_2 & 0xffff) * VAR_6 + VAR_5;
 VAR_4 = (VAR_3 * VAR_6) / VAR_5;

 return VAR_4;
}
