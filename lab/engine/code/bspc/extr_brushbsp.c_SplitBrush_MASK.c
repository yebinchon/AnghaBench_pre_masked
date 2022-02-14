
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_27__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef double vec_t ;
struct TYPE_28__ {int planenum; TYPE_1__* winding; int flags; int texinfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_29__ {float dist; int normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_30__ {int numsides; TYPE_2__* sides; int * maxs; int * mins; int original; } ;
typedef TYPE_4__ bspbrush_t ;


 TYPE_4__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ,float) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 double FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_1__**,int ,float,int ) ;
 int FUNC_6 (TYPE_1__*,int ,float,int ,TYPE_1__**,TYPE_1__**) ;
 TYPE_4__* FUNC_7 (TYPE_4__*) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 float FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_3__* VAR_6 ;

void FUNC_15 (bspbrush_t *VAR_7, int VAR_8,
 bspbrush_t **VAR_9, bspbrush_t **VAR_10)
{
 bspbrush_t *VAR_11[2];
 int VAR_12, VAR_13;
 winding_t *VAR_14, *VAR_15[2], *VAR_16;
 plane_t *VAR_17, *VAR_18;
 side_t *VAR_19, *VAR_20;
 float VAR_21, VAR_22, VAR_23;

 *VAR_9 = *VAR_10 = ((void*)0);
 VAR_17 = &VAR_6[VAR_8];


 VAR_22 = VAR_23 = 0;
 for (VAR_12=0 ; VAR_12<VAR_7->numsides ; VAR_12++)
 {
  VAR_14 = VAR_7->sides[VAR_12].winding;
  if (!VAR_14)
   continue;
  for (VAR_13=0 ; VAR_13<VAR_14->numpoints ; VAR_13++)
  {
   VAR_21 = FUNC_9 (VAR_14->p[VAR_13], VAR_17->normal) - VAR_17->dist;
   if (VAR_21 > 0 && VAR_21 > VAR_22)
    VAR_22 = VAR_21;
   if (VAR_21 < 0 && VAR_21 < VAR_23)
    VAR_23 = VAR_21;
  }
 }

 if (VAR_22 < 0.2)
 {
  *VAR_10 = FUNC_7 (VAR_7);
  return;
 }
 if (VAR_23 > -0.2)
 {
  *VAR_9 = FUNC_7 (VAR_7);
  return;
 }



 VAR_14 = FUNC_1 (VAR_17->normal, VAR_17->dist);
 for (VAR_12=0 ; VAR_12<VAR_7->numsides && VAR_14 ; VAR_12++)
 {
  VAR_18 = &VAR_6[VAR_7->sides[VAR_12].planenum ^ 1];
  FUNC_5 (&VAR_14, VAR_18->normal, VAR_18->dist, 0);
 }

 if (!VAR_14 || FUNC_14(VAR_14))
 {
  int VAR_24;

  VAR_24 = FUNC_3 (VAR_7, VAR_17);
  if (VAR_24 == VAR_2)
   *VAR_9 = FUNC_7 (VAR_7);
  if (VAR_24 == VAR_1)
   *VAR_10 = FUNC_7 (VAR_7);

  if (VAR_14) FUNC_11(VAR_14);
  return;
 }

 if (FUNC_13 (VAR_14))
 {
  FUNC_12("WARNING: huge winding\n");
 }

 VAR_16 = VAR_14;



 for (VAR_12=0 ; VAR_12<2 ; VAR_12++)
 {
  VAR_11[VAR_12] = FUNC_0 (VAR_7->numsides+1);
  VAR_11[VAR_12]->original = VAR_7->original;
 }



 for (VAR_12=0 ; VAR_12<VAR_7->numsides ; VAR_12++)
 {
  VAR_19 = &VAR_7->sides[VAR_12];
  VAR_14 = VAR_19->winding;
  if (!VAR_14)
   continue;
  FUNC_6 (VAR_14, VAR_17->normal, VAR_17->dist,
   0 , &VAR_15[0], &VAR_15[1]);
  for (VAR_13=0 ; VAR_13<2 ; VAR_13++)
  {
   if (!VAR_15[VAR_13])
    continue;







   VAR_20 = &VAR_11[VAR_13]->sides[VAR_11[VAR_13]->numsides];
   VAR_11[VAR_13]->numsides++;
   *VAR_20 = *VAR_19;



   VAR_20->winding = VAR_15[VAR_13];
   VAR_20->flags &= ~VAR_3;
  }
 }




 for (VAR_12=0 ; VAR_12<2 ; VAR_12++)
 {
  FUNC_2 (VAR_11[VAR_12]);
  for (VAR_13=0 ; VAR_13<3 ; VAR_13++)
  {
   if (VAR_11[VAR_12]->mins[VAR_13] < -VAR_0 || VAR_11[VAR_12]->maxs[VAR_13] > VAR_0)
   {
    FUNC_12("bogus brush after clip");
    break;
   }
  }

  if (VAR_11[VAR_12]->numsides < 3 || VAR_13 < 3)
  {
   FUNC_10 (VAR_11[VAR_12]);
   VAR_11[VAR_12] = ((void*)0);
  }
 }

 if ( !(VAR_11[0] && VAR_11[1]) )
 {
  if (!VAR_11[0] && !VAR_11[1])
   FUNC_12("split removed brush\r\n");
  else
   FUNC_12("split not on both sides\r\n");
  if (VAR_11[0])
  {
   FUNC_10 (VAR_11[0]);
   *VAR_9 = FUNC_7 (VAR_7);
  }
  if (VAR_11[1])
  {
   FUNC_10 (VAR_11[1]);
   *VAR_10 = FUNC_7 (VAR_7);
  }
  return;
 }


 for (VAR_12=0 ; VAR_12<2 ; VAR_12++)
 {
  VAR_20 = &VAR_11[VAR_12]->sides[VAR_11[VAR_12]->numsides];
  VAR_11[VAR_12]->numsides++;

  VAR_20->planenum = VAR_8^VAR_12^1;
  VAR_20->texinfo = VAR_5;
  VAR_20->flags &= ~VAR_4;
  VAR_20->flags &= ~VAR_3;
  if (VAR_12==0)
   VAR_20->winding = FUNC_8 (VAR_16);
  else
   VAR_20->winding = VAR_16;
 }

{
 vec_t VAR_25;
 int VAR_26;

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++)
 {
  VAR_25 = FUNC_4 (VAR_11[VAR_26]);
  if (VAR_25 < 1.0)
  {
   FUNC_10(VAR_11[VAR_26]);
   VAR_11[VAR_26] = ((void*)0);

  }
 }
 if (!VAR_11[0] && !VAR_11[1])
 {
  FUNC_12("two tiny brushes\r\n");
 }
}

 *VAR_9 = VAR_11[0];
 *VAR_10 = VAR_11[1];
}
