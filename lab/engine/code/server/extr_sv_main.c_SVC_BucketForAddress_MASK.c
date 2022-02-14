
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int type; int ip6; int ip; } ;
typedef TYPE_2__ netadr_t ;
struct TYPE_10__ {int _6; int _4; } ;
struct TYPE_12__ {int type; int lastTime; size_t hash; struct TYPE_12__* prev; struct TYPE_12__* next; scalar_t__ burst; TYPE_1__ ipv; } ;
typedef TYPE_3__ leakyBucket_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;


 long FUNC_2 (TYPE_2__) ;
 int FUNC_3 () ;
 TYPE_3__** VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static leakyBucket_t *FUNC_5( netadr_t VAR_4, int VAR_5, int VAR_6 ) {
 leakyBucket_t *VAR_7 = ((void*)0);
 int VAR_8;
 long VAR_9 = FUNC_2( VAR_4 );
 int VAR_10 = FUNC_3();

 for ( VAR_7 = VAR_2[ VAR_9 ]; VAR_7; VAR_7 = VAR_7->next ) {
  switch ( VAR_7->type ) {
   case 129:
    if ( FUNC_4( VAR_7->ipv._4, VAR_4.ip, 4 ) == 0 ) {
     return VAR_7;
    }
    break;

   case 128:
    if ( FUNC_4( VAR_7->ipv._6, VAR_4.ip6, 16 ) == 0 ) {
     return VAR_7;
    }
    break;

   default:
    break;
  }
 }

 for ( VAR_8 = 0; VAR_8 < VAR_0; VAR_8++ ) {
  int VAR_11;

  VAR_7 = &VAR_3[ VAR_8 ];
  VAR_11 = VAR_10 - VAR_7->lastTime;


  if ( VAR_7->lastTime > 0 && ( VAR_11 > ( VAR_5 * VAR_6 ) ||
     VAR_11 < 0 ) ) {
   if ( VAR_7->prev != ((void*)0) ) {
    VAR_7->prev->next = VAR_7->next;
   } else {
    VAR_2[ VAR_7->hash ] = VAR_7->next;
   }

   if ( VAR_7->next != ((void*)0) ) {
    VAR_7->next->prev = VAR_7->prev;
   }

   FUNC_1( VAR_7, 0, sizeof( leakyBucket_t ) );
  }

  if ( VAR_7->type == VAR_1 ) {
   VAR_7->type = VAR_4.type;
   switch ( VAR_4.type ) {
    case 129: FUNC_0( VAR_7->ipv._4, VAR_4.ip, 4 ); break;
    case 128: FUNC_0( VAR_7->ipv._6, VAR_4.ip6, 16 ); break;
    default: break;
   }

   VAR_7->lastTime = VAR_10;
   VAR_7->burst = 0;
   VAR_7->hash = VAR_9;


   VAR_7->next = VAR_2[ VAR_9 ];
   if ( VAR_2[ VAR_9 ] != ((void*)0) ) {
    VAR_2[ VAR_9 ]->prev = VAR_7;
   }

   VAR_7->prev = ((void*)0);
   VAR_2[ VAR_9 ] = VAR_7;

   return VAR_7;
  }
 }


 return ((void*)0);
}
