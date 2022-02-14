
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int count; int * tag; } ;
typedef TYPE_2__ lwTagList ;
struct TYPE_14__ {int name; struct TYPE_14__* next; } ;
typedef TYPE_3__ lwSurface ;
struct TYPE_15__ {int count; TYPE_1__* pol; } ;
typedef TYPE_4__ lwPolygonList ;
struct TYPE_12__ {TYPE_3__* surf; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_3__** FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__**) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (void**,TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8( lwPolygonList *VAR_0, lwTagList *VAR_1,
         lwSurface **VAR_2, int *VAR_3 ){
 lwSurface **VAR_4, *VAR_5;
 int VAR_6, VAR_7;

 if ( VAR_1->count == 0 ) {
  return 1;
 }

 VAR_4 = FUNC_1( VAR_1->count, sizeof( lwSurface * ) );
 if ( !VAR_4 ) {
  return 0;
 }

 for ( VAR_6 = 0; VAR_6 < VAR_1->count; VAR_6++ ) {
  VAR_5 = *VAR_2;
  while ( VAR_5 ) {
   if ( !FUNC_5( VAR_5->name, VAR_1->tag[ VAR_6 ] ) ) {
    VAR_4[ VAR_6 ] = VAR_5;
    break;
   }
   VAR_5 = VAR_5->next;
  }
 }

 for ( VAR_6 = 0; VAR_6 < VAR_0->count; VAR_6++ ) {
  VAR_7 = ( int ) ( (size_t)VAR_0->pol[ VAR_6 ].surf );
  if ( VAR_7 < 0 || VAR_7 > VAR_1->count ) {
   return 0;
  }
  if ( !VAR_4[ VAR_7 ] ) {
   VAR_4[ VAR_7 ] = FUNC_3();
   if ( !VAR_4[ VAR_7 ] ) {
    return 0;
   }
   VAR_4[ VAR_7 ]->name = FUNC_0( FUNC_7( VAR_1->tag[ VAR_7 ] ) + 1 );
   if ( !VAR_4[ VAR_7 ]->name ) {
    return 0;
   }
   FUNC_6( VAR_4[ VAR_7 ]->name, VAR_1->tag[ VAR_7 ] );
   FUNC_4( (void **) VAR_2, VAR_4[ VAR_7 ] );
   *VAR_3 = *VAR_3 + 1;
  }
  VAR_0->pol[ VAR_6 ].surf = VAR_4[ VAR_7 ];
 }

 FUNC_2( VAR_4 );
 return 1;
}
