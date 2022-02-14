
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int pshadowBits; } ;
typedef TYPE_4__ srfBspSurface_t ;
struct TYPE_17__ {float dist; int normal; } ;
struct TYPE_14__ {float* lightOrigin; float lightRadius; TYPE_9__ cullPlane; int viewRadius; int viewOrigin; } ;
typedef TYPE_5__ pshadow_t ;
struct TYPE_10__ {float dist; int normal; } ;
struct TYPE_12__ {int type; float** bounds; float* localOrigin; float radius; TYPE_1__ plane; } ;
struct TYPE_15__ {int* data; TYPE_3__ cullinfo; } ;
typedef TYPE_6__ msurface_t ;
struct TYPE_11__ {int num_pshadows; TYPE_5__* pshadows; } ;
struct TYPE_16__ {TYPE_2__ refdef; } ;


 int FUNC_0 (float*,float*,TYPE_9__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_1 (float*,int ) ;



 int FUNC_2 (int ,int ,float*,float) ;
 TYPE_7__ VAR_3 ;

__attribute__((used)) static int FUNC_3( msurface_t *VAR_4, int VAR_5 ) {
 float VAR_6;
 int VAR_7;
 pshadow_t *VAR_8;

 if ( VAR_4->cullinfo.type & VAR_1 )
 {
  for ( VAR_7 = 0 ; VAR_7 < VAR_3.refdef.num_pshadows ; VAR_7++ ) {
   if ( ! ( VAR_5 & ( 1 << VAR_7 ) ) ) {
    continue;
   }
   VAR_8 = &VAR_3.refdef.pshadows[VAR_7];
   VAR_6 = FUNC_1( VAR_8->lightOrigin, VAR_4->cullinfo.plane.normal ) - VAR_4->cullinfo.plane.dist;
   if ( VAR_6 < -VAR_8->lightRadius || VAR_6 > VAR_8->lightRadius ) {

    VAR_5 &= ~( 1 << VAR_7 );
   }
  }
 }

 if ( VAR_4->cullinfo.type & VAR_0 )
 {
  for ( VAR_7 = 0 ; VAR_7 < VAR_3.refdef.num_pshadows ; VAR_7++ ) {
   if ( ! ( VAR_5 & ( 1 << VAR_7 ) ) ) {
    continue;
   }
   VAR_8 = &VAR_3.refdef.pshadows[VAR_7];
   if ( VAR_8->lightOrigin[0] - VAR_8->lightRadius > VAR_4->cullinfo.bounds[1][0]
    || VAR_8->lightOrigin[0] + VAR_8->lightRadius < VAR_4->cullinfo.bounds[0][0]
    || VAR_8->lightOrigin[1] - VAR_8->lightRadius > VAR_4->cullinfo.bounds[1][1]
    || VAR_8->lightOrigin[1] + VAR_8->lightRadius < VAR_4->cullinfo.bounds[0][1]
    || VAR_8->lightOrigin[2] - VAR_8->lightRadius > VAR_4->cullinfo.bounds[1][2]
    || VAR_8->lightOrigin[2] + VAR_8->lightRadius < VAR_4->cullinfo.bounds[0][2]
    || FUNC_0(VAR_4->cullinfo.bounds[0], VAR_4->cullinfo.bounds[1], &VAR_8->cullPlane) == 2 ) {

    VAR_5 &= ~( 1 << VAR_7 );
   }
  }
 }

 if ( VAR_4->cullinfo.type & VAR_2 )
 {
  for ( VAR_7 = 0 ; VAR_7 < VAR_3.refdef.num_pshadows ; VAR_7++ ) {
   if ( ! ( VAR_5 & ( 1 << VAR_7 ) ) ) {
    continue;
   }
   VAR_8 = &VAR_3.refdef.pshadows[VAR_7];
   if (!FUNC_2(VAR_8->viewOrigin, VAR_8->viewRadius, VAR_4->cullinfo.localOrigin, VAR_4->cullinfo.radius)
    || FUNC_1( VAR_4->cullinfo.localOrigin, VAR_8->cullPlane.normal ) - VAR_8->cullPlane.dist < -VAR_4->cullinfo.radius)
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
   ((srfBspSurface_t *)VAR_4->data)->pshadowBits = VAR_5;
   break;

  default:
   VAR_5 = 0;
   break;
 }

 if ( VAR_5 ) {

 }

 return VAR_5;
}
