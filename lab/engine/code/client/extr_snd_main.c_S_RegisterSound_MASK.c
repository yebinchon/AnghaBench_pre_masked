
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sfxHandle_t ;
typedef int qboolean ;
struct TYPE_2__ {int (* RegisterSound ) (char const*,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,int ) ;

sfxHandle_t FUNC_1( const char *VAR_1, qboolean VAR_2 )
{
 if( VAR_0.RegisterSound ) {
  return VAR_0.RegisterSound( VAR_1, VAR_2 );
 } else {
  return 0;
 }
}
