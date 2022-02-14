
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int* buf; int CIN_WIDTH; int CIN_HEIGHT; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(int VAR_1, int *VAR_2) {
 int VAR_3, VAR_4, *VAR_5, VAR_6, VAR_7, VAR_8;
 byte *VAR_9;

 VAR_9 = VAR_0[VAR_1].buf;

 VAR_6 = VAR_0[VAR_1].CIN_WIDTH/256;
 VAR_7 = VAR_0[VAR_1].CIN_HEIGHT/256;
 VAR_8 = 8;
 if (VAR_0[VAR_1].CIN_WIDTH==512) {
  VAR_8 = 9;
 }

 VAR_5 = (int*)VAR_9;
 if (VAR_6==2 && VAR_7==2) {
  byte *VAR_10, *VAR_11;
  int VAR_12, VAR_13;

  VAR_10 = (byte *)VAR_2;
  VAR_11 = (byte *)VAR_5;
  for (VAR_4 = 0; VAR_4<256; VAR_4++) {
   VAR_13 = VAR_4<<12;
   for (VAR_3 = 0; VAR_3<2048; VAR_3+=8) {
    for(VAR_12 = VAR_3;VAR_12<(VAR_3+4);VAR_12++) {
     *VAR_10=(VAR_11[VAR_13+VAR_12]+VAR_11[VAR_13+4+VAR_12]+VAR_11[VAR_13+2048+VAR_12]+VAR_11[VAR_13+2048+4+VAR_12])>>2;
     VAR_10++;
    }
   }
  }
 } else if (VAR_6==2 && VAR_7==1) {
  byte *VAR_14, *VAR_15;
  int VAR_16, VAR_17;

  VAR_14 = (byte *)VAR_2;
  VAR_15 = (byte *)VAR_5;
  for (VAR_4 = 0; VAR_4<256; VAR_4++) {
   VAR_17 = VAR_4<<11;
   for (VAR_3 = 0; VAR_3<2048; VAR_3+=8) {
    for(VAR_16 = VAR_3;VAR_16<(VAR_3+4);VAR_16++) {
     *VAR_14=(VAR_15[VAR_17+VAR_16]+VAR_15[VAR_17+4+VAR_16])>>1;
     VAR_14++;
    }
   }
  }
 } else {
  for (VAR_4 = 0; VAR_4<256; VAR_4++) {
   for (VAR_3 = 0; VAR_3<256; VAR_3++) {
     VAR_2[(VAR_4<<8)+VAR_3] = VAR_5[((VAR_4*VAR_7)<<VAR_8) + (VAR_3*VAR_6)];
   }
  }
 }
}
