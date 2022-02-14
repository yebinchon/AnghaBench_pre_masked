
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int surfaceType; int numVerts; TYPE_1__* verts; } ;
typedef TYPE_2__ srfBspSurface_t ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_3__ msurface_t ;
struct TYPE_9__ {int numsurfaces; TYPE_3__* surfaces; } ;
struct TYPE_6__ {int lightdir; int xyz; int normal; } ;


 int FUNC_0 (int ,int ,int ,TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;



 TYPE_4__ VAR_0 ;

void FUNC_3( void )
{
 int VAR_1, VAR_2;
 msurface_t *VAR_3;

 for(VAR_2 = 0, VAR_3 = &VAR_0.surfaces[0]; VAR_2 < VAR_0.numsurfaces ; VAR_2++, VAR_3++)
 {
  srfBspSurface_t *VAR_4 = (srfBspSurface_t *) VAR_3->data;

  switch(VAR_4->surfaceType)
  {
   case 130:
   case 129:
   case 128:
    for(VAR_1 = 0; VAR_1 < VAR_4->numVerts; VAR_1++)
    {
     vec3_t VAR_5;
     vec3_t VAR_6;

     FUNC_2(VAR_6, VAR_4->verts[VAR_1].normal);
     FUNC_0( VAR_4->verts[VAR_1].xyz, VAR_5, VAR_6, &VAR_0 );
     FUNC_1(VAR_4->verts[VAR_1].lightdir, VAR_5);
    }

    break;

   default:
    break;
  }
 }
}
