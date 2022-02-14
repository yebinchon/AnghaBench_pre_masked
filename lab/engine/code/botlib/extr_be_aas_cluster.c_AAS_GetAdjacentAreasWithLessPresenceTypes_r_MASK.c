
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int faceflags; int frontarea; int backarea; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_7__ {int numfaces; int firstface; } ;
typedef TYPE_3__ aas_area_t ;
struct TYPE_8__ {TYPE_1__* areasettings; TYPE_2__* faces; int * faceindex; TYPE_3__* areas; } ;
struct TYPE_5__ {int presencetype; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ) ;

int FUNC_2(int *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 aas_area_t *VAR_12;
 aas_face_t *VAR_13;

 VAR_3[VAR_4++] = VAR_5;
 VAR_12 = &VAR_2.areas[VAR_5];
 VAR_8 = VAR_2.areasettings[VAR_5].presencetype;
 for (VAR_6 = 0; VAR_6 < VAR_12->numfaces; VAR_6++)
 {
  VAR_11 = FUNC_1(VAR_2.faceindex[VAR_12->firstface + VAR_6]);
  VAR_13 = &VAR_2.faces[VAR_11];

  if (VAR_13->faceflags & VAR_0) continue;

  if (VAR_13->frontarea != VAR_5) VAR_10 = VAR_13->frontarea;
  else VAR_10 = VAR_13->backarea;

  VAR_9 = VAR_2.areasettings[VAR_10].presencetype;

  if ((VAR_8 & ~VAR_9) &&
    !(VAR_9 & ~VAR_8))
  {

   for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
   {
    if (VAR_10 == VAR_3[VAR_7]) break;
   }

   if (VAR_7 == VAR_4)
   {
    if (VAR_4 >= VAR_1)
    {
     FUNC_0("MAX_PORTALAREAS\n");
     return VAR_4;
    }
    VAR_4 = FUNC_2(VAR_3, VAR_4, VAR_10);
   }
  }
 }
 return VAR_4;
}
