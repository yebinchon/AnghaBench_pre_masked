
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short byte ;


 unsigned short* VAR_0 ;

void FUNC_0( unsigned short *VAR_1, byte VAR_2 ){
 *VAR_1 = ( *VAR_1 << 8 ) ^ VAR_0[( *VAR_1 >> 8 ) ^ VAR_2];
}
