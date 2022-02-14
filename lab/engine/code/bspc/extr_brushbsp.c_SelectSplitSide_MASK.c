
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ texinfo; int flags; int planenum; int surf; int winding; } ;
typedef TYPE_1__ side_t ;
typedef int qboolean ;
struct TYPE_12__ {int detail_seperator; } ;
typedef TYPE_2__ node_t ;
struct TYPE_13__ {int numsides; int testside; int side; TYPE_1__* sides; struct TYPE_13__* next; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_14__ {int type; } ;


 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_3__*,int,int*,int*,int*) ;
 int FUNC_3 (int) ;
 int VAR_8 ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;

side_t *FUNC_4 (bspbrush_t *VAR_11, node_t *VAR_12)
{
 int VAR_13, VAR_14;
 bspbrush_t *VAR_15, *VAR_16;
 side_t *VAR_17, *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29;
 int VAR_30;
 qboolean VAR_31 = 0;

 VAR_18 = ((void*)0);
 VAR_14 = -99999;





 VAR_21 = 2;
 for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++)
 {
  for (VAR_15 = VAR_11; VAR_15; VAR_15 = VAR_15->next)
  {





   for (VAR_19 = 0; VAR_19 < VAR_15->numsides; VAR_19++)
   {
    VAR_17 = VAR_15->sides + VAR_19;


    if (!VAR_17->winding)
     continue;
    if (VAR_17->texinfo == VAR_7)
     continue;
    if (VAR_17->flags & VAR_5)
     continue;






    if ((VAR_17->flags & VAR_4) && (VAR_20 < 1))
     continue;

    VAR_22 = VAR_17->planenum;
    VAR_22 &= ~1;

    if (!FUNC_1 (VAR_22, VAR_12))
     continue;

    FUNC_0 (VAR_22, VAR_12);

    VAR_24 = 0;
    VAR_25 = 0;
    VAR_26 = 0;
    VAR_27 = 0;
    VAR_28 = 0;
    VAR_30 = 0;


    for (VAR_16 = VAR_11; VAR_16; VAR_16 = VAR_16->next)
    {
     VAR_23 = FUNC_2 (VAR_16, VAR_22, &VAR_29, &VAR_31, &VAR_30);

     VAR_28 += VAR_29;



     VAR_16->testside = VAR_23;

     if (VAR_23 & VAR_2) VAR_27++;
     if (VAR_23 & VAR_3) VAR_24++;
     if (VAR_23 & VAR_0) VAR_25++;
     if (VAR_23 == VAR_1) VAR_26++;
    }


    VAR_13 = 5*VAR_27 - 5*VAR_28 - FUNC_3(VAR_24-VAR_25);


    if (VAR_9[VAR_22].type < 3)
     VAR_13+=5;

    VAR_13 -= VAR_30 * 1000;


    if (VAR_31 && !(VAR_17->surf & VAR_6) )
     VAR_13 = -9999999;




    if (VAR_13 > VAR_14)
    {
     VAR_14 = VAR_13;
     VAR_18 = VAR_17;
     for (VAR_16 = VAR_11; VAR_16 ; VAR_16 = VAR_16->next)
      VAR_16->side = VAR_16->testside;
    }
   }
  }



  if (VAR_18)
  {
   if (VAR_20 > 1)
   {
    if (VAR_10 == 1) VAR_8++;
   }
   if (VAR_20 > 0) VAR_12->detail_seperator = 1;
   break;
  }
 }




 for (VAR_15 = VAR_11 ; VAR_15 ; VAR_15=VAR_15->next)
 {
  for (VAR_19 = 0; VAR_19 < VAR_15->numsides; VAR_19++)
  {
   VAR_15->sides[VAR_19].flags &= ~VAR_5;
  }
 }

 return VAR_18;
}
