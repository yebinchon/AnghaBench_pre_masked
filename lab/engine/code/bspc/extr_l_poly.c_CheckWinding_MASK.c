
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numpoints; int** p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec_t ;
typedef int vec3_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,int*) ;

void FUNC_8 (winding_t *VAR_2)
{
 int VAR_3, VAR_4;
 vec_t *VAR_5, *VAR_6;
 vec_t VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11;
 vec_t VAR_12;
 vec_t VAR_13;

 if (VAR_2->numpoints < 3)
  FUNC_2 ("CheckWinding: %i points",VAR_2->numpoints);

 VAR_12 = FUNC_6(VAR_2);
 if (VAR_12 < 1)
  FUNC_2 ("CheckWinding: %f area", VAR_12);

 FUNC_7 (VAR_2, VAR_11, &VAR_13);

 for (VAR_3=0 ; VAR_3<VAR_2->numpoints ; VAR_3++)
 {
  VAR_5 = VAR_2->p[VAR_3];

  for (VAR_4=0 ; VAR_4<3 ; VAR_4++)
   if (VAR_5[VAR_4] > VAR_0 || VAR_5[VAR_4] < -VAR_0)
    FUNC_2 ("CheckWinding: BUGUS_RANGE: %f",VAR_5[VAR_4]);

  VAR_4 = VAR_3+1 == VAR_2->numpoints ? 0 : VAR_3+1;


  VAR_7 = FUNC_1 (VAR_5, VAR_11) - VAR_13;
  if (VAR_7 < -VAR_1 || VAR_7 > VAR_1)
   FUNC_2 ("CheckWinding: point off plane");


  VAR_6 = VAR_2->p[VAR_4];
  FUNC_5 (VAR_6, VAR_5, VAR_9);

  if (FUNC_3 (VAR_9) < VAR_1)
   FUNC_2 ("CheckWinding: degenerate edge");

  FUNC_0 (VAR_11, VAR_9, VAR_10);
  FUNC_4 (VAR_10);
  VAR_8 = FUNC_1 (VAR_5, VAR_10);
  VAR_8 += VAR_1;


  for (VAR_4=0 ; VAR_4<VAR_2->numpoints ; VAR_4++)
  {
   if (VAR_4 == VAR_3)
    continue;
   VAR_7 = FUNC_1 (VAR_2->p[VAR_4], VAR_10);
   if (VAR_7 > VAR_8)
    FUNC_2 ("CheckWinding: non-convex");
  }
 }
}
