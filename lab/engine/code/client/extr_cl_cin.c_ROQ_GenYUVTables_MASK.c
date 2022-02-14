
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long* VAR_0 ;
 long* VAR_1 ;
 long* VAR_2 ;
 long* VAR_3 ;
 long* VAR_4 ;

__attribute__((used)) static void FUNC_0( void )
{
 float VAR_5,VAR_6,VAR_7,VAR_8;
 long VAR_9;

 VAR_5 = (1.77200f/2.0f) * (float)(1<<6) + 0.5f;
 VAR_6 = (1.40200f/2.0f) * (float)(1<<6) + 0.5f;
 VAR_7 = (0.34414f/2.0f) * (float)(1<<6) + 0.5f;
 VAR_8 = (0.71414f/2.0f) * (float)(1<<6) + 0.5f;
 for(VAR_9=0;VAR_9<256;VAR_9++) {
  float VAR_10 = (float)(2 * VAR_9 - 255);

  VAR_0[VAR_9] = (long)( ( VAR_5 * VAR_10) + (1<<5));
  VAR_3[VAR_9] = (long)( ( VAR_6 * VAR_10) + (1<<5));
  VAR_1[VAR_9] = (long)( (-VAR_7 * VAR_10) );
  VAR_2[VAR_9] = (long)( (-VAR_8 * VAR_10) + (1<<5));
  VAR_4[VAR_9] = (long)( (VAR_9 << 6) | (VAR_9 >> 2) );
 }
}
