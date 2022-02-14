
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct TYPE_3__ {int rounds; int* xkey; } ;
typedef TYPE_1__ cast_key ;


 size_t FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

void FUNC_4(cast_key* VAR_4, const u_int8_t* VAR_5, int VAR_6)
{
u_int32_t VAR_7[4] = {0, 0, 0, 0}, VAR_8[4] = {0, 0, 0, 0}, VAR_9[4];
int VAR_10;


 VAR_4->rounds = (VAR_6 <= 10 ? 12 : 16);


 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  VAR_9[VAR_10] = 0;
  if ((VAR_10*4+0) < VAR_6) VAR_9[VAR_10] = (u_int32_t)VAR_5[VAR_10*4+0] << 24;
  if ((VAR_10*4+1) < VAR_6) VAR_9[VAR_10] |= (u_int32_t)VAR_5[VAR_10*4+1] << 16;
  if ((VAR_10*4+2) < VAR_6) VAR_9[VAR_10] |= (u_int32_t)VAR_5[VAR_10*4+2] << 8;
  if ((VAR_10*4+3) < VAR_6) VAR_9[VAR_10] |= (u_int32_t)VAR_5[VAR_10*4+3];
 }

 for (VAR_10 = 0; VAR_10 < 32; VAR_10+=4) {
  switch (VAR_10 & 4) {
   case 0:
   VAR_7[0] = VAR_8[0] = VAR_9[0] ^ VAR_0[FUNC_1(VAR_9[3])] ^
    VAR_1[FUNC_3(VAR_9[3])] ^ VAR_2[FUNC_0(VAR_9[3])] ^
    VAR_3[FUNC_2(VAR_9[3])] ^ VAR_2[FUNC_0(VAR_9[2])];
   VAR_7[1] = VAR_8[1] = VAR_9[2] ^ VAR_0[FUNC_0(VAR_8[0])] ^
    VAR_1[FUNC_2(VAR_8[0])] ^ VAR_2[FUNC_1(VAR_8[0])] ^
    VAR_3[FUNC_3(VAR_8[0])] ^ VAR_3[FUNC_2(VAR_9[2])];
   VAR_7[2] = VAR_8[2] = VAR_9[3] ^ VAR_0[FUNC_3(VAR_8[1])] ^
    VAR_1[FUNC_2(VAR_8[1])] ^ VAR_2[FUNC_1(VAR_8[1])] ^
    VAR_3[FUNC_0(VAR_8[1])] ^ VAR_0[FUNC_1(VAR_9[2])];
   VAR_7[3] = VAR_8[3] = VAR_9[1] ^ VAR_0[FUNC_2(VAR_8[2])] ^
    VAR_1[FUNC_1(VAR_8[2])] ^ VAR_2[FUNC_3(VAR_8[2])] ^
    VAR_3[FUNC_0(VAR_8[2])] ^ VAR_1[FUNC_3(VAR_9[2])];
   break;
   case 4:
   VAR_7[0] = VAR_9[0] = VAR_8[2] ^ VAR_0[FUNC_1(VAR_8[1])] ^
    VAR_1[FUNC_3(VAR_8[1])] ^ VAR_2[FUNC_0(VAR_8[1])] ^
    VAR_3[FUNC_2(VAR_8[1])] ^ VAR_2[FUNC_0(VAR_8[0])];
   VAR_7[1] = VAR_9[1] = VAR_8[0] ^ VAR_0[FUNC_0(VAR_9[0])] ^
    VAR_1[FUNC_2(VAR_9[0])] ^ VAR_2[FUNC_1(VAR_9[0])] ^
    VAR_3[FUNC_3(VAR_9[0])] ^ VAR_3[FUNC_2(VAR_8[0])];
   VAR_7[2] = VAR_9[2] = VAR_8[1] ^ VAR_0[FUNC_3(VAR_9[1])] ^
    VAR_1[FUNC_2(VAR_9[1])] ^ VAR_2[FUNC_1(VAR_9[1])] ^
    VAR_3[FUNC_0(VAR_9[1])] ^ VAR_0[FUNC_1(VAR_8[0])];
   VAR_7[3] = VAR_9[3] = VAR_8[3] ^ VAR_0[FUNC_2(VAR_9[2])] ^
    VAR_1[FUNC_1(VAR_9[2])] ^ VAR_2[FUNC_3(VAR_9[2])] ^
    VAR_3[FUNC_0(VAR_9[2])] ^ VAR_1[FUNC_3(VAR_8[0])];
   break;
  }
  switch (VAR_10 & 12) {
   case 0:
   case 12:
   VAR_4->xkey[VAR_10+0] = VAR_0[FUNC_0(VAR_7[2])] ^ VAR_1[FUNC_1(VAR_7[2])] ^
    VAR_2[FUNC_3(VAR_7[1])] ^ VAR_3[FUNC_2(VAR_7[1])];
   VAR_4->xkey[VAR_10+1] = VAR_0[FUNC_2(VAR_7[2])] ^ VAR_1[FUNC_3(VAR_7[2])] ^
    VAR_2[FUNC_1(VAR_7[1])] ^ VAR_3[FUNC_0(VAR_7[1])];
   VAR_4->xkey[VAR_10+2] = VAR_0[FUNC_0(VAR_7[3])] ^ VAR_1[FUNC_1(VAR_7[3])] ^
    VAR_2[FUNC_3(VAR_7[0])] ^ VAR_3[FUNC_2(VAR_7[0])];
   VAR_4->xkey[VAR_10+3] = VAR_0[FUNC_2(VAR_7[3])] ^ VAR_1[FUNC_3(VAR_7[3])] ^
    VAR_2[FUNC_1(VAR_7[0])] ^ VAR_3[FUNC_0(VAR_7[0])];
   break;
   case 4:
   case 8:
   VAR_4->xkey[VAR_10+0] = VAR_0[FUNC_3(VAR_7[0])] ^ VAR_1[FUNC_2(VAR_7[0])] ^
    VAR_2[FUNC_0(VAR_7[3])] ^ VAR_3[FUNC_1(VAR_7[3])];
   VAR_4->xkey[VAR_10+1] = VAR_0[FUNC_1(VAR_7[0])] ^ VAR_1[FUNC_0(VAR_7[0])] ^
    VAR_2[FUNC_2(VAR_7[3])] ^ VAR_3[FUNC_3(VAR_7[3])];
   VAR_4->xkey[VAR_10+2] = VAR_0[FUNC_3(VAR_7[1])] ^ VAR_1[FUNC_2(VAR_7[1])] ^
    VAR_2[FUNC_0(VAR_7[2])] ^ VAR_3[FUNC_1(VAR_7[2])];
   VAR_4->xkey[VAR_10+3] = VAR_0[FUNC_1(VAR_7[1])] ^ VAR_1[FUNC_0(VAR_7[1])] ^
    VAR_2[FUNC_2(VAR_7[2])] ^ VAR_3[FUNC_3(VAR_7[2])];
   break;
  }
  switch (VAR_10 & 12) {
   case 0:
   VAR_4->xkey[VAR_10+0] ^= VAR_0[FUNC_2(VAR_8[0])];
   VAR_4->xkey[VAR_10+1] ^= VAR_1[FUNC_2(VAR_8[1])];
   VAR_4->xkey[VAR_10+2] ^= VAR_2[FUNC_1(VAR_8[2])];
   VAR_4->xkey[VAR_10+3] ^= VAR_3[FUNC_0(VAR_8[3])];
   break;
   case 4:
   VAR_4->xkey[VAR_10+0] ^= VAR_0[FUNC_0(VAR_9[2])];
   VAR_4->xkey[VAR_10+1] ^= VAR_1[FUNC_1(VAR_9[3])];
   VAR_4->xkey[VAR_10+2] ^= VAR_2[FUNC_3(VAR_9[0])];
   VAR_4->xkey[VAR_10+3] ^= VAR_3[FUNC_3(VAR_9[1])];
   break;
   case 8:
   VAR_4->xkey[VAR_10+0] ^= VAR_0[FUNC_1(VAR_8[2])];
   VAR_4->xkey[VAR_10+1] ^= VAR_1[FUNC_0(VAR_8[3])];
   VAR_4->xkey[VAR_10+2] ^= VAR_2[FUNC_2(VAR_8[0])];
   VAR_4->xkey[VAR_10+3] ^= VAR_3[FUNC_2(VAR_8[1])];
   break;
   case 12:
   VAR_4->xkey[VAR_10+0] ^= VAR_0[FUNC_3(VAR_9[0])];
   VAR_4->xkey[VAR_10+1] ^= VAR_1[FUNC_3(VAR_9[1])];
   VAR_4->xkey[VAR_10+2] ^= VAR_2[FUNC_0(VAR_9[2])];
   VAR_4->xkey[VAR_10+3] ^= VAR_3[FUNC_1(VAR_9[3])];
   break;
  }
  if (VAR_10 >= 16) {
   VAR_4->xkey[VAR_10+0] &= 31;
   VAR_4->xkey[VAR_10+1] &= 31;
   VAR_4->xkey[VAR_10+2] &= 31;
   VAR_4->xkey[VAR_10+3] &= 31;
  }
 }

 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  VAR_7[VAR_10] = VAR_9[VAR_10] = VAR_8[VAR_10] = 0;
 }
}
