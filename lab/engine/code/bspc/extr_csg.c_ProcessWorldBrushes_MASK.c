
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_7__ {int maxs; int mins; TYPE_2__* headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_8__ {int contents; int planenum; } ;
typedef TYPE_2__ node_t ;
typedef int bspbrush_t ;


 TYPE_2__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (int *,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,int,scalar_t__*,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (scalar_t__*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;

tree_t *FUNC_8(int VAR_6, int VAR_7)
{
 bspbrush_t *VAR_8;
 tree_t *VAR_9;
 node_t *VAR_10;
 vec3_t VAR_11, VAR_12;


 VAR_11[0] = VAR_4[0] - 8;
 VAR_11[1] = VAR_4[1] - 8;
 VAR_11[2] = VAR_4[2] - 8;

 VAR_12[0] = VAR_3[0] + 8;
 VAR_12[1] = VAR_3[1] + 8;
 VAR_12[2] = VAR_3[2] + 8;


 FUNC_5();






 VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_11, VAR_12);


 if (!VAR_8)
 {
  VAR_10 = FUNC_0 ();
  VAR_10->planenum = VAR_1;
  VAR_10->contents = VAR_0;

  VAR_9 = FUNC_6();
  VAR_9->headnode = VAR_10;
  FUNC_7(VAR_11, VAR_9->mins);
  FUNC_7(VAR_12, VAR_9->maxs);
 }
 else
 {


  if (!VAR_5)
  {
   VAR_8 = FUNC_2(VAR_8);





  }

  if (VAR_2)
  {
   FUNC_3(VAR_8);
   return ((void*)0);
  }

  VAR_9 = FUNC_1(VAR_8, VAR_11, VAR_12);
 }

 return VAR_9;
}
