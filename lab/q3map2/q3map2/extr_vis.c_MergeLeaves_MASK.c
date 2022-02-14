
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int leaf; scalar_t__ hint; scalar_t__ removed; } ;
typedef TYPE_1__ vportal_t ;
struct TYPE_5__ {scalar_t__ merged; int numportals; TYPE_1__** portals; } ;
typedef TYPE_2__ leaf_t ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3( void ){
 int VAR_4, VAR_5, VAR_6, VAR_7;
 leaf_t *VAR_8;
 vportal_t *VAR_9;

 VAR_7 = 0;
 do
 {
  VAR_6 = 0;
  for ( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
  {
   VAR_8 = &VAR_1[VAR_4];



   if ( VAR_8->merged >= 0 && VAR_0 == VAR_3 ) {
    continue;
   }


   for ( VAR_5 = 0; VAR_5 < VAR_8->numportals; VAR_5++ )
   {
    VAR_9 = VAR_8->portals[VAR_5];

    if ( VAR_9->removed ) {
     continue;
    }

    if ( VAR_9->hint ) {
     continue;
    }
    if ( FUNC_1( VAR_4, VAR_9->leaf ) ) {
     FUNC_2();
     VAR_6++;
     break;
    }
   }
  }
  VAR_7 += VAR_6;
 } while ( VAR_6 );
 FUNC_0( "%6d leaves merged\n", VAR_7 );
}
