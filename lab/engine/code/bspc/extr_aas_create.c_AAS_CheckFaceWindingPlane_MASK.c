
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int winding_t ;
typedef scalar_t__* vec3_t ;
struct TYPE_5__ {size_t planenum; int * winding; int num; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_6__ {scalar_t__* normal; scalar_t__ dist; } ;
typedef TYPE_2__ plane_t ;


 float FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__*,float*) ;
 double FUNC_6 (scalar_t__) ;
 TYPE_2__* VAR_0 ;

void FUNC_7(tmp_face_t *VAR_1)
{
 float VAR_2, VAR_3, VAR_4;
 vec3_t VAR_5;
 plane_t *VAR_6;
 winding_t *VAR_7;


 FUNC_5(VAR_1->winding, VAR_5, &VAR_2);
 VAR_6 = &VAR_0[VAR_1->planenum];

 VAR_3 = FUNC_0(VAR_6->normal, VAR_5);

 if (FUNC_6(VAR_2 - VAR_6->dist) > 0.4 ||
   FUNC_6(VAR_5[0] - VAR_6->normal[0]) > 0.0001 ||
   FUNC_6(VAR_5[1] - VAR_6->normal[1]) > 0.0001 ||
   FUNC_6(VAR_5[2] - VAR_6->normal[2]) > 0.0001)
 {
  FUNC_4(VAR_5);
  VAR_2 = -VAR_2;
  if (FUNC_6(VAR_2 - VAR_6->dist) > 0.4 ||
    FUNC_6(VAR_5[0] - VAR_6->normal[0]) > 0.0001 ||
    FUNC_6(VAR_5[1] - VAR_6->normal[1]) > 0.0001 ||
    FUNC_6(VAR_5[2] - VAR_6->normal[2]) > 0.0001)
  {
   FUNC_2("AAS_CheckFaceWindingPlane: face %d winding plane unequal to face plane\r\n",
         VAR_1->num);

   VAR_4 = FUNC_0(VAR_6->normal, VAR_5);
   if ((VAR_3 < 0 && VAR_4 > 0) ||
     (VAR_3 > 0 && VAR_4 < 0))
   {
    FUNC_2("AAS_CheckFaceWindingPlane: face %d winding reversed\r\n",
         VAR_1->num);
    VAR_7 = VAR_1->winding;
    VAR_1->winding = FUNC_3(VAR_7);
    FUNC_1(VAR_7);
   }
  }
  else
  {
   FUNC_2("AAS_CheckFaceWindingPlane: face %d winding reversed\r\n",
         VAR_1->num);
   VAR_7 = VAR_1->winding;
   VAR_1->winding = FUNC_3(VAR_7);
   FUNC_1(VAR_7);
  }
 }
}
