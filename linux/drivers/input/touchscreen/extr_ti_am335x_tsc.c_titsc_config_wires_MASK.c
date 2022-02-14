
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct titsc {int* config_inp; int bit_xp; int inp_xp; int bit_xn; int inp_xn; int bit_yp; int inp_yp; int bit_yn; int inp_yn; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct titsc *VAR_2)
{
 u32 VAR_3[4];
 u32 VAR_4[4];
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {




  VAR_3[VAR_5] = (VAR_2->config_inp[VAR_5] & 0xF0) >> 4;
  VAR_4[VAR_5] = VAR_2->config_inp[VAR_5] & 0x0F;
  if (FUNC_1(VAR_3[VAR_5] > 7))
   return -VAR_0;
  if (FUNC_1(VAR_4[VAR_5] > FUNC_0(VAR_1)))
   return -VAR_0;
 }

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  int VAR_7;
  int VAR_8;

  VAR_7 = VAR_3[VAR_5];
  VAR_8 = VAR_4[VAR_5];
  VAR_6 = VAR_1[VAR_8];
  if (VAR_6 == 0)
   return -VAR_0;
  switch (VAR_8) {
  case 0:
   VAR_2->bit_xp = VAR_6;
   VAR_2->inp_xp = VAR_7;
   break;

  case 1:
   VAR_2->bit_xn = VAR_6;
   VAR_2->inp_xn = VAR_7;
   break;

  case 2:
   VAR_2->bit_yp = VAR_6;
   VAR_2->inp_yp = VAR_7;
   break;
  case 3:
   VAR_2->bit_yn = VAR_6;
   VAR_2->inp_yn = VAR_7;
   break;
  }
 }
 return 0;
}
