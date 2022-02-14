
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_28__ {TYPE_2__* headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_29__ {TYPE_4__* brushlist; int planenum; } ;
typedef TYPE_2__ node_t ;
struct TYPE_30__ {TYPE_4__* brushes; int numBrushes; int firstBrush; int firstDrawSurf; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_31__ {struct TYPE_31__* next; } ;
typedef TYPE_4__ brush_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_2__* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_3__*,TYPE_1__*) ;
 TYPE_4__* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int *,int *) ;
 int FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 () ;
 int VAR_0 ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 () ;
 int FUNC_21 (TYPE_3__*,TYPE_1__*) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_22( void ){
 entity_t *VAR_6;
 tree_t *VAR_7;
 brush_t *VAR_8, *VAR_9;
 node_t *VAR_10;



 FUNC_4();
 VAR_6 = &VAR_1[ VAR_2 ];
 VAR_6->firstDrawSurf = VAR_5;


 FUNC_6();


 FUNC_19( VAR_6 );


 VAR_10 = FUNC_2();
 VAR_10->planenum = VAR_0;
 VAR_7 = FUNC_3();
 VAR_7->headnode = VAR_10;


 FUNC_7( VAR_6, VAR_7 );


 FUNC_1( VAR_6 );


 FUNC_0( VAR_6 );


 FUNC_9( VAR_6->brushes, &VAR_6->firstBrush, &VAR_6->numBrushes );


 for ( VAR_8 = VAR_6->brushes; VAR_8; VAR_8 = VAR_8->next )
 {
  VAR_9 = FUNC_8( VAR_8 );
  VAR_9->next = VAR_10->brushlist;
  VAR_10->brushlist = VAR_9;
 }


 if ( !VAR_3 ) {
  FUNC_21( VAR_6, VAR_7 );
 }


 if ( !VAR_4 ) {
  FUNC_14( VAR_6 );
 }


 FUNC_5( VAR_6 );


 FUNC_16( VAR_6 );


 FUNC_17( VAR_6 );
 FUNC_20();
 FUNC_13();
 FUNC_18();


 FUNC_11( VAR_6, VAR_7 );


 FUNC_12( VAR_6 );


 FUNC_10( VAR_6, VAR_10 );
 FUNC_15( VAR_7 );
}
