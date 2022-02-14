
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_dw_hdmi {int* buf_src; int* buf_dst; } ;



__attribute__((used)) static void FUNC_0(struct snd_dw_hdmi *VAR_0,
 size_t VAR_1, size_t VAR_2)
{
 u32 *VAR_3 = VAR_0->buf_src + VAR_1;
 u32 *VAR_4 = VAR_0->buf_dst + VAR_1;
 u32 *VAR_5 = VAR_0->buf_src + VAR_1 + VAR_2;

 do {
  u32 VAR_6, VAR_7 = *VAR_3++;

  VAR_6 = (VAR_7 & 8) << (28 - 3);

  VAR_7 >>= 4;

  *VAR_4++ = VAR_7 | VAR_6;
 } while (VAR_3 < VAR_5);
}
