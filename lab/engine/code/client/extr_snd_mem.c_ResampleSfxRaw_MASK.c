
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int data ;
typedef int byte ;
struct TYPE_2__ {float speed; } ;


 int FUNC_0 (short) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_1( short *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, byte *VAR_6 ) {
 int VAR_7;
 int VAR_8;
 float VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_9 = (float)VAR_3 / VAR_0.speed;

 VAR_7 = VAR_5 / VAR_9;

 VAR_8 = 0;
 VAR_13 = 0;
 VAR_14 = VAR_9 * 256 * VAR_2;

 for (VAR_10=0 ; VAR_10<VAR_7 ; VAR_10++)
 {
  VAR_8 += VAR_13 >> 8;
  VAR_13 &= 255;
  VAR_13 += VAR_14;
  for (VAR_11=0 ; VAR_11<VAR_2 ; VAR_11++)
  {
   if( VAR_4 == 2 ) {
    VAR_12 = FUNC_0 ( ((short *)VAR_6)[VAR_8+VAR_11] );
   } else {
    VAR_12 = (int)( (unsigned char)(VAR_6[VAR_8+VAR_11]) - 128) << 8;
   }
   VAR_1[VAR_10*VAR_2+VAR_11] = VAR_12;
  }
 }
 return VAR_7;
}
