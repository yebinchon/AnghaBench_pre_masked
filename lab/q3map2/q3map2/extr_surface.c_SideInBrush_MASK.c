
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ culled; TYPE_2__* shaderInfo; int * winding; } ;
typedef TYPE_3__ side_t ;
typedef scalar_t__ qboolean ;
struct TYPE_12__ {int dist; int normal; } ;
typedef TYPE_4__ plane_t ;
struct TYPE_13__ {int compileFlags; int numsides; TYPE_1__* sides; } ;
typedef TYPE_5__ brush_t ;
struct TYPE_10__ {scalar_t__ polygonOffset; scalar_t__ autosprite; } ;
struct TYPE_9__ {int compileFlags; size_t planenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

qboolean FUNC_1( side_t *VAR_8, brush_t *VAR_9 ){
 int VAR_10, VAR_11;
 plane_t *VAR_12;



 if ( VAR_8->winding == ((void*)0) || VAR_8->shaderInfo == ((void*)0) ) {
  return VAR_7;
 }


 if ( VAR_8->culled == VAR_7 || ( VAR_9->compileFlags & VAR_1 ) ) {
  return VAR_6;
 }


 for ( VAR_10 = 0; VAR_10 < VAR_9->numsides; VAR_10++ )
 {

  if ( VAR_9->sides[ VAR_10 ].compileFlags & VAR_0 ) {
   return VAR_6;
  }


  VAR_12 = &VAR_5[ VAR_9->sides[ VAR_10 ].planenum ];
  VAR_11 = FUNC_0( VAR_8->winding, VAR_12->normal, VAR_12->dist );
  if ( VAR_11 == VAR_3 || VAR_11 == VAR_2 ) {
   return VAR_6;
  }
 }


 if ( VAR_8->shaderInfo ) {
  if ( VAR_8->shaderInfo->autosprite || VAR_8->shaderInfo->polygonOffset ) {
   return VAR_6;
  }
 }


 VAR_8->culled = VAR_7;
 VAR_4++;
 return VAR_7;
}
