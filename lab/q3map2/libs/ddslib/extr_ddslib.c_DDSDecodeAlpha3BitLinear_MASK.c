
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char a; scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
typedef TYPE_1__ ddsColor_t ;
struct TYPE_5__ {unsigned short alpha0; unsigned short alpha1; int * stuff; } ;
typedef TYPE_2__ ddsAlphaBlock3BitLinear_t ;



__attribute__((used)) static void FUNC_0( unsigned int *VAR_0, ddsAlphaBlock3BitLinear_t *VAR_1, int VAR_2, unsigned int VAR_3 ){

 int VAR_4, VAR_5;
 unsigned int VAR_6;
 unsigned char VAR_7[ 4 ][ 4 ];
 unsigned short VAR_8[ 8 ];
 ddsColor_t VAR_9[ 4 ][ 4 ];



 VAR_8[ 0 ] = VAR_1->alpha0;
 VAR_8[ 1 ] = VAR_1->alpha1;


 if ( VAR_8[ 0 ] > VAR_8[ 1 ] ) {

  VAR_8[ 2 ] = ( 6 * VAR_8[ 0 ] + VAR_8[ 1 ] ) / 7;
  VAR_8[ 3 ] = ( 5 * VAR_8[ 0 ] + 2 * VAR_8[ 1 ] ) / 7;
  VAR_8[ 4 ] = ( 4 * VAR_8[ 0 ] + 3 * VAR_8[ 1 ] ) / 7;
  VAR_8[ 5 ] = ( 3 * VAR_8[ 0 ] + 4 * VAR_8[ 1 ] ) / 7;
  VAR_8[ 6 ] = ( 2 * VAR_8[ 0 ] + 5 * VAR_8[ 1 ] ) / 7;
  VAR_8[ 7 ] = ( VAR_8[ 0 ] + 6 * VAR_8[ 1 ] ) / 7;
 }


 else
 {

  VAR_8[ 2 ] = ( 4 * VAR_8[ 0 ] + VAR_8[ 1 ] ) / 5;
  VAR_8[ 3 ] = ( 3 * VAR_8[ 0 ] + 2 * VAR_8[ 1 ] ) / 5;
  VAR_8[ 4 ] = ( 2 * VAR_8[ 0 ] + 3 * VAR_8[ 1 ] ) / 5;
  VAR_8[ 5 ] = ( VAR_8[ 0 ] + 4 * VAR_8[ 1 ] ) / 5;
  VAR_8[ 6 ] = 0;
  VAR_8[ 7 ] = 255;
 }




 VAR_6 = *( (unsigned int*) &( VAR_1->stuff[ 0 ] ) );

 VAR_7[ 0 ][ 0 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 0 ][ 1 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 0 ][ 2 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 0 ][ 3 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 1 ][ 0 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 1 ][ 1 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 1 ][ 2 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 1 ][ 3 ] = (unsigned char) ( VAR_6 & 0x00000007 );


 VAR_6 = *( (unsigned int*) &( VAR_1->stuff[ 3 ] ) );

 VAR_7[ 2 ][ 0 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 2 ][ 1 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 2 ][ 2 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 2 ][ 3 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 3 ][ 0 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 3 ][ 1 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 3 ][ 2 ] = (unsigned char) ( VAR_6 & 0x00000007 );
 VAR_6 >>= 3;
 VAR_7[ 3 ][ 3 ] = (unsigned char) ( VAR_6 & 0x00000007 );


 for ( VAR_4 = 0; VAR_4 < 4; VAR_4++ )
 {
  for ( VAR_5 = 0; VAR_5 < 4; VAR_5++ )
  {
   VAR_9[ VAR_4 ][ VAR_5 ].r = 0;
   VAR_9[ VAR_4 ][ VAR_5 ].g = 0;
   VAR_9[ VAR_4 ][ VAR_5 ].b = 0;
   VAR_9[ VAR_4 ][ VAR_5 ].a = (unsigned char) VAR_8[ VAR_7[ VAR_4 ][ VAR_5 ] ];
  }
 }


 for ( VAR_4 = 0; VAR_4 < 4; VAR_4++, VAR_0 += VAR_2 - 4 )
 {
  for ( VAR_5 = 0; VAR_5 < 4; VAR_5++ )
  {

   *VAR_0 &= VAR_3;


   *VAR_0 |= *( (unsigned int*) &( VAR_9[ VAR_4 ][ VAR_5 ] ) );
   VAR_0++;
  }
 }
}
