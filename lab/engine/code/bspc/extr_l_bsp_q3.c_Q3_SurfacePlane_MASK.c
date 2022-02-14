
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_4__ {size_t firstVert; int numVerts; } ;
typedef TYPE_1__ q3_dsurface_t ;
struct TYPE_5__ {float* xyz; } ;


 int FUNC_0 (double*,double*,double*) ;
 float FUNC_1 (float*,double*) ;
 int FUNC_2 (char*,int,float,float,float) ;
 double FUNC_3 (double*) ;
 int FUNC_4 (double*) ;
 int FUNC_5 (float*,float*,double*) ;
 int FUNC_6 (char*,...) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_7(q3_dsurface_t *VAR_2, vec3_t VAR_3, float *VAR_4)
{
 int VAR_5;
 float *VAR_6, *VAR_7, *VAR_8;
 vec3_t VAR_9, VAR_10;

 VAR_6 = VAR_1[VAR_2->firstVert].xyz;
 for (VAR_5 = 1; VAR_5 < VAR_2->numVerts-1; VAR_5++)
 {
  VAR_7 = VAR_1[VAR_2->firstVert + ((VAR_5) % VAR_2->numVerts)].xyz;
  VAR_8 = VAR_1[VAR_2->firstVert + ((VAR_5+1) % VAR_2->numVerts)].xyz;
  FUNC_5(VAR_6, VAR_7, VAR_9);
  FUNC_5(VAR_8, VAR_7, VAR_10);
  FUNC_0(VAR_9, VAR_10, VAR_3);
  FUNC_4(VAR_3);
  if (FUNC_3(VAR_3)) break;
 }
 if (FUNC_3(VAR_3) < 0.9)
 {
  FUNC_6("surface %td bogus normal vector %f %f %f\n", VAR_2 - VAR_0, VAR_3[0], VAR_3[1], VAR_3[2]);
  FUNC_6("t1 = %f %f %f, t2 = %f %f %f\n", VAR_9[0], VAR_9[1], VAR_9[2], VAR_10[0], VAR_10[1], VAR_10[2]);
  for (VAR_5 = 0; VAR_5 < VAR_2->numVerts; VAR_5++)
  {
   VAR_7 = VAR_1[VAR_2->firstVert + ((VAR_5) % VAR_2->numVerts)].xyz;
   FUNC_2("p%d = %f %f %f\n", VAR_5, VAR_7[0], VAR_7[1], VAR_7[2]);
  }
 }
 *VAR_4 = FUNC_1(VAR_6, VAR_3);
}
