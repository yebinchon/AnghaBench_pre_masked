
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int contents; } ;
typedef TYPE_1__ hl_dleaf_t ;
struct TYPE_13__ {struct TYPE_13__* next; int side; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_15__ {int planenum; int* children; } ;
struct TYPE_14__ {int dist; int normal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,int,TYPE_2__**,TYPE_2__**) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,int ) ;

bspbrush_t *FUNC_6(bspbrush_t *VAR_8, int VAR_9)
{
 int VAR_10;
 bspbrush_t *VAR_11, *VAR_12;
 hl_dleaf_t *VAR_13;


 if (VAR_9 < 0)
 {
  VAR_13 = &VAR_4[(-VAR_9) - 1];
  if (VAR_13->contents != 135)
  {



  }
  switch(VAR_13->contents)
  {
   case 135:
   {
    FUNC_2(VAR_8);
    return ((void*)0);
   }
   case 130:



   case 132:



   {
    VAR_8->side = VAR_2;
    return VAR_8;
   }
   case 128:
   {
    VAR_8->side = VAR_3;
    return VAR_8;
   }
   case 131:
   {
    VAR_8->side = VAR_1;
    return VAR_8;
   }
   case 134:
   {
    VAR_8->side = VAR_0;
    return VAR_8;
   }
   default:
   {
    FUNC_0("HL_CreateBrushes_r: unknown contents %d in Half-Life BSP", VAR_13->contents);
    return ((void*)0);
   }
  }
  return ((void*)0);
 }







 VAR_10 = VAR_5[VAR_9].planenum;
 VAR_10 = FUNC_1(VAR_6[VAR_10].normal, VAR_6[VAR_10].dist);

 FUNC_3(VAR_8, VAR_10, VAR_9, &VAR_11, &VAR_12);

 FUNC_2(VAR_8);

 if (!VAR_11 || !VAR_12)
 {
  FUNC_4("HL_CreateBrushes_r: WARNING node not splitting brush\n");

 }

 if (VAR_11) VAR_11 = FUNC_6(VAR_11, VAR_5[VAR_9].children[0]);
 if (VAR_12) VAR_12 = FUNC_6(VAR_12, VAR_5[VAR_9].children[1]);

 if (VAR_11)
 {
  for (VAR_8 = VAR_11; VAR_8->next; VAR_8 = VAR_8->next);
  VAR_8->next = VAR_12;
  return VAR_11;
 }
 else
 {
  return VAR_12;
 }
}
