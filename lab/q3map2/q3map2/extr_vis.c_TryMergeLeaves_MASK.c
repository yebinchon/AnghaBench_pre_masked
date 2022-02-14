
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int dist; int normal; } ;
struct TYPE_6__ {int leaf; int removed; int winding; TYPE_2__ plane; } ;
typedef TYPE_1__ vportal_t ;
typedef TYPE_2__ visPlane_t ;
struct TYPE_8__ {int numportals; int merged; TYPE_1__** portals; } ;
typedef TYPE_3__ leaf_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 TYPE_3__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_1( int VAR_5, int VAR_6 ){
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 visPlane_t VAR_12, VAR_13;
 leaf_t *VAR_14, *VAR_15;
 vportal_t *VAR_16, *VAR_17;
 vportal_t *VAR_18[VAR_0];

 for ( VAR_9 = 0; VAR_9 < 2; VAR_9++ )
 {
  if ( VAR_9 ) {
   VAR_14 = &VAR_2[VAR_5];
  }
  else{VAR_14 = &VAR_1[VAR_5]; }
  for ( VAR_7 = 0; VAR_7 < VAR_14->numportals; VAR_7++ )
  {
   VAR_16 = VAR_14->portals[VAR_7];
   if ( VAR_16->leaf == VAR_6 ) {
    continue;
   }
   for ( VAR_10 = 0; VAR_10 < 2; VAR_10++ )
   {
    if ( VAR_10 ) {
     VAR_15 = &VAR_2[VAR_6];
    }
    else{VAR_15 = &VAR_1[VAR_6]; }
    for ( VAR_8 = 0; VAR_8 < VAR_15->numportals; VAR_8++ )
    {
     VAR_17 = VAR_15->portals[VAR_8];
     if ( VAR_17->leaf == VAR_5 ) {
      continue;
     }

     VAR_12 = VAR_16->plane;
     VAR_13 = VAR_17->plane;
     if ( FUNC_0( VAR_16->winding, VAR_17->winding, VAR_12, VAR_13, VAR_12, VAR_13 ) ) {
      return VAR_3;
     }
    }
   }
  }
 }
 for ( VAR_9 = 0; VAR_9 < 2; VAR_9++ )
 {
  if ( VAR_9 ) {
   VAR_14 = &VAR_2[VAR_5];
   VAR_15 = &VAR_2[VAR_6];
  }
  else
  {
   VAR_14 = &VAR_1[VAR_5];
   VAR_15 = &VAR_1[VAR_6];
  }
  VAR_11 = 0;

  for ( VAR_7 = 0; VAR_7 < VAR_14->numportals; VAR_7++ )
  {
   VAR_16 = VAR_14->portals[VAR_7];
   if ( VAR_16->leaf == VAR_6 ) {
    VAR_16->removed = VAR_4;
    continue;
   }
   VAR_18[VAR_11++] = VAR_16;
  }
  for ( VAR_8 = 0; VAR_8 < VAR_15->numportals; VAR_8++ )
  {
   VAR_17 = VAR_15->portals[VAR_8];
   if ( VAR_17->leaf == VAR_5 ) {
    VAR_17->removed = VAR_4;
    continue;
   }
   VAR_18[VAR_11++] = VAR_17;
  }
  for ( VAR_7 = 0; VAR_7 < VAR_11; VAR_7++ )
  {
   VAR_15->portals[VAR_7] = VAR_18[VAR_7];
  }
  VAR_15->numportals = VAR_11;
  VAR_14->merged = VAR_6;
 }
 return VAR_4;
}
