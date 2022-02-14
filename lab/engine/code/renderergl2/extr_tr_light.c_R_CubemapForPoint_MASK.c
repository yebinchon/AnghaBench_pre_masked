
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
typedef int vec3_t ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {int numCubemaps; TYPE_1__* cubemaps; } ;
struct TYPE_4__ {int origin; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__ VAR_2 ;

int FUNC_2( vec3_t VAR_3 )
{
 int VAR_4 = -1;

 if (VAR_1->integer && VAR_2.numCubemaps)
 {
  int VAR_5;
  vec_t VAR_6 = (float)VAR_0 * (float)VAR_0;

  for (VAR_5 = 0; VAR_5 < VAR_2.numCubemaps; VAR_5++)
  {
   vec3_t VAR_7;
   vec_t VAR_8;

   FUNC_1(VAR_3, VAR_2.cubemaps[VAR_5].origin, VAR_7);
   VAR_8 = FUNC_0(VAR_7, VAR_7);

   if (VAR_6 > VAR_8)
   {
    VAR_6 = VAR_8;
    VAR_4 = VAR_5;
   }
  }
 }

 return VAR_4 + 1;
}
