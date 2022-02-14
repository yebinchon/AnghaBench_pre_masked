
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int headnode; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_12__ {TYPE_4__* brushes; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_13__ {int numsides; TYPE_1__* sides; scalar_t__ detail; struct TYPE_13__* next; } ;
typedef TYPE_4__ brush_t ;
struct TYPE_10__ {int visible; scalar_t__ winding; } ;


 TYPE_4__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_3( entity_t *VAR_2, tree_t *VAR_3 ) {
 brush_t *VAR_4, *VAR_5;
 int VAR_6;
 int VAR_7, VAR_8;
 int VAR_9;

 FUNC_2( VAR_0, "--- FilterStructuralBrushesIntoTree ---\n" );

 VAR_7 = 0;
 VAR_8 = 0;
 for ( VAR_4 = VAR_2->brushes ; VAR_4 ; VAR_4 = VAR_4->next ) {
  if ( VAR_4->detail ) {
   continue;
  }
  VAR_7++;
  VAR_5 = FUNC_0( VAR_4 );
  VAR_6 = FUNC_1( VAR_5, VAR_3->headnode );
  VAR_8 += VAR_6;


  if ( VAR_6 ) {
   for ( VAR_9 = 0 ; VAR_9 < VAR_4->numsides ; VAR_9++ ) {
    if ( VAR_4->sides[VAR_9].winding ) {
     VAR_4->sides[VAR_9].visible = VAR_1;
    }
   }
  }
 }


 FUNC_2( VAR_0, "%9d structural brushes\n", VAR_7 );
 FUNC_2( VAR_0, "%9d cluster references\n", VAR_8 );
}
