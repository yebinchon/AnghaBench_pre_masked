
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec3_t ;
struct TYPE_6__ {int faceflags; int * winding; int planenum; } ;
typedef TYPE_1__ tmp_face_t ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int *,int ,float,int ,int **,int **) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *) ;

void FUNC_5(tmp_face_t *VAR_1, vec3_t VAR_2, float VAR_3,
       tmp_face_t **VAR_4, tmp_face_t **VAR_5)
{
 winding_t *VAR_6, *VAR_7;


 *VAR_4 = *VAR_5 = ((void*)0);

 FUNC_1(VAR_1->winding, VAR_2, VAR_3, VAR_0, &VAR_6, &VAR_7);
 if (VAR_6)
 {

  (*VAR_4) = FUNC_0();
  (*VAR_4)->planenum = VAR_1->planenum;
  (*VAR_4)->winding = VAR_6;
  (*VAR_4)->faceflags = VAR_1->faceflags;
 }
 if (VAR_7)
 {

  (*VAR_5) = FUNC_0();
  (*VAR_5)->planenum = VAR_1->planenum;
  (*VAR_5)->winding = VAR_7;
  (*VAR_5)->faceflags = VAR_1->faceflags;
 }
}
