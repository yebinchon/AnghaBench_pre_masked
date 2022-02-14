
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_4__ {float dist; int normal; } ;
typedef TYPE_1__ cplane_t ;
struct TYPE_5__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (int const,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;

int FUNC_1( const vec3_t VAR_6, float VAR_7, const cplane_t* VAR_8, int VAR_9 )
{
 int VAR_10;
 float VAR_11;
 const cplane_t *VAR_12;
 qboolean VAR_13 = VAR_3;

 if ( VAR_5->integer ) {
  return VAR_0;
 }


 for (VAR_10 = 0 ; VAR_10 < VAR_9 ; VAR_10++)
 {
  VAR_12 = &VAR_8[VAR_10];

  VAR_11 = FUNC_0( VAR_6, VAR_12->normal) - VAR_12->dist;
  if ( VAR_11 < -VAR_7 )
  {
   return VAR_2;
  }
  else if ( VAR_11 <= VAR_7 )
  {
   VAR_13 = VAR_4;
  }
 }

 if ( VAR_13 )
 {
  return VAR_0;
 }

 return VAR_1;
}
