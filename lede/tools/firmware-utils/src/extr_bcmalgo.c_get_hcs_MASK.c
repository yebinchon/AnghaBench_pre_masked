
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ldr_header_t ;



uint16_t FUNC_0 ( ldr_header_t* VAR_0 )
{
 uint8_t* VAR_1 = ( uint8_t* ) VAR_0;
 uint8_t VAR_2;
 uint8_t VAR_3;
 uint16_t VAR_4 = 0xffff;
 uint16_t VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7,VAR_8;
 for ( VAR_7 = 0; VAR_7 < 0x54; VAR_7++ )
 {
  uint16_t VAR_9 = VAR_1[VAR_7];
  VAR_9 = VAR_9 << 8;
  for ( VAR_8 = 0; VAR_8 < 8; VAR_8++ )
  {
   if ( ( ( VAR_4 ^ VAR_9 ) & 0x8000 ) == 0 )
   {
    VAR_6 = 0;
   }
   else
   {
    VAR_6 = 1;
   }
   VAR_4 = VAR_4 << 1;
   if ( VAR_6 )
   {
    VAR_4 ^= 0x1021;
   }
   VAR_9 = VAR_9 << 1;
  }
  VAR_4 &= 0xffff;
 }
 VAR_4 ^= 0xffff;
 VAR_3 = ( uint8_t ) ( ( VAR_4 & 0xff00 ) >> 8 );
 VAR_2 = ( uint8_t ) ( VAR_4 & 0xff );
 uint16_t VAR_10 = VAR_3 <<8 | VAR_2;
 return VAR_10;
}
