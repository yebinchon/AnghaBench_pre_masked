
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* bw; } ;
struct dib7000p_state {TYPE_2__ cfg; } ;
typedef int s16 ;
struct TYPE_3__ {int xtal_hz; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dib7000p_state*,int,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct dib7000p_state *VAR_0, u32 VAR_1, u32 VAR_2)
{
 static s16 VAR_3[] = { 16143, 14402, 12238, 9713, 6902, 3888, 759, -2392 };
 static u8 VAR_4[] = { 0, 2, 3, 5, 6, 8, 9, 11, 13, 14, 16, 17, 19, 20, 22,
  24, 25, 27, 28, 30, 31, 33, 34, 36, 38, 39, 41, 42, 44, 45, 47, 48, 50, 51,
  53, 55, 56, 58, 59, 61, 62, 64, 65, 67, 68, 70, 71, 73, 74, 76, 77, 79, 80,
  82, 83, 85, 86, 88, 89, 91, 92, 94, 95, 97, 98, 99, 101, 102, 104, 105,
  107, 108, 109, 111, 112, 114, 115, 117, 118, 119, 121, 122, 123, 125, 126,
  128, 129, 130, 132, 133, 134, 136, 137, 138, 140, 141, 142, 144, 145, 146,
  147, 149, 150, 151, 152, 154, 155, 156, 157, 159, 160, 161, 162, 164, 165,
  166, 167, 168, 170, 171, 172, 173, 174, 175, 177, 178, 179, 180, 181, 182,
  183, 184, 185, 186, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198,
  199, 200, 201, 202, 203, 204, 205, 206, 207, 207, 208, 209, 210, 211, 212,
  213, 214, 215, 215, 216, 217, 218, 219, 220, 220, 221, 222, 223, 224, 224,
  225, 226, 227, 227, 228, 229, 229, 230, 231, 231, 232, 233, 233, 234, 235,
  235, 236, 237, 237, 238, 238, 239, 239, 240, 241, 241, 242, 242, 243, 243,
  244, 244, 245, 245, 245, 246, 246, 247, 247, 248, 248, 248, 249, 249, 249,
  250, 250, 250, 251, 251, 251, 252, 252, 252, 252, 253, 253, 253, 253, 254,
  254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255
 };

 u32 VAR_5 = VAR_0->cfg.bw->xtal_hz / 1000;
 int VAR_6 = FUNC_0(VAR_1, VAR_5) * VAR_5 - VAR_1;
 int VAR_7;
 int VAR_8[8], VAR_9[8];
 int VAR_10 = VAR_2;
 u32 VAR_11;

 FUNC_2("relative position of the Spur: %dk (RF: %dk, XTAL: %dk)\n", VAR_6, VAR_1, VAR_5);

 if (VAR_6 < -VAR_10 / 2 || VAR_6 > VAR_10 / 2)
  return;

 VAR_10 /= 100;

 FUNC_1(VAR_0, 142, 0x0610);

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_11 = ((VAR_6 * (VAR_7 + 1) * 112 * 80 / VAR_10) / 1000) & 0x3ff;

  if (VAR_11 == 0) {
   VAR_8[VAR_7] = 256;
   VAR_9[VAR_7] = 0;
  } else if (VAR_11 < 256) {
   VAR_8[VAR_7] = VAR_4[256 - (VAR_11 & 0xff)];
   VAR_9[VAR_7] = VAR_4[VAR_11 & 0xff];
  } else if (VAR_11 == 256) {
   VAR_8[VAR_7] = 0;
   VAR_9[VAR_7] = 256;
  } else if (VAR_11 < 512) {
   VAR_8[VAR_7] = -VAR_4[VAR_11 & 0xff];
   VAR_9[VAR_7] = VAR_4[256 - (VAR_11 & 0xff)];
  } else if (VAR_11 == 512) {
   VAR_8[VAR_7] = -256;
   VAR_9[VAR_7] = 0;
  } else if (VAR_11 < 768) {
   VAR_8[VAR_7] = -VAR_4[256 - (VAR_11 & 0xff)];
   VAR_9[VAR_7] = -VAR_4[VAR_11 & 0xff];
  } else if (VAR_11 == 768) {
   VAR_8[VAR_7] = 0;
   VAR_9[VAR_7] = -256;
  } else {
   VAR_8[VAR_7] = VAR_4[VAR_11 & 0xff];
   VAR_9[VAR_7] = -VAR_4[256 - (VAR_11 & 0xff)];
  }

  VAR_8[VAR_7] *= VAR_3[VAR_7];
  VAR_8[VAR_7] += (1 << 14);
  if (VAR_8[VAR_7] >= (1 << 24))
   VAR_8[VAR_7] = (1 << 24) - 1;
  VAR_8[VAR_7] /= (1 << 15);

  VAR_9[VAR_7] *= VAR_3[VAR_7];
  VAR_9[VAR_7] += (1 << 14);
  if (VAR_9[VAR_7] >= (1 << 24))
   VAR_9[VAR_7] = (1 << 24) - 1;
  VAR_9[VAR_7] /= (1 << 15);

  FUNC_2("PALF COEF: %d re: %d im: %d\n", VAR_7, VAR_8[VAR_7], VAR_9[VAR_7]);

  FUNC_1(VAR_0, 143, (0 << 14) | (VAR_7 << 10) | (VAR_8[VAR_7] & 0x3ff));
  FUNC_1(VAR_0, 144, VAR_9[VAR_7] & 0x3ff);
  FUNC_1(VAR_0, 143, (1 << 14) | (VAR_7 << 10) | (VAR_8[VAR_7] & 0x3ff));
 }
 FUNC_1(VAR_0, 143, 0);
}
