
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int planenum; } ;
typedef TYPE_1__ side_t ;
struct TYPE_12__ {int contents; int planenum; struct TYPE_12__** children; int * volume; int * brushlist; struct TYPE_12__* parent; TYPE_1__* side; } ;
typedef TYPE_2__ node_t ;
typedef int bspbrush_t ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (int) ;
 TYPE_1__* FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (int *,int,int **,int **) ;
 int FUNC_13 (int *,TYPE_2__*,int **,int **) ;
 int FUNC_14 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

void FUNC_15(int VAR_10)
{
 node_t *VAR_11, *VAR_12;
 side_t *VAR_13;
 int VAR_14, VAR_15;
 bspbrush_t *VAR_16;

 for (VAR_12 = FUNC_9(); VAR_12; )
 {



  if (VAR_9 == 1)
   FUNC_7();

  VAR_16 = VAR_12->brushlist;

  if (VAR_9 == 1)
  {
   VAR_15 = FUNC_14() + VAR_2 + VAR_1;
   if (VAR_15 > VAR_4)
   {
    VAR_4 = VAR_15;
   }
   VAR_3++;
  }

  if (VAR_8)
  {
   FUNC_3(VAR_16, VAR_12);
  }

  if (VAR_6)
  {
   VAR_13 = ((void*)0);
  }
  else
  {

   VAR_13 = FUNC_11(VAR_16, VAR_12);
  }

  if (!VAR_13)
  {

   FUNC_8(VAR_12, VAR_16);
   if (VAR_12->contents & VAR_0) VAR_5++;
   if (VAR_7)
   {

    FUNC_6(VAR_12->brushlist);
    VAR_12->brushlist = ((void*)0);
   }

   if (VAR_12->volume)
   {
    FUNC_5(VAR_12->volume);
    VAR_12->volume = ((void*)0);
   }
   VAR_12 = FUNC_9();
   continue;
  }


  VAR_12->side = VAR_13;
  VAR_12->planenum = VAR_13->planenum & ~1;


  for (VAR_14 = 0; VAR_14 < 2; VAR_14++)
  {
   VAR_11 = FUNC_1();
   VAR_11->parent = VAR_12;
   VAR_12->children[VAR_14] = VAR_11;
  }


  FUNC_13(VAR_16, VAR_12, &VAR_12->children[0]->brushlist, &VAR_12->children[1]->brushlist);

  FUNC_2(VAR_12->children[0]->brushlist, VAR_12->children[1]->brushlist);

  FUNC_6(VAR_16);
  VAR_12->brushlist = ((void*)0);


  FUNC_12(VAR_12->volume, VAR_12->planenum, &VAR_12->children[0]->volume,
        &VAR_12->children[1]->volume);

  if (!VAR_12->children[0]->volume || !VAR_12->children[1]->volume)
  {
   FUNC_4("child without volume brush");
  }


  if (VAR_12->volume)
  {
   FUNC_5(VAR_12->volume);
   VAR_12->volume = ((void*)0);
  }


  FUNC_0(VAR_12->children[1]);
  VAR_12 = VAR_12->children[0];
 }
 FUNC_10(VAR_10);
}
