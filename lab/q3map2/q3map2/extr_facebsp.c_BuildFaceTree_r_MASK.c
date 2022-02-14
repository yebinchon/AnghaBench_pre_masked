
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_13__ {int* normal; int dist; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_14__ {int planenum; int compileFlags; struct TYPE_14__** children; int * maxs; int * mins; struct TYPE_14__* parent; } ;
typedef TYPE_2__ node_t ;
struct TYPE_15__ {int planenum; struct TYPE_15__* next; int compileFlags; int priority; int * w; } ;
typedef TYPE_3__ face_t ;


 TYPE_3__* FUNC_0 () ;
 TYPE_2__* FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,int*,int ,int,int **,int **) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int*,int*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int*,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

void FUNC_8( node_t *VAR_7, face_t *VAR_8 ){
 face_t *VAR_9;
 face_t *VAR_10;
 int VAR_11;
 plane_t *VAR_12;
 face_t *VAR_13;
 face_t *VAR_14[2];
 winding_t *VAR_15, *VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;



 VAR_17 = FUNC_3( VAR_8 );


 FUNC_5( VAR_7, VAR_8, &VAR_18, &VAR_19 );


 if ( VAR_18 == -1 ) {
  VAR_7->planenum = VAR_1;
  VAR_5++;
  return;
 }


 VAR_7->planenum = VAR_18;
 VAR_7->compileFlags = VAR_19;
 VAR_12 = &VAR_6[ VAR_18 ];
 VAR_14[0] = ((void*)0);
 VAR_14[1] = ((void*)0);
 for ( VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_10 )
 {

  VAR_10 = VAR_9->next;


  if ( VAR_9->planenum == VAR_7->planenum ) {
   FUNC_4( VAR_9 );
   continue;
  }


  VAR_11 = FUNC_7( VAR_9->w, VAR_12->normal, VAR_12->dist );


  if ( VAR_11 == VAR_3 ) {
   FUNC_2( VAR_9->w, VAR_12->normal, VAR_12->dist, VAR_0 * 2,
        &VAR_15, &VAR_16 );
   if ( VAR_15 ) {
    VAR_13 = FUNC_0();
    VAR_13->w = VAR_15;
    VAR_13->next = VAR_14[0];
    VAR_13->planenum = VAR_9->planenum;
    VAR_13->priority = VAR_9->priority;
    VAR_13->compileFlags = VAR_9->compileFlags;
    VAR_14[0] = VAR_13;
   }
   if ( VAR_16 ) {
    VAR_13 = FUNC_0();
    VAR_13->w = VAR_16;
    VAR_13->next = VAR_14[1];
    VAR_13->planenum = VAR_9->planenum;
    VAR_13->priority = VAR_9->priority;
    VAR_13->compileFlags = VAR_9->compileFlags;
    VAR_14[1] = VAR_13;
   }
   FUNC_4( VAR_9 );
  }
  else if ( VAR_11 == VAR_4 ) {
   VAR_9->next = VAR_14[0];
   VAR_14[0] = VAR_9;
  }
  else if ( VAR_11 == VAR_2 ) {
   VAR_9->next = VAR_14[1];
   VAR_14[1] = VAR_9;
  }
 }



 for ( VAR_17 = 0 ; VAR_17 < 2 ; VAR_17++ ) {
  VAR_7->children[VAR_17] = FUNC_1();
  VAR_7->children[VAR_17]->parent = VAR_7;
  FUNC_6( VAR_7->mins, VAR_7->children[VAR_17]->mins );
  FUNC_6( VAR_7->maxs, VAR_7->children[VAR_17]->maxs );
 }

 for ( VAR_17 = 0 ; VAR_17 < 3 ; VAR_17++ ) {
  if ( VAR_12->normal[VAR_17] == 1 ) {
   VAR_7->children[0]->mins[VAR_17] = VAR_12->dist;
   VAR_7->children[1]->maxs[VAR_17] = VAR_12->dist;
   break;
  }
 }

 for ( VAR_17 = 0 ; VAR_17 < 2 ; VAR_17++ ) {
  FUNC_8( VAR_7->children[VAR_17], VAR_14[VAR_17] );
 }
}
