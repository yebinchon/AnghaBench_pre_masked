
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int a; unsigned char b; unsigned char g; unsigned char r; } ;
typedef TYPE_1__ ddsColor_t ;
struct TYPE_6__ {scalar_t__* colors; } ;
typedef TYPE_2__ ddsColorBlock_t ;


 unsigned short FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1( ddsColorBlock_t *VAR_0, ddsColor_t VAR_1[ 4 ] ){
 unsigned short VAR_2;



 VAR_2 = FUNC_0( VAR_0->colors[ 0 ] );
 VAR_1[ 0 ].a = 0xff;


 VAR_1[ 0 ].b = (unsigned char) VAR_2;
 VAR_1[ 0 ].b <<= 3;
 VAR_1[ 0 ].b |= ( VAR_1[ 0 ].b >> 5 );
 VAR_2 >>= 5;
 VAR_1[ 0 ].g = (unsigned char) VAR_2;
 VAR_1[ 0 ].g <<= 2;
 VAR_1[ 0 ].g |= ( VAR_1[ 0 ].g >> 5 );
 VAR_2 >>= 6;
 VAR_1[ 0 ].r = (unsigned char) VAR_2;
 VAR_1[ 0 ].r <<= 3;
 VAR_1[ 0 ].r |= ( VAR_1[ 0 ].r >> 5 );


 VAR_2 = FUNC_0( VAR_0->colors[ 1 ] );
 VAR_1[ 1 ].a = 0xff;


 VAR_1[ 1 ].b = (unsigned char) VAR_2;
 VAR_1[ 1 ].b <<= 3;
 VAR_1[ 1 ].b |= ( VAR_1[ 1 ].b >> 5 );
 VAR_2 >>= 5;
 VAR_1[ 1 ].g = (unsigned char) VAR_2;
 VAR_1[ 1 ].g <<= 2;
 VAR_1[ 1 ].g |= ( VAR_1[ 1 ].g >> 5 );
 VAR_2 >>= 6;
 VAR_1[ 1 ].r = (unsigned char) VAR_2;
 VAR_1[ 1 ].r <<= 3;
 VAR_1[ 1 ].r |= ( VAR_1[ 1 ].r >> 5 );


 if ( VAR_0->colors[ 0 ] > VAR_0->colors[ 1 ] ) {





  VAR_2 = ( (unsigned short) VAR_1[ 0 ].r * 2 + (unsigned short) VAR_1[ 1 ].r ) / 3;


  VAR_1[ 2 ].r = (unsigned char) VAR_2;
  VAR_2 = ( (unsigned short) VAR_1[ 0 ].g * 2 + (unsigned short) VAR_1[ 1 ].g ) / 3;
  VAR_1[ 2 ].g = (unsigned char) VAR_2;
  VAR_2 = ( (unsigned short) VAR_1[ 0 ].b * 2 + (unsigned short) VAR_1[ 1 ].b ) / 3;
  VAR_1[ 2 ].b = (unsigned char) VAR_2;
  VAR_1[ 2 ].a = 0xff;

  VAR_2 = ( (unsigned short) VAR_1[ 0 ].r + (unsigned short) VAR_1[ 1 ].r * 2 ) / 3;
  VAR_1[ 3 ].r = (unsigned char) VAR_2;
  VAR_2 = ( (unsigned short) VAR_1[ 0 ].g + (unsigned short) VAR_1[ 1 ].g * 2 ) / 3;
  VAR_1[ 3 ].g = (unsigned char) VAR_2;
  VAR_2 = ( (unsigned short) VAR_1[ 0 ].b + (unsigned short) VAR_1[ 1 ].b * 2 ) / 3;
  VAR_1[ 3 ].b = (unsigned char) VAR_2;
  VAR_1[ 3 ].a = 0xff;
 }
 else
 {






  VAR_2 = ( (unsigned short) VAR_1[ 0 ].r + (unsigned short) VAR_1[ 1 ].r ) / 2;
  VAR_1[ 2 ].r = (unsigned char) VAR_2;
  VAR_2 = ( (unsigned short) VAR_1[ 0 ].g + (unsigned short) VAR_1[ 1 ].g ) / 2;
  VAR_1[ 2 ].g = (unsigned char) VAR_2;
  VAR_2 = ( (unsigned short) VAR_1[ 0 ].b + (unsigned short) VAR_1[ 1 ].b ) / 2;
  VAR_1[ 2 ].b = (unsigned char) VAR_2;
  VAR_1[ 2 ].a = 0xff;


  VAR_1[ 3 ].r = 0x00;
  VAR_1[ 3 ].g = 0xff;
  VAR_1[ 3 ].b = 0xff;
  VAR_1[ 3 ].a = 0x00;
 }
}
