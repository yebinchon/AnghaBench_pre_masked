
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numpoints; double** p; } ;
typedef TYPE_1__ winding_t ;
typedef double vec_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

void FUNC_1 (winding_t *VAR_0, FILE *VAR_1)
{
 static int VAR_2 = 128;
 vec_t VAR_3;
 int VAR_4;

 FUNC_0 (VAR_1, "%i\n", VAR_0->numpoints);
 VAR_2+=28;
 VAR_3 = (VAR_2&255)/255.0;
 for (VAR_4=0 ; VAR_4<VAR_0->numpoints ; VAR_4++)
 {
  FUNC_0 (VAR_1, "%6.3f %6.3f %6.3f %6.3f %6.3f %6.3f\n",
   VAR_0->p[VAR_4][0],
   VAR_0->p[VAR_4][1],
   VAR_0->p[VAR_4][2],
   VAR_3,
   VAR_3,
   VAR_3);
 }
 FUNC_0 (VAR_1, "\n");
}
