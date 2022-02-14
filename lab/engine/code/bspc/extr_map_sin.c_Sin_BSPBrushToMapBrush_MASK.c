
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


struct TYPE_22__ {int dist; int normal; } ;
typedef TYPE_1__ sin_dplane_t ;
struct TYPE_23__ {size_t texinfo; size_t planenum; } ;
typedef TYPE_2__ sin_dbrushside_t ;
struct TYPE_24__ {int numsides; int firstside; int contents; } ;
typedef TYPE_3__ sin_dbrush_t ;
struct TYPE_25__ {int contents; int surf; int planenum; size_t texinfo; int flags; } ;
typedef TYPE_4__ side_t ;
struct TYPE_26__ {int numsides; int contents; TYPE_4__* original_sides; scalar_t__ brushnum; TYPE_6__* entitynum; int leafnum; } ;
typedef TYPE_5__ mapbrush_t ;
struct TYPE_27__ {int numbrushes; scalar_t__ firstbrush; } ;
typedef TYPE_6__ entity_t ;
struct TYPE_28__ {int flags; } ;


 int FUNC_0 (TYPE_5__*,TYPE_6__*,int) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
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
 int FUNC_4 (char*,TYPE_6__*,scalar_t__) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (TYPE_5__*) ;
 size_t VAR_16 ;
 TYPE_4__* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int * VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 TYPE_5__* VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 TYPE_3__* VAR_29 ;
 TYPE_2__* VAR_30 ;
 scalar_t__* VAR_31 ;
 TYPE_1__* VAR_32 ;
 TYPE_7__* VAR_33 ;

void FUNC_8(sin_dbrush_t *VAR_34, entity_t *VAR_35)
{
 mapbrush_t *VAR_36;
 int VAR_37, VAR_38, VAR_39;
 side_t *VAR_40, *VAR_41;
 int VAR_42;
 sin_dbrushside_t *VAR_43;
 sin_dplane_t *VAR_44;

 if (VAR_27 >= VAR_9)
  FUNC_2 ("nummapbrushes >= MAX_MAPFILE_BRUSHES");

 VAR_36 = &VAR_24[VAR_27];
 VAR_36->original_sides = &VAR_17[VAR_28];
 VAR_36->entitynum = VAR_35-VAR_22;
 VAR_36->brushnum = VAR_27 - VAR_35->firstbrush;
 VAR_36->leafnum = VAR_21[VAR_34 - VAR_29];

 for (VAR_39 = 0; VAR_39 < VAR_34->numsides; VAR_39++)
 {

  VAR_43 = &VAR_30[VAR_34->firstside + VAR_39];

  if (VAR_28 >= VAR_10)
  {
   FUNC_2 ("MAX_MAPFILE_BRUSHSIDES");
  }

  VAR_40 = &VAR_17[VAR_28];

  if (VAR_31[VAR_34->firstside + VAR_39]) VAR_40->flags |= VAR_11;
  else VAR_40->flags &= ~VAR_11;

  VAR_40->contents = VAR_34->contents;

  if (VAR_43->texinfo < 0) VAR_40->surf = 0;
  else VAR_40->surf = VAR_33[VAR_43->texinfo].flags;


  if (VAR_40->surf & (VAR_14|VAR_15) )
   VAR_40->contents |= VAR_0;
  if (VAR_40->contents & (VAR_4|VAR_3) )
   VAR_40->contents |= VAR_0;
  if (VAR_23)
   VAR_40->contents &= ~VAR_0;
  if (!(VAR_40->contents & ((VAR_8-1)
   | VAR_4|VAR_3|VAR_2) ) )
   VAR_40->contents |= VAR_6;


  if (VAR_40->surf & (VAR_12|VAR_13) )
  {
   VAR_40->contents = 0;
   VAR_40->surf &= ~VAR_0;
  }


  VAR_44 = &VAR_32[VAR_43->planenum];
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







  VAR_28++;
  VAR_36->numsides++;
 }


 VAR_36->contents = VAR_34->contents;
 FUNC_7(VAR_36);

 if (FUNC_1(VAR_36))
 {
  VAR_19++;
  VAR_36->numsides = 0;
  return;
 }


 if (VAR_20)
 {

  FUNC_0(VAR_36, VAR_35, 0);
  return;
 }


 if (VAR_25 && (VAR_36->contents & VAR_0) )
 {
  VAR_36->numsides = 0;
  return;
 }


 if (VAR_26 && (VAR_36->contents & (VAR_1 | VAR_5 | VAR_7)) )
 {
  VAR_36->numsides = 0;
  return;
 }


 FUNC_5(VAR_36);


 FUNC_6(VAR_36);



 if (VAR_36->contents & (VAR_4|VAR_3) )
 {
   VAR_18++;
  for (VAR_37 = 0; VAR_37 < VAR_36->numsides; VAR_37++)
   VAR_36->original_sides[VAR_37].texinfo = VAR_16;
 }
 VAR_27++;
 VAR_35->numbrushes++;
}
