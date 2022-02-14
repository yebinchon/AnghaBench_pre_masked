
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {scalar_t__ faceflags; scalar_t__ frontarea; scalar_t__ backarea; size_t planenum; int num; int * winding; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_8__ {int normal; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int *,int ) ;
 TYPE_2__* VAR_0 ;

int FUNC_7(tmp_face_t *VAR_1, tmp_face_t *VAR_2)
{
 winding_t *VAR_3;






 if (VAR_1->faceflags != VAR_2->faceflags) return 0;



 if (VAR_1->frontarea == VAR_2->frontarea)
 {

  if (VAR_1->backarea == VAR_2->backarea)
  {

   if (VAR_1->planenum == VAR_2->planenum)
   {

    if (VAR_1->frontarea && VAR_1->backarea)
    {
     VAR_3 = FUNC_5(VAR_1->winding, VAR_2->winding,
        VAR_0[VAR_1->planenum].normal);
    }
    else
    {

     VAR_3 = FUNC_6(VAR_1->winding, VAR_2->winding,
         VAR_0[VAR_1->planenum].normal);
    }
    if (VAR_3)
    {
     FUNC_3(VAR_1->winding);
     VAR_1->winding = VAR_3;
     if (VAR_2->frontarea) FUNC_1(VAR_2, VAR_2->frontarea);
     if (VAR_2->backarea) FUNC_1(VAR_2, VAR_2->backarea);
     FUNC_0(VAR_2);
     return 1;
    }
   }
   else if ((VAR_1->planenum & ~1) == (VAR_2->planenum & ~1))
   {
    FUNC_4("face %d and %d, same front and back area but flipped planes\r\n",
       VAR_1->num, VAR_2->num);
   }
  }
 }
 return 0;
}
