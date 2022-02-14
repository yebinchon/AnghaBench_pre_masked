
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int,int) ;

byte *FUNC_3( byte *VAR_0,byte *VAR_1, int VAR_2 ){
 int VAR_3;
 byte VAR_4,VAR_5;

 VAR_3 = 0;

 do
 {
  VAR_5 = *VAR_0++;

  if ( VAR_5 > 0x80 ) {
   VAR_5 = ( VAR_5 ^ 0xff ) + 2;
   VAR_4 = *VAR_0++;
   FUNC_2( VAR_1,VAR_4,VAR_5 );
   VAR_1 += VAR_5;
  }
  else if ( VAR_5 < 0x80 ) {
   VAR_5++;
   FUNC_1( VAR_1,VAR_0,VAR_5 );
   VAR_1 += VAR_5;
   VAR_0 += VAR_5;
  }
  else{
   VAR_5 = 0;

  }
  VAR_3 += VAR_5;

 } while ( VAR_3 < VAR_2 );

 if ( VAR_3 > VAR_2 ) {
  FUNC_0( "Decompression exceeded width!\n" );
 }


 return VAR_0;
}
