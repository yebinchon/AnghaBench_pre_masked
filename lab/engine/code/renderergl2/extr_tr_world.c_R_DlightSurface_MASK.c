
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int dlightBits; } ;
typedef TYPE_5__ srfBspSurface_t ;
struct TYPE_10__ {float dist; int normal; } ;
struct TYPE_12__ {int type; float** bounds; int radius; int localOrigin; TYPE_1__ plane; } ;
struct TYPE_15__ {int* data; TYPE_3__ cullinfo; } ;
typedef TYPE_6__ msurface_t ;
struct TYPE_16__ {float* origin; float radius; } ;
typedef TYPE_7__ dlight_t ;
struct TYPE_13__ {int c_dlightSurfacesCulled; int c_dlightSurfaces; } ;
struct TYPE_11__ {int num_dlights; TYPE_7__* dlights; } ;
struct TYPE_17__ {TYPE_4__ pc; TYPE_2__ refdef; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (float*,int ) ;



 int FUNC_1 (float*,float,int ,int ) ;
 TYPE_8__ VAR_3 ;

__attribute__((used)) static int FUNC_2( msurface_t *VAR_4, int VAR_5 ) {
 float VAR_6;
 int VAR_7;
 dlight_t *VAR_8;

 if ( VAR_4->cullinfo.type & VAR_1 )
 {
  for ( VAR_7 = 0 ; VAR_7 < VAR_3.refdef.num_dlights ; VAR_7++ ) {
   if ( ! ( VAR_5 & ( 1 << VAR_7 ) ) ) {
    continue;
   }
   VAR_8 = &VAR_3.refdef.dlights[VAR_7];
   VAR_6 = FUNC_0( VAR_8->origin, VAR_4->cullinfo.plane.normal ) - VAR_4->cullinfo.plane.dist;
   if ( VAR_6 < -VAR_8->radius || VAR_6 > VAR_8->radius ) {

    VAR_5 &= ~( 1 << VAR_7 );
   }
  }
 }

 if ( VAR_4->cullinfo.type & VAR_0 )
 {
  for ( VAR_7 = 0 ; VAR_7 < VAR_3.refdef.num_dlights ; VAR_7++ ) {
   if ( ! ( VAR_5 & ( 1 << VAR_7 ) ) ) {
    continue;
   }
   VAR_8 = &VAR_3.refdef.dlights[VAR_7];
   if ( VAR_8->origin[0] - VAR_8->radius > VAR_4->cullinfo.bounds[1][0]
    || VAR_8->origin[0] + VAR_8->radius < VAR_4->cullinfo.bounds[0][0]
    || VAR_8->origin[1] - VAR_8->radius > VAR_4->cullinfo.bounds[1][1]
    || VAR_8->origin[1] + VAR_8->radius < VAR_4->cullinfo.bounds[0][1]
    || VAR_8->origin[2] - VAR_8->radius > VAR_4->cullinfo.bounds[1][2]
    || VAR_8->origin[2] + VAR_8->radius < VAR_4->cullinfo.bounds[0][2] ) {

    VAR_5 &= ~( 1 << VAR_7 );
   }
  }
 }

 if ( VAR_4->cullinfo.type & VAR_2 )
 {
  for ( VAR_7 = 0 ; VAR_7 < VAR_3.refdef.num_dlights ; VAR_7++ ) {
   if ( ! ( VAR_5 & ( 1 << VAR_7 ) ) ) {
    continue;
   }
   VAR_8 = &VAR_3.refdef.dlights[VAR_7];
   if (!FUNC_1(VAR_8->origin, VAR_8->radius, VAR_4->cullinfo.localOrigin, VAR_4->cullinfo.radius))
   {

    VAR_5 &= ~( 1 << VAR_7 );
   }
  }
 }

 switch(*VAR_4->data)
 {
  case 130:
  case 129:
  case 128:
   ((srfBspSurface_t *)VAR_4->data)->dlightBits = VAR_5;
   break;

  default:
   VAR_5 = 0;
   break;
 }

 if ( VAR_5 ) {
  VAR_3.pc.c_dlightSurfaces++;
 } else {
  VAR_3.pc.c_dlightSurfacesCulled++;
 }

 return VAR_5;
}
