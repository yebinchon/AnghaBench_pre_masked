
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float dist; int normal; } ;
struct TYPE_11__ {int dlightBits; TYPE_2__ plane; } ;
typedef TYPE_4__ srfSurfaceFace_t ;
struct TYPE_12__ {float radius; int origin; } ;
typedef TYPE_5__ dlight_t ;
struct TYPE_10__ {int c_dlightSurfacesCulled; } ;
struct TYPE_8__ {int num_dlights; TYPE_5__* dlights; } ;
struct TYPE_13__ {TYPE_3__ pc; TYPE_1__ refdef; } ;


 float FUNC_0 (int ,int ) ;
 TYPE_6__ VAR_0 ;

__attribute__((used)) static int FUNC_1( srfSurfaceFace_t *VAR_1, int VAR_2 ) {
 float VAR_3;
 int VAR_4;
 dlight_t *VAR_5;

 for ( VAR_4 = 0 ; VAR_4 < VAR_0.refdef.num_dlights ; VAR_4++ ) {
  if ( ! ( VAR_2 & ( 1 << VAR_4 ) ) ) {
   continue;
  }
  VAR_5 = &VAR_0.refdef.dlights[VAR_4];
  VAR_3 = FUNC_0( VAR_5->origin, VAR_1->plane.normal ) - VAR_1->plane.dist;
  if ( VAR_3 < -VAR_5->radius || VAR_3 > VAR_5->radius ) {

   VAR_2 &= ~( 1 << VAR_4 );
  }
 }

 if ( !VAR_2 ) {
  VAR_0.pc.c_dlightSurfacesCulled++;
 }

 VAR_1->dlightBits = VAR_2;
 return VAR_2;
}
