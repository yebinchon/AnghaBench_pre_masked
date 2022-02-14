
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;
typedef int * vec3_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *) ;
 float FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,...) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,double) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int *) ;
 double FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int **,int **,int) ;

winding_t *FUNC_11(winding_t *VAR_3, winding_t *VAR_4, vec3_t VAR_5)
{
 winding_t *VAR_6;
 float VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13[VAR_0+4];
 vec3_t VAR_14[VAR_0+4];
 int VAR_15;
 vec3_t VAR_16, VAR_17, VAR_18;

 FUNC_5(VAR_3, 0.2);
 VAR_15 = VAR_3->numpoints;
 FUNC_10(VAR_14, VAR_3->p, VAR_3->numpoints * sizeof(vec3_t));

 for (VAR_8 = 0; VAR_8 < VAR_4->numpoints; VAR_8++)
 {
  FUNC_6(VAR_4->p[VAR_8], VAR_18);
  for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
  {
   FUNC_9(VAR_14[(VAR_9+1)%VAR_15],
       VAR_14[(VAR_9)%VAR_15], VAR_16);
   FUNC_1(VAR_16, VAR_5, VAR_17);
   FUNC_8(VAR_17);
   if (FUNC_7(VAR_17) < 0.9)
   {

    for (VAR_10 = VAR_9; VAR_10 < VAR_15-1; VAR_10++)
    {
     FUNC_6(VAR_14[VAR_10+1], VAR_14[VAR_10]);
     VAR_13[VAR_10] = VAR_13[VAR_10+1];
    }
    VAR_15--;
    VAR_9--;
    FUNC_3("MergeWindings: degenerate edge on winding %f %f %f\n", VAR_17[0],
                    VAR_17[1],
                    VAR_17[2]);
    continue;
   }
   VAR_7 = FUNC_2(VAR_14[(VAR_9)%VAR_15], VAR_17);
   if (FUNC_2(VAR_18, VAR_17) - VAR_7 < -0.1) VAR_13[VAR_9] = VAR_1;
   else VAR_13[VAR_9] = VAR_2;
  }

  for (VAR_9 = 0; VAR_9 < VAR_15;)
  {
   if (VAR_13[VAR_9] == VAR_1
    && VAR_13[(VAR_9+1)%VAR_15] == VAR_1)
   {

    for (VAR_10 = (VAR_9+1)%VAR_15; VAR_10 < VAR_15-1; VAR_10++)
    {
     FUNC_6(VAR_14[VAR_10+1], VAR_14[VAR_10]);
     VAR_13[VAR_10] = VAR_13[VAR_10+1];
    }
    VAR_15--;
   }
   else
   {
    VAR_9++;
   }
  }

  VAR_11 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
  {
   if (VAR_13[VAR_9] == VAR_2
    && VAR_13[(VAR_9+1)%VAR_15] == VAR_1)
   {
    if (VAR_11) FUNC_3("Warning: MergeWindings: front to back found twice\n");
    VAR_11 = 1;
   }
  }

  for (VAR_9 = 0; VAR_9 < VAR_15; VAR_9++)
  {
   if (VAR_13[VAR_9] == VAR_2
    && VAR_13[(VAR_9+1)%VAR_15] == VAR_1)
   {
    VAR_12 = (VAR_9+1)%VAR_15;

    for (VAR_10 = VAR_15-1; VAR_10 > VAR_12; VAR_10--)
    {
     FUNC_6(VAR_14[VAR_10], VAR_14[VAR_10+1]);
    }
    VAR_15++;
    FUNC_6(VAR_18, VAR_14[(VAR_12+1)%VAR_15]);
    break;
   }
  }
 }
 VAR_6 = FUNC_0(VAR_15);
 VAR_6->numpoints = VAR_15;
 FUNC_10(VAR_6->p, VAR_14, VAR_15 * sizeof(vec3_t));
 FUNC_4(VAR_6);
 return VAR_6;
}
