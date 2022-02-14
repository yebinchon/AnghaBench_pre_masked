
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int meshBounds; int meshRadius; int localOrigin; } ;
typedef TYPE_2__ srfGridMesh_t ;
typedef int qboolean ;
struct TYPE_9__ {scalar_t__ integer; } ;
struct TYPE_6__ {int c_sphere_cull_patch_in; int c_box_cull_patch_clip; int c_box_cull_patch_in; int c_box_cull_patch_out; int c_sphere_cull_patch_clip; int c_sphere_cull_patch_out; } ;
struct TYPE_8__ {scalar_t__ currentEntityNum; TYPE_1__ pc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_3__ VAR_7 ;

__attribute__((used)) static qboolean FUNC_3( srfGridMesh_t *VAR_8 ) {
 int VAR_9;
 int VAR_10;

 if ( VAR_6->integer ) {
  return VAR_5;
 }

 if ( VAR_7.currentEntityNum != VAR_3 ) {
  VAR_10 = FUNC_1( VAR_8->localOrigin, VAR_8->meshRadius );
 } else {
  VAR_10 = FUNC_2( VAR_8->localOrigin, VAR_8->meshRadius );
 }


 if ( VAR_10 == VAR_2 )
 {
  VAR_7.pc.c_sphere_cull_patch_out++;
  return VAR_5;
 }

 else if ( VAR_10 == VAR_0 )
 {
  VAR_7.pc.c_sphere_cull_patch_clip++;

  VAR_9 = FUNC_0( VAR_8->meshBounds );

  if ( VAR_9 == VAR_2 )
  {
   VAR_7.pc.c_box_cull_patch_out++;
   return VAR_5;
  }
  else if ( VAR_9 == VAR_1 )
  {
   VAR_7.pc.c_box_cull_patch_in++;
  }
  else
  {
   VAR_7.pc.c_box_cull_patch_clip++;
  }
 }
 else
 {
  VAR_7.pc.c_sphere_cull_patch_in++;
 }

 return VAR_4;
}
