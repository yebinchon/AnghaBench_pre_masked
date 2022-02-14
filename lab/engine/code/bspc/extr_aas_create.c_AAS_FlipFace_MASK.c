
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_5__ {int planenum; int * winding; int * backarea; int * frontarea; } ;
typedef TYPE_1__ tmp_face_t ;
typedef int tmp_area_t ;


 int FUNC_0 (TYPE_1__*,int,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

void FUNC_4(tmp_face_t *VAR_0)
{
 tmp_area_t *VAR_1, *VAR_2;
 winding_t *VAR_3;

 VAR_1 = VAR_0->frontarea;
 VAR_2 = VAR_0->backarea;

 if (!VAR_1 || !VAR_2) return;

 VAR_3 = VAR_0->winding;
 VAR_0->winding = FUNC_3(VAR_3);
 FUNC_2(VAR_3);

 VAR_0->planenum ^= 1;

 FUNC_1(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0, 1, VAR_1);
 FUNC_0(VAR_0, 0, VAR_2);
}
