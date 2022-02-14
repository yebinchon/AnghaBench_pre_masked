
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int waveForm_t ;


 float FUNC_0 (int const*) ;

__attribute__((used)) static float FUNC_1( const waveForm_t *VAR_0 )
{
 float VAR_1 = FUNC_0( VAR_0 );

 if ( VAR_1 < 0 )
 {
  return 0;
 }

 if ( VAR_1 > 1 )
 {
  return 1;
 }

 return VAR_1;
}
