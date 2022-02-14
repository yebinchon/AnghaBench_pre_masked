
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0( unsigned char* VAR_0, int VAR_1, unsigned char* VAR_2, int VAR_3 ){
 int VAR_4 = VAR_3 * VAR_1 * 4;
 int VAR_5;

 for ( VAR_5 = 0; VAR_5 < VAR_1; VAR_5++ )
 {
  unsigned char VAR_6;
  unsigned char *VAR_7, *VAR_8, *VAR_9, *VAR_10;


  VAR_6 = *( VAR_0 + VAR_5 );

  VAR_7 = VAR_2 + VAR_4 + VAR_5 * 4;
  VAR_9 = VAR_2 + VAR_4 + VAR_5 * 4 + 1;
  VAR_8 = VAR_2 + VAR_4 + VAR_5 * 4 + 2;
  VAR_10 = VAR_2 + VAR_4 + VAR_5 * 4 + 3;

  *VAR_7 = VAR_6;
  *VAR_9 = VAR_6;
  *VAR_8 = VAR_6;
  *VAR_10 = 255;
 }
}
