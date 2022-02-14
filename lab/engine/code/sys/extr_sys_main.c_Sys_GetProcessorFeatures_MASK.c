
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuFeatures_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

cpuFeatures_t FUNC_6( void )
{
 cpuFeatures_t VAR_6 = 0;


 if( FUNC_3( ) ) VAR_6 |= VAR_3;
 if( FUNC_0( ) ) VAR_6 |= VAR_0;
 if( FUNC_2( ) ) VAR_6 |= VAR_2;
 if( FUNC_4( ) ) VAR_6 |= VAR_4;
 if( FUNC_5( ) ) VAR_6 |= VAR_5;
 if( FUNC_1( ) ) VAR_6 |= VAR_1;


 return VAR_6;
}
