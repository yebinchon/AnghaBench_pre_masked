
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int,int,int,int) ;
 float FUNC_1 (float,float,float) ;
 scalar_t__ FUNC_2 (double) ;

float FUNC_3( float VAR_0, float VAR_1, float VAR_2, double VAR_3 )
{
 int VAR_4;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 float VAR_9, VAR_10, VAR_11, VAR_12;
 float VAR_13[4];
 float VAR_14[4];
 float VAR_15, VAR_16, VAR_17[2], VAR_18;

 VAR_5 = ( int ) FUNC_2( VAR_0 );
 VAR_9 = VAR_0 - VAR_5;
 VAR_6 = ( int ) FUNC_2( VAR_1 );
 VAR_10 = VAR_1 - VAR_6;
 VAR_7 = ( int ) FUNC_2( VAR_2 );
 VAR_11 = VAR_2 - VAR_7;
 VAR_8 = ( int ) FUNC_2( VAR_3 );
 VAR_12 = VAR_3 - VAR_8;

 for ( VAR_4 = 0; VAR_4 < 2; VAR_4++ )
 {
  VAR_13[0] = FUNC_0( VAR_5, VAR_6, VAR_7, VAR_8 + VAR_4 );
  VAR_13[1] = FUNC_0( VAR_5+1, VAR_6, VAR_7, VAR_8 + VAR_4 );
  VAR_13[2] = FUNC_0( VAR_5, VAR_6+1, VAR_7, VAR_8 + VAR_4 );
  VAR_13[3] = FUNC_0( VAR_5+1, VAR_6+1, VAR_7, VAR_8 + VAR_4 );

  VAR_14[0] = FUNC_0( VAR_5, VAR_6, VAR_7 + 1, VAR_8 + VAR_4 );
  VAR_14[1] = FUNC_0( VAR_5+1, VAR_6, VAR_7 + 1, VAR_8 + VAR_4 );
  VAR_14[2] = FUNC_0( VAR_5, VAR_6+1, VAR_7 + 1, VAR_8 + VAR_4 );
  VAR_14[3] = FUNC_0( VAR_5+1, VAR_6+1, VAR_7 + 1, VAR_8 + VAR_4 );

  VAR_15 = FUNC_1( FUNC_1( VAR_13[0], VAR_13[1], VAR_9 ), FUNC_1( VAR_13[2], VAR_13[3], VAR_9 ), VAR_10 );
  VAR_16 = FUNC_1( FUNC_1( VAR_14[0], VAR_14[1], VAR_9 ), FUNC_1( VAR_14[2], VAR_14[3], VAR_9 ), VAR_10 );

  VAR_17[VAR_4] = FUNC_1( VAR_15, VAR_16, VAR_11 );
 }

 VAR_18 = FUNC_1( VAR_17[0], VAR_17[1], VAR_12 );

 return VAR_18;
}
