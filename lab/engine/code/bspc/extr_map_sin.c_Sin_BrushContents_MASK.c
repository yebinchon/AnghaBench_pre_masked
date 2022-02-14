
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int contents; size_t texinfo; } ;
typedef TYPE_1__ side_t ;
struct TYPE_7__ {int numsides; int entitynum; int brushnum; TYPE_1__* original_sides; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_9__ {int translucence; } ;
struct TYPE_8__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,int) ;
 TYPE_4__* VAR_8 ;
 TYPE_3__* VAR_9 ;

int FUNC_1(mapbrush_t *VAR_10)
{
 int VAR_11;
 side_t *VAR_12;
 int VAR_13;



 int VAR_14;


 VAR_12 = &VAR_10->original_sides[0];
 VAR_11 = VAR_12->contents;




 VAR_14 = VAR_9[VAR_12->texinfo].flags;

 for (VAR_13=1 ; VAR_13<VAR_10->numsides ; VAR_13++, VAR_12++)
 {
  VAR_12 = &VAR_10->original_sides[VAR_13];



  VAR_14 |= VAR_9[VAR_12->texinfo].flags;

  if (VAR_12->contents != VAR_11)
  {
   FUNC_0 ("Entity %i, Brush %i: mixed face contents\n"
    , VAR_10->entitynum, VAR_10->brushnum);
   break;
  }
 }
 if ( VAR_14 & (VAR_6|VAR_7) )

 {
  VAR_11 |= VAR_3;
  if (VAR_11 & VAR_4)
  {
   VAR_11 &= ~VAR_4;
   VAR_11 |= VAR_5;
  }
 }

 return VAR_11;
}
