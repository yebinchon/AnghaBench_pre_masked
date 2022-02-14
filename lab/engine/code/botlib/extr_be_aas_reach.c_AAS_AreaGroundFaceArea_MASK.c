
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int faceflags; } ;
typedef TYPE_1__ aas_face_t ;
struct TYPE_6__ {int numfaces; int firstface; } ;
typedef TYPE_2__ aas_area_t ;
struct TYPE_7__ {int * faceindex; TYPE_1__* faces; TYPE_2__* areas; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 size_t FUNC_1 (int ) ;

float FUNC_2(int VAR_2)
{
 int VAR_3;
 float VAR_4;
 aas_area_t *VAR_5;
 aas_face_t *VAR_6;

 VAR_4 = 0;
 VAR_5 = &VAR_1.areas[VAR_2];
 for (VAR_3 = 0; VAR_3 < VAR_5->numfaces; VAR_3++)
 {
  VAR_6 = &VAR_1.faces[FUNC_1(VAR_1.faceindex[VAR_5->firstface + VAR_3])];
  if (!(VAR_6->faceflags & VAR_0)) continue;

  VAR_4 += FUNC_0(VAR_6);
 }
 return VAR_4;
}
