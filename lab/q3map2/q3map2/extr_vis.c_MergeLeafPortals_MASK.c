
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int normal; } ;
struct TYPE_7__ {scalar_t__ leaf; scalar_t__ removed; int hint; int * winding; TYPE_1__ plane; } ;
typedef TYPE_2__ vportal_t ;
struct TYPE_8__ {scalar_t__ merged; int numportals; TYPE_2__** portals; } ;
typedef TYPE_3__ leaf_t ;
typedef int fixedWinding_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,int) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_4( void ){
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 leaf_t *VAR_8;
 vportal_t *VAR_9, *VAR_10;
 fixedWinding_t *VAR_11;

 VAR_6 = 0;
 VAR_7 = 0;
 for ( VAR_3 = 0; VAR_3 < VAR_1; VAR_3++ )
 {
  VAR_8 = &VAR_0[VAR_3];
  if ( VAR_8->merged >= 0 ) {
   continue;
  }
  for ( VAR_4 = 0; VAR_4 < VAR_8->numportals; VAR_4++ )
  {
   VAR_9 = VAR_8->portals[VAR_4];
   if ( VAR_9->removed ) {
    continue;
   }
   for ( VAR_5 = VAR_4 + 1; VAR_5 < VAR_8->numportals; VAR_5++ )
   {
    VAR_10 = VAR_8->portals[VAR_5];
    if ( VAR_10->removed ) {
     continue;
    }
    if ( VAR_9->leaf == VAR_10->leaf ) {
     VAR_11 = FUNC_2( VAR_9->winding, VAR_10->winding, VAR_9->plane.normal );
     if ( VAR_11 ) {
      FUNC_3( VAR_9->winding );
      VAR_9->winding = VAR_11;
      if ( VAR_9->hint && VAR_10->hint ) {
       VAR_7++;
      }
      VAR_9->hint |= VAR_10->hint;
      FUNC_0( VAR_9 );
      VAR_10->removed = VAR_2;
      VAR_6++;
      VAR_3--;
      break;
     }
    }
   }
   if ( VAR_5 < VAR_8->numportals ) {
    break;
   }
  }
 }
 FUNC_1( "%6d portals merged\n", VAR_6 );
 FUNC_1( "%6d hint portals merged\n", VAR_7 );
}
