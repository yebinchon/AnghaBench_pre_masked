
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
struct TYPE_9__ {int planenum; int faceflags; TYPE_1__* winding; TYPE_3__* frontarea; struct TYPE_9__** next; } ;
typedef TYPE_2__ tmp_face_t ;
struct TYPE_10__ {TYPE_2__* tmpfaces; } ;
typedef TYPE_3__ tmp_area_t ;


 TYPE_1__* FUNC_0 (TYPE_3__*,int) ;
 float FUNC_1 (int ,int ) ;
 float VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;

int FUNC_5(tmp_area_t *VAR_3, vec3_t VAR_4, float VAR_5,
       int *VAR_6, int *VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 float VAR_14, VAR_15, VAR_16;
 tmp_face_t *VAR_17;
 winding_t *VAR_18;

 *VAR_6 = *VAR_7 = *VAR_8 = 0;

 VAR_13 = FUNC_2(VAR_4, VAR_5);

 VAR_18 = FUNC_0(VAR_3, VAR_13);
 if (!VAR_18) return 0;
 FUNC_3(VAR_18);

 for (VAR_17 = VAR_3->tmpfaces; VAR_17; VAR_17 = VAR_17->next[VAR_10])
 {

  VAR_10 = VAR_17->frontarea != VAR_3;

  if ((VAR_17->planenum & ~1) == (VAR_13 & ~1))
  {
   FUNC_4("AAS_TestSplitPlane: tried face plane as splitter\n");
   return 0;
  }
  VAR_18 = VAR_17->winding;

  VAR_15 = VAR_16 = 0;

  VAR_11 = VAR_12 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_18->numpoints; VAR_9++)
  {
   VAR_14 = FUNC_1(VAR_18->p[VAR_9], VAR_4) - VAR_5;
   if (VAR_14 > VAR_15) VAR_15 = VAR_14;
   if (VAR_14 < VAR_16) VAR_16 = VAR_14;

   if (VAR_14 > 0.4)
    VAR_11 = 1;
   if (VAR_14 < -0.4)
    VAR_12 = 1;
  }

  if ( (VAR_15 > VAR_0 && VAR_15 < VAR_1)
   || (VAR_16 < -VAR_0 && VAR_16 > -VAR_1) )
  {
   (*VAR_8)++;
  }

  if (VAR_11 && VAR_12)
  {
   (*VAR_6)++;
   if (VAR_17->faceflags & VAR_2)
   {
    (*VAR_7)++;
   }
  }
 }
 return 1;
}
