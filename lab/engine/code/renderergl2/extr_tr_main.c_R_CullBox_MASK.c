
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
typedef int cplane_t ;
struct TYPE_3__ {int flags; int * frustum; } ;
struct TYPE_4__ {TYPE_1__ viewParms; } ;


 int FUNC_0 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;

int FUNC_1(vec3_t VAR_7[2]) {
 int VAR_8;
 cplane_t *VAR_9;
 qboolean VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = (VAR_6.viewParms.flags & VAR_3) ? 5 : 4;


 VAR_10 = VAR_4;
 for(VAR_8 = 0; VAR_8 < VAR_12; VAR_8++)
 {
  VAR_9 = &VAR_6.viewParms.frustum[VAR_8];

  VAR_11 = FUNC_0(VAR_7[0], VAR_7[1], VAR_9);

  if(VAR_11 == 2)
  {

   return VAR_2;
  }
  if(VAR_11 == 3)
  {
   VAR_10 = VAR_5;
  }
 }

 if(!VAR_10)
 {

  return VAR_1;
 }


 return VAR_0;
}
