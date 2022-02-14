
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int s32 ;
typedef int limb ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(u8 *VAR_0, limb *VAR_1) {
  int VAR_2;
  int VAR_3;
  s32 VAR_4[10];
  s32 VAR_5;


  for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
    VAR_4[VAR_2] = VAR_1[VAR_2];
  }

  for (VAR_3 = 0; VAR_3 < 2; ++VAR_3) {
    for (VAR_2 = 0; VAR_2 < 9; ++VAR_2) {
      if ((VAR_2 & 1) == 1) {


        const s32 VAR_6 = VAR_4[VAR_2] >> 31;
        const s32 VAR_7 = -((VAR_4[VAR_2] & VAR_6) >> 25);
        VAR_4[VAR_2] = VAR_4[VAR_2] + (VAR_7 << 25);
        VAR_4[VAR_2+1] = VAR_4[VAR_2+1] - VAR_7;
      } else {
        const s32 VAR_8 = VAR_4[VAR_2] >> 31;
        const s32 VAR_9 = -((VAR_4[VAR_2] & VAR_8) >> 26);
        VAR_4[VAR_2] = VAR_4[VAR_2] + (VAR_9 << 26);
        VAR_4[VAR_2+1] = VAR_4[VAR_2+1] - VAR_9;
      }
    }



    {
      const s32 VAR_10 = VAR_4[9] >> 31;
      const s32 VAR_11 = -((VAR_4[9] & VAR_10) >> 25);
      VAR_4[9] = VAR_4[9] + (VAR_11 << 25);
      VAR_4[0] = VAR_4[0] - (VAR_11 * 19);
    }




  }
  {
    const s32 VAR_12 = VAR_4[0] >> 31;
    const s32 VAR_13 = -((VAR_4[0] & VAR_12) >> 26);
    VAR_4[0] = VAR_4[0] + (VAR_13 << 26);
    VAR_4[1] = VAR_4[1] - VAR_13;
  }



  for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
    for (VAR_2 = 0; VAR_2 < 9; VAR_2++) {
      if ((VAR_2 & 1) == 1) {
        const s32 VAR_14 = VAR_4[VAR_2] >> 25;
        VAR_4[VAR_2] &= 0x1ffffff;
        VAR_4[VAR_2+1] += VAR_14;
      } else {
        const s32 VAR_15 = VAR_4[VAR_2] >> 26;
        VAR_4[VAR_2] &= 0x3ffffff;
        VAR_4[VAR_2+1] += VAR_15;
      }
    }

    {
      const s32 VAR_16 = VAR_4[9] >> 25;
      VAR_4[9] &= 0x1ffffff;
      VAR_4[0] += 19*VAR_16;
    }
  }
  VAR_5 = FUNC_2(VAR_4[0], 0x3ffffed);
  for (VAR_2 = 1; VAR_2 < 10; VAR_2++) {
    if ((VAR_2 & 1) == 1) {
      VAR_5 &= FUNC_1(VAR_4[VAR_2], 0x1ffffff);
    } else {
      VAR_5 &= FUNC_1(VAR_4[VAR_2], 0x3ffffff);
    }
  }



  VAR_4[0] -= VAR_5 & 0x3ffffed;

  for (VAR_2 = 1; VAR_2 < 10; VAR_2++) {
    if ((VAR_2 & 1) == 1) {
      VAR_4[VAR_2] -= VAR_5 & 0x1ffffff;
    } else {
      VAR_4[VAR_2] -= VAR_5 & 0x3ffffff;
    }
  }

  VAR_4[1] <<= 2;
  VAR_4[2] <<= 3;
  VAR_4[3] <<= 5;
  VAR_4[4] <<= 6;
  VAR_4[6] <<= 1;
  VAR_4[7] <<= 3;
  VAR_4[8] <<= 4;
  VAR_4[9] <<= 6;





  VAR_0[0] = 0;
  VAR_0[16] = 0;
  VAR_0[0 +0] |= VAR_4[0] & 0xff; VAR_0[0 +1] = (VAR_4[0] >> 8) & 0xff; VAR_0[0 +2] = (VAR_4[0] >> 16) & 0xff; VAR_0[0 +3] = (VAR_4[0] >> 24) & 0xff;;
  VAR_0[3 +0] |= VAR_4[1] & 0xff; VAR_0[3 +1] = (VAR_4[1] >> 8) & 0xff; VAR_0[3 +2] = (VAR_4[1] >> 16) & 0xff; VAR_0[3 +3] = (VAR_4[1] >> 24) & 0xff;;
  VAR_0[6 +0] |= VAR_4[2] & 0xff; VAR_0[6 +1] = (VAR_4[2] >> 8) & 0xff; VAR_0[6 +2] = (VAR_4[2] >> 16) & 0xff; VAR_0[6 +3] = (VAR_4[2] >> 24) & 0xff;;
  VAR_0[9 +0] |= VAR_4[3] & 0xff; VAR_0[9 +1] = (VAR_4[3] >> 8) & 0xff; VAR_0[9 +2] = (VAR_4[3] >> 16) & 0xff; VAR_0[9 +3] = (VAR_4[3] >> 24) & 0xff;;
  VAR_0[12 +0] |= VAR_4[4] & 0xff; VAR_0[12 +1] = (VAR_4[4] >> 8) & 0xff; VAR_0[12 +2] = (VAR_4[4] >> 16) & 0xff; VAR_0[12 +3] = (VAR_4[4] >> 24) & 0xff;;
  VAR_0[16 +0] |= VAR_4[5] & 0xff; VAR_0[16 +1] = (VAR_4[5] >> 8) & 0xff; VAR_0[16 +2] = (VAR_4[5] >> 16) & 0xff; VAR_0[16 +3] = (VAR_4[5] >> 24) & 0xff;;
  VAR_0[19 +0] |= VAR_4[6] & 0xff; VAR_0[19 +1] = (VAR_4[6] >> 8) & 0xff; VAR_0[19 +2] = (VAR_4[6] >> 16) & 0xff; VAR_0[19 +3] = (VAR_4[6] >> 24) & 0xff;;
  VAR_0[22 +0] |= VAR_4[7] & 0xff; VAR_0[22 +1] = (VAR_4[7] >> 8) & 0xff; VAR_0[22 +2] = (VAR_4[7] >> 16) & 0xff; VAR_0[22 +3] = (VAR_4[7] >> 24) & 0xff;;
  VAR_0[25 +0] |= VAR_4[8] & 0xff; VAR_0[25 +1] = (VAR_4[8] >> 8) & 0xff; VAR_0[25 +2] = (VAR_4[8] >> 16) & 0xff; VAR_0[25 +3] = (VAR_4[8] >> 24) & 0xff;;
  VAR_0[28 +0] |= VAR_4[9] & 0xff; VAR_0[28 +1] = (VAR_4[9] >> 8) & 0xff; VAR_0[28 +2] = (VAR_4[9] >> 16) & 0xff; VAR_0[28 +3] = (VAR_4[9] >> 24) & 0xff;;

}
