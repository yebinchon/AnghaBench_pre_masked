
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;

uint32_t FUNC_1 ( char* VAR_0,size_t VAR_1 )
{

 long VAR_2=0xffffffffL;
 long VAR_3 = 0xffffffffL;
 long VAR_4 = 0xffffffffL;
 long VAR_5 = VAR_1;
 long VAR_6 = 0x4c11db7L;
 long VAR_7 = 0x80000000L;
 int VAR_8;
 long VAR_9;
 for ( VAR_8 = 0; VAR_8 < ( VAR_5 ); VAR_8++ )
 {
  long VAR_10 = VAR_0[VAR_8];
  for ( VAR_9 = 0x80L; VAR_9 != 0L; VAR_9 = VAR_9 >> 1 )
  {
   long VAR_11 = VAR_2 & VAR_7;
   VAR_2 = VAR_2 << 1;
   if ( ( VAR_10 & VAR_9 ) != 0L )
   {
    VAR_11 ^= VAR_7;
   }
   if ( VAR_11 != 0L )
   {
    VAR_2 ^= VAR_6;
   }
  }
 }
 VAR_2 ^= VAR_3;
 VAR_2 &= VAR_4;

 uint8_t VAR_12 = ( uint8_t ) ( ( VAR_2 & -16777216L ) >> 0x18 );
 uint8_t VAR_13 = ( uint8_t ) ( ( VAR_2 & 0xff0000L ) >> 0x10 );
 uint8_t VAR_14 = ( uint8_t ) ( ( VAR_2 & 0xff00L ) >> 8 );
 uint8_t VAR_15 = ( uint8_t ) ( VAR_2 & 0xffL );
 int32_t VAR_16 = ( VAR_12 | VAR_13 << 8| VAR_14 << 16| VAR_15 <<24 );
 return FUNC_0 ( VAR_16 );
}
