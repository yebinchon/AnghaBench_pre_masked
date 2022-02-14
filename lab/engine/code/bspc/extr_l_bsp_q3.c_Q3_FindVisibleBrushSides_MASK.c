
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_13__ {scalar_t__ surfaceType; } ;
typedef TYPE_1__ q3_dsurface_t ;
struct TYPE_14__ {int dist; int normal; } ;
typedef TYPE_2__ q3_dplane_t ;
struct TYPE_15__ {size_t planeNum; } ;
typedef TYPE_3__ q3_dbrushside_t ;
struct TYPE_16__ {int numSides; int firstSide; } ;
typedef TYPE_4__ q3_dbrush_t ;
struct TYPE_17__ {int dist; int normal; } ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int*,int,int ) ;
 TYPE_4__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 int* VAR_8 ;
 TYPE_7__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* VAR_14 ;
 int FUNC_11 (char*,int) ;

void FUNC_12(void)
{
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 float VAR_21;
 q3_dplane_t *VAR_22;
 q3_dbrushside_t *VAR_23;
 q3_dbrush_t *VAR_24;
 q3_dsurface_t *VAR_25;
 winding_t *VAR_26;

 FUNC_10(VAR_8, 0, VAR_1);

 VAR_20 = 0;

 FUNC_4();
 FUNC_2("searching visible brush sides...\n");
 FUNC_2("%6d brush sides", VAR_20);

 for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
 {
  VAR_24 = &VAR_6[VAR_15];

  for (VAR_16 = 0; VAR_16 < VAR_24->numSides; VAR_16++)
  {
   FUNC_11("\r%6d", VAR_20++);
   VAR_23 = &VAR_7[VAR_24->firstSide + VAR_16];

   VAR_26 = FUNC_3(VAR_24, VAR_23);
   if (!VAR_26)
   {
    VAR_8[VAR_24->firstSide + VAR_16] = 1;
    continue;
   }
   else
   {

    if (FUNC_8(VAR_26))
    {
     FUNC_1(VAR_26);
     VAR_8[VAR_24->firstSide + VAR_16] = 1;
     continue;
    }
    else
    {
     VAR_18 = FUNC_7(VAR_26);
     if (VAR_18 == VAR_2
      || VAR_18 == VAR_4
      || VAR_18 == VAR_3

      )
     {
      FUNC_1(VAR_26);
      VAR_8[VAR_24->firstSide + VAR_16] = 1;
      continue;
     }
    }
   }
   if (FUNC_6(VAR_26) < 20)
   {
    VAR_8[VAR_24->firstSide + VAR_16] = 1;
    continue;
   }

   for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++)
   {
    VAR_25 = &VAR_10[VAR_17];
    if (VAR_25->surfaceType != VAR_0) continue;


    VAR_22 = &VAR_14[VAR_17];

    if (FUNC_9(FUNC_9(VAR_22->dist) - FUNC_9(VAR_9[VAR_23->planeNum].dist)) > 5) continue;
    VAR_21 = FUNC_0(VAR_22->normal, VAR_9[VAR_23->planeNum].normal);
    if (VAR_21 > -0.9 && VAR_21 < 0.9) continue;

    if (FUNC_5(VAR_25, VAR_26))
    {
     VAR_8[VAR_24->firstSide + VAR_16] = 1;

     break;
    }
   }
   FUNC_1(VAR_26);
  }
 }
 FUNC_11("\r%6d brush sides\n", VAR_20);
 VAR_19 = 0;
 for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
 {
  if (VAR_5) VAR_8[VAR_15] = 1;
  if (VAR_8[VAR_15]) VAR_19++;
 }
 FUNC_2("%d brush sides textured out of %d\n", VAR_19, VAR_13);
}
