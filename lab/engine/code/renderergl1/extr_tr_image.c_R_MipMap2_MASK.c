
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {unsigned int* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (unsigned int*) ;} ;


 int FUNC_0 (unsigned int*,unsigned int*,int) ;
 TYPE_1__ VAR_0 ;
 unsigned int* FUNC_1 (int) ;
 int FUNC_2 (unsigned int*) ;

__attribute__((used)) static void FUNC_3( unsigned *VAR_1, int VAR_2, int VAR_3 ) {
 int VAR_4, VAR_5, VAR_6;
 byte *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;
 unsigned *VAR_13;

 VAR_11 = VAR_2 >> 1;
 VAR_12 = VAR_3 >> 1;
 VAR_13 = VAR_0.Hunk_AllocateTempMemory( VAR_11 * VAR_12 * 4 );

 VAR_8 = VAR_2 - 1;
 VAR_9 = VAR_3 - 1;

 for ( VAR_4 = 0 ; VAR_4 < VAR_12 ; VAR_4++ ) {
  for ( VAR_5 = 0 ; VAR_5 < VAR_11 ; VAR_5++ ) {
   VAR_7 = (byte *) ( VAR_13 + VAR_4 * VAR_11 + VAR_5 );
   for ( VAR_6 = 0 ; VAR_6 < 4 ; VAR_6++ ) {
    VAR_10 =
     1 * ((byte *)&VAR_1[ ((VAR_4*2-1)&VAR_9)*VAR_2 + ((VAR_5*2-1)&VAR_8) ])[VAR_6] +
     2 * ((byte *)&VAR_1[ ((VAR_4*2-1)&VAR_9)*VAR_2 + ((VAR_5*2)&VAR_8) ])[VAR_6] +
     2 * ((byte *)&VAR_1[ ((VAR_4*2-1)&VAR_9)*VAR_2 + ((VAR_5*2+1)&VAR_8) ])[VAR_6] +
     1 * ((byte *)&VAR_1[ ((VAR_4*2-1)&VAR_9)*VAR_2 + ((VAR_5*2+2)&VAR_8) ])[VAR_6] +

     2 * ((byte *)&VAR_1[ ((VAR_4*2)&VAR_9)*VAR_2 + ((VAR_5*2-1)&VAR_8) ])[VAR_6] +
     4 * ((byte *)&VAR_1[ ((VAR_4*2)&VAR_9)*VAR_2 + ((VAR_5*2)&VAR_8) ])[VAR_6] +
     4 * ((byte *)&VAR_1[ ((VAR_4*2)&VAR_9)*VAR_2 + ((VAR_5*2+1)&VAR_8) ])[VAR_6] +
     2 * ((byte *)&VAR_1[ ((VAR_4*2)&VAR_9)*VAR_2 + ((VAR_5*2+2)&VAR_8) ])[VAR_6] +

     2 * ((byte *)&VAR_1[ ((VAR_4*2+1)&VAR_9)*VAR_2 + ((VAR_5*2-1)&VAR_8) ])[VAR_6] +
     4 * ((byte *)&VAR_1[ ((VAR_4*2+1)&VAR_9)*VAR_2 + ((VAR_5*2)&VAR_8) ])[VAR_6] +
     4 * ((byte *)&VAR_1[ ((VAR_4*2+1)&VAR_9)*VAR_2 + ((VAR_5*2+1)&VAR_8) ])[VAR_6] +
     2 * ((byte *)&VAR_1[ ((VAR_4*2+1)&VAR_9)*VAR_2 + ((VAR_5*2+2)&VAR_8) ])[VAR_6] +

     1 * ((byte *)&VAR_1[ ((VAR_4*2+2)&VAR_9)*VAR_2 + ((VAR_5*2-1)&VAR_8) ])[VAR_6] +
     2 * ((byte *)&VAR_1[ ((VAR_4*2+2)&VAR_9)*VAR_2 + ((VAR_5*2)&VAR_8) ])[VAR_6] +
     2 * ((byte *)&VAR_1[ ((VAR_4*2+2)&VAR_9)*VAR_2 + ((VAR_5*2+1)&VAR_8) ])[VAR_6] +
     1 * ((byte *)&VAR_1[ ((VAR_4*2+2)&VAR_9)*VAR_2 + ((VAR_5*2+2)&VAR_8) ])[VAR_6];
    VAR_7[VAR_6] = VAR_10 / 36;
   }
  }
 }

 FUNC_0( VAR_1, VAR_13, VAR_11 * VAR_12 * 4 );
 VAR_0.Hunk_FreeTempMemory( VAR_13 );
}
