
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int* w; } ;
struct TYPE_5__ {int* w; } ;
struct TYPE_7__ {TYPE_2__ state; TYPE_1__ buf; } ;
typedef TYPE_3__ sha1nfo ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(sha1nfo *VAR_0)
{
 uint32_t VAR_1, VAR_2, VAR_3 = VAR_0->state.w[0], VAR_4 = VAR_0->state.w[1], VAR_5 = VAR_0->state.w[2], VAR_6 = VAR_0->state.w[3], VAR_7 = VAR_0->state.w[4];
 for (VAR_1 = 0; VAR_1 < 80; VAR_1++) {
  if (VAR_1 >= 16) {
   VAR_2 = VAR_0->buf.w[(VAR_1+13)&15] ^ VAR_0->buf.w[(VAR_1+8)&15] ^ VAR_0->buf.w[(VAR_1+2)&15] ^ VAR_0->buf.w[VAR_1&15];
   VAR_0->buf.w[VAR_1&15] = FUNC_0(VAR_2, 1);
  }
  if (VAR_1 < 20) VAR_2 = 0x5a827999 + (VAR_6 ^ (VAR_4 & (VAR_5 ^ VAR_6)));
  else if (VAR_1 < 40) VAR_2 = 0x6ed9eba1 + (VAR_4 ^ VAR_5 ^ VAR_6);
  else if (VAR_1 < 60) VAR_2 = 0x8f1bbcdc + ((VAR_4 & VAR_5) | (VAR_6 & (VAR_4 | VAR_5)));
  else VAR_2 = 0xca62c1d6 + (VAR_4 ^ VAR_5 ^ VAR_6);
  VAR_2 += FUNC_0(VAR_3, 5) + VAR_7 + VAR_0->buf.w[VAR_1&15];
  VAR_7 = VAR_6; VAR_6 = VAR_5; VAR_5 = FUNC_0(VAR_4, 30); VAR_4 = VAR_3; VAR_3 = VAR_2;
 }
 VAR_0->state.w[0] += VAR_3; VAR_0->state.w[1] += VAR_4; VAR_0->state.w[2] += VAR_5; VAR_0->state.w[3] += VAR_6; VAR_0->state.w[4] += VAR_7;
}
