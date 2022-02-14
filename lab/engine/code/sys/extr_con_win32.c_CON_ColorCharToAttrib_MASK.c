
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;


 char VAR_0 ;
 size_t FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 float** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static WORD FUNC_1( char VAR_8 ) {
 WORD VAR_9;

 if ( VAR_8 == VAR_0 )
 {

  VAR_9 = VAR_6;
 }
 else
 {
  float *VAR_10 = VAR_5[ FUNC_0( VAR_8 ) ];


  VAR_9 = ( VAR_10[0] >= 0.5 ? VAR_4 : 0 ) |
    ( VAR_10[1] >= 0.5 ? VAR_2 : 0 ) |
    ( VAR_10[2] >= 0.5 ? VAR_1 : 0 ) |
    ( VAR_10[3] >= 0.5 ? VAR_3 : 0 );


  VAR_9 |= VAR_7;
 }

 return VAR_9;
}
