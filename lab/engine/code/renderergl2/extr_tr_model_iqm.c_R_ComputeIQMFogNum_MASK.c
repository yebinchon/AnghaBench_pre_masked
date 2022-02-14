
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec_t ;
typedef int* vec3_t ;
struct TYPE_11__ {int frame; int origin; } ;
struct TYPE_13__ {TYPE_2__ e; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_14__ {int* bounds; } ;
typedef TYPE_5__ iqmData_t ;
struct TYPE_15__ {int** bounds; } ;
typedef TYPE_6__ fog_t ;
struct TYPE_10__ {int rdflags; } ;
struct TYPE_16__ {TYPE_3__* world; TYPE_1__ refdef; } ;
struct TYPE_12__ {int numfogs; TYPE_6__* fogs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int*) ;
 float FUNC_1 (int*) ;
 int FUNC_2 (int const*,float,int*,int*) ;
 int FUNC_3 (int const*,int const*,int*) ;
 TYPE_7__ VAR_1 ;

int FUNC_4( iqmData_t *VAR_2, trRefEntity_t *VAR_3 ) {
 int VAR_4, VAR_5;
 fog_t *VAR_6;
 const vec_t *VAR_7;
 const vec_t VAR_8[6] = { -8, -8, -8, 8, 8, 8 };
 vec3_t VAR_9, VAR_10;
 vec3_t VAR_11;
 vec_t VAR_12;

 if ( VAR_1.refdef.rdflags & VAR_0 ) {
  return 0;
 }


 if (VAR_2->bounds) {
  VAR_7 = VAR_2->bounds + 6*VAR_3->e.frame;
 } else {
  VAR_7 = VAR_8;
 }
 FUNC_3( VAR_7+3, VAR_7, VAR_9 );
 FUNC_2( VAR_7, 0.5f, VAR_9, VAR_10 );
 FUNC_0( VAR_3->e.origin, VAR_10, VAR_11 );
 VAR_12 = 0.5f * FUNC_1( VAR_9 );

 for ( VAR_4 = 1 ; VAR_4 < VAR_1.world->numfogs ; VAR_4++ ) {
  VAR_6 = &VAR_1.world->fogs[VAR_4];
  for ( VAR_5 = 0 ; VAR_5 < 3 ; VAR_5++ ) {
   if ( VAR_11[VAR_5] - VAR_12 >= VAR_6->bounds[1][VAR_5] ) {
    break;
   }
   if ( VAR_11[VAR_5] + VAR_12 <= VAR_6->bounds[0][VAR_5] ) {
    break;
   }
  }
  if ( VAR_5 == 3 ) {
   return VAR_4;
  }
 }

 return 0;
}
