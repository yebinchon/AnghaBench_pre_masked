
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int contents; int surf; int planenum; size_t texinfo; int flags; } ;
typedef TYPE_1__ side_t ;
struct TYPE_23__ {int numsides; int contents; TYPE_1__* original_sides; scalar_t__ brushnum; TYPE_3__* entitynum; int leafnum; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_24__ {int numbrushes; scalar_t__ firstbrush; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_25__ {int dist; int normal; } ;
typedef TYPE_4__ dplane_t ;
struct TYPE_26__ {size_t texinfo; size_t planenum; } ;
typedef TYPE_5__ dbrushside_t ;
struct TYPE_27__ {int numsides; int firstside; int contents; } ;
typedef TYPE_6__ dbrush_t ;
struct TYPE_28__ {int flags; } ;


 int FUNC_0 (TYPE_2__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (char*,TYPE_3__*,scalar_t__) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 TYPE_1__* VAR_17 ;
 scalar_t__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_6__* VAR_22 ;
 int * VAR_23 ;
 TYPE_5__* VAR_24 ;
 TYPE_4__* VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 TYPE_2__* VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 TYPE_7__* VAR_33 ;

void FUNC_8(dbrush_t *VAR_34, entity_t *VAR_35)
{
 mapbrush_t *VAR_36;
 int VAR_37, VAR_38, VAR_39;
 side_t *VAR_40, *VAR_41;
 int VAR_42;
 dbrushside_t *VAR_43;
 dplane_t *VAR_44;

 if (VAR_31 >= VAR_9)
  FUNC_2 ("nummapbrushes >= MAX_MAPFILE_BRUSHES");

 VAR_36 = &VAR_28[VAR_31];
 VAR_36->original_sides = &VAR_17[VAR_32];
 VAR_36->entitynum = VAR_35-VAR_26;
 VAR_36->brushnum = VAR_31 - VAR_35->firstbrush;
 VAR_36->leafnum = VAR_23[VAR_34 - VAR_22];

 for (VAR_39 = 0; VAR_39 < VAR_34->numsides; VAR_39++)
 {

  VAR_43 = &VAR_24[VAR_34->firstside + VAR_39];

  if (VAR_32 >= VAR_10)
  {
   FUNC_2 ("MAX_MAPFILE_BRUSHSIDES");
  }

  VAR_40 = &VAR_17[VAR_32];

  if (VAR_18[VAR_34->firstside + VAR_39]) VAR_40->flags |= VAR_11;
  else VAR_40->flags &= ~VAR_11;

  VAR_40->contents = VAR_34->contents;

  if (VAR_43->texinfo < 0) VAR_40->surf = 0;
  else VAR_40->surf = VAR_33[VAR_43->texinfo].flags;


  if (VAR_40->surf & (VAR_14|VAR_15) )
   VAR_40->contents |= VAR_0;
  if (VAR_40->contents & (VAR_4|VAR_3) )
   VAR_40->contents |= VAR_0;
  if (VAR_27)
   VAR_40->contents &= ~VAR_0;
  if (!(VAR_40->contents & ((VAR_8-1)
   | VAR_4|VAR_3|VAR_2) ) )
   VAR_40->contents |= VAR_6;


  if (VAR_40->surf & (VAR_12|VAR_13) )
  {
   VAR_40->contents = 0;
   VAR_40->surf &= ~VAR_0;
  }


  VAR_44 = &VAR_25[VAR_43->planenum];
  VAR_42 = FUNC_3(VAR_44->normal, VAR_44->dist);







  for (VAR_38 = 0; VAR_38 < VAR_36->numsides; VAR_38++)
  {
   VAR_41 = VAR_36->original_sides + VAR_38;



   if (VAR_41->planenum == VAR_42)
   {
    FUNC_4("Entity %i, Brush %i: duplicate plane\n"
     , VAR_36->entitynum, VAR_36->brushnum);
    break;
   }
   if ( VAR_41->planenum == (VAR_42^1) )
   {
    FUNC_4("Entity %i, Brush %i: mirrored plane\n"
     , VAR_36->entitynum, VAR_36->brushnum);
    break;
   }
  }
  if (VAR_38 != VAR_36->numsides)
   continue;





  VAR_40 = VAR_36->original_sides + VAR_36->numsides;

  VAR_40->planenum = VAR_42;


  if (VAR_43->texinfo < 0) VAR_40->texinfo = 0;
  else VAR_40->texinfo = VAR_43->texinfo;







  VAR_32++;
  VAR_36->numsides++;
 }


 VAR_36->contents = VAR_34->contents;
 FUNC_7(VAR_36);

 if (FUNC_1(VAR_36))
 {
  VAR_20++;
  VAR_36->numsides = 0;
  return;
 }


 if (VAR_21)
 {

  FUNC_0(VAR_36, VAR_35, 0);
  return;
 }


 if (VAR_29 && (VAR_36->contents & VAR_0) )
 {
  VAR_36->numsides = 0;
  return;
 }


 if (VAR_30 && (VAR_36->contents & (VAR_1 | VAR_5 | VAR_7)) )
 {
  VAR_36->numsides = 0;
  return;
 }


 FUNC_5(VAR_36);


 FUNC_6(VAR_36);



 if (VAR_36->contents & (VAR_4|VAR_3) )
 {
   VAR_19++;
  for (VAR_37 = 0; VAR_37 < VAR_36->numsides; VAR_37++)
   VAR_36->original_sides[VAR_37].texinfo = VAR_16;
 }
 VAR_31++;
 VAR_35->numbrushes++;
}
