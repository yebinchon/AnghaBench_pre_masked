
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_dw_hdmi {int* buf_src; int* buf_dst; int iec_offset; unsigned int channels; int ** cs; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct snd_dw_hdmi *VAR_0,
 size_t VAR_1, size_t VAR_2)
{
 u32 *VAR_3 = VAR_0->buf_src + VAR_1;
 u32 *VAR_4 = VAR_0->buf_dst + VAR_1;
 u32 *VAR_5 = VAR_0->buf_src + VAR_1 + VAR_2;

 do {
  unsigned VAR_6;
  u8 *VAR_7;

  VAR_7 = VAR_0->cs[VAR_0->iec_offset++];
  if (VAR_0->iec_offset >= 192)
   VAR_0->iec_offset = 0;

  VAR_6 = VAR_0->channels;
  do {
   u32 VAR_8 = *VAR_3++;

   VAR_8 &= ~0xff000000;
   VAR_8 |= *VAR_7++ << 24;
   VAR_8 |= FUNC_0(VAR_8 & ~0xf8000000);

   *VAR_4++ = VAR_8;
  } while (--VAR_6);
 } while (VAR_3 < VAR_5);
}
