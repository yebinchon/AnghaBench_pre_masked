
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_9__ {int frame; int oldframe; int nonNormalizedAxes; } ;
struct TYPE_11__ {TYPE_1__ e; } ;
typedef TYPE_3__ trRefEntity_t ;
struct TYPE_12__ {size_t numBones; int ofsFrames; } ;
typedef TYPE_4__ mdrHeader_t ;
struct TYPE_13__ {scalar_t__** bounds; int radius; int localOrigin; int * bones; } ;
typedef TYPE_5__ mdrFrame_t ;
typedef int byte ;
struct TYPE_10__ {int c_box_cull_md3_out; int c_box_cull_md3_clip; int c_box_cull_md3_in; int c_sphere_cull_md3_clip; int c_sphere_cull_md3_in; int c_sphere_cull_md3_out; } ;
struct TYPE_14__ {TYPE_2__ pc; } ;





 int FUNC_0 (scalar_t__**) ;
 int FUNC_1 (int ,int ) ;
 TYPE_6__ VAR_0 ;

__attribute__((used)) static int FUNC_2( mdrHeader_t *VAR_1, trRefEntity_t *VAR_2 ) {
 vec3_t VAR_3[2];
 mdrFrame_t *VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 VAR_7 = (size_t)( &((mdrFrame_t *)0)->bones[ VAR_1->numBones ] );


 VAR_5 = ( mdrFrame_t * ) ( ( byte * ) VAR_1 + VAR_1->ofsFrames + VAR_7 * VAR_2->e.frame);
 VAR_4 = ( mdrFrame_t * ) ( ( byte * ) VAR_1 + VAR_1->ofsFrames + VAR_7 * VAR_2->e.oldframe);


 if ( !VAR_2->e.nonNormalizedAxes )
 {
  if ( VAR_2->e.frame == VAR_2->e.oldframe )
  {
   switch ( FUNC_1( VAR_5->localOrigin, VAR_5->radius ) )
   {



    case 128:
     VAR_0.pc.c_sphere_cull_md3_out++;
     return 128;

    case 129:
     VAR_0.pc.c_sphere_cull_md3_in++;
     return 129;

    case 130:
     VAR_0.pc.c_sphere_cull_md3_clip++;
     break;
   }
  }
  else
  {
   int VAR_8, VAR_9;

   VAR_8 = FUNC_1( VAR_5->localOrigin, VAR_5->radius );
   if ( VAR_5 == VAR_4 ) {
    VAR_9 = VAR_8;
   } else {
    VAR_9 = FUNC_1( VAR_4->localOrigin, VAR_4->radius );
   }

   if ( VAR_8 == VAR_9 )
   {
    if ( VAR_8 == 128 )
    {
     VAR_0.pc.c_sphere_cull_md3_out++;
     return 128;
    }
    else if ( VAR_8 == 129 )
    {
     VAR_0.pc.c_sphere_cull_md3_in++;
     return 129;
    }
    else
    {
     VAR_0.pc.c_sphere_cull_md3_clip++;
    }
   }
  }
 }


 for (VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++) {
  VAR_3[0][VAR_6] = VAR_4->bounds[0][VAR_6] < VAR_5->bounds[0][VAR_6] ? VAR_4->bounds[0][VAR_6] : VAR_5->bounds[0][VAR_6];
  VAR_3[1][VAR_6] = VAR_4->bounds[1][VAR_6] > VAR_5->bounds[1][VAR_6] ? VAR_4->bounds[1][VAR_6] : VAR_5->bounds[1][VAR_6];
 }

 switch ( FUNC_0( VAR_3 ) )
 {
  case 129:
   VAR_0.pc.c_box_cull_md3_in++;
   return 129;
  case 130:
   VAR_0.pc.c_box_cull_md3_clip++;
   return 130;
  case 128:
  default:
   VAR_0.pc.c_box_cull_md3_out++;
   return 128;
 }
}
