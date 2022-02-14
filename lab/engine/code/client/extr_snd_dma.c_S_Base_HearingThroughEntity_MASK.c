
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vec3_t ;
typedef int qboolean ;
struct TYPE_2__ {scalar_t__ origin; } ;


 float FUNC_0 (scalar_t__,int ) ;
 float VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static qboolean FUNC_2( int VAR_6, vec3_t VAR_7 )
{
 float VAR_8;
 vec3_t VAR_9;

 if (VAR_7)
  FUNC_1(VAR_7, VAR_9);
 else
  FUNC_1(VAR_3[VAR_6].origin, VAR_9);

 if( VAR_1 == VAR_6 )
 {






  VAR_8 = FUNC_0(
    VAR_9,
    VAR_2 );

  if( VAR_8 > VAR_0 )
   return VAR_4;
  else
   return VAR_5;
 }
 else
  return VAR_4;
}
