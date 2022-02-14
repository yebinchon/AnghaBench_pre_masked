
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {float intercept; struct TYPE_6__* prev; struct TYPE_6__* next; int xyz; } ;
typedef TYPE_1__ edgePoint_t ;
struct TYPE_7__ {TYPE_1__ chain; int dir; int origin; } ;
typedef TYPE_2__ edgeLine_t ;


 float FUNC_0 (int ,int ) ;
 float VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

void FUNC_5( vec3_t VAR_1, edgeLine_t *VAR_2 ) {
 vec3_t VAR_3;
 float VAR_4;
 edgePoint_t *VAR_5, *VAR_6;

 FUNC_2( VAR_1, VAR_2->origin, VAR_3 );
 VAR_4 = FUNC_0( VAR_3, VAR_2->dir );

 VAR_5 = FUNC_4( sizeof( edgePoint_t ) );
 VAR_5->intercept = VAR_4;
 FUNC_1( VAR_1, VAR_5->xyz );

 if ( VAR_2->chain.next == &VAR_2->chain ) {
  VAR_2->chain.next = VAR_2->chain.prev = VAR_5;
  VAR_5->next = VAR_5->prev = &VAR_2->chain;
  return;
 }

 VAR_6 = VAR_2->chain.next;
 for ( ; VAR_6 != &VAR_2->chain ; VAR_6 = VAR_6->next ) {
  VAR_4 = VAR_5->intercept - VAR_6->intercept;
  if ( VAR_4 > -VAR_0 && VAR_4 < VAR_0 ) {
   FUNC_3( VAR_5 );
   return;
  }

  if ( VAR_5->intercept < VAR_6->intercept ) {

   VAR_5->prev = VAR_6->prev;
   VAR_5->next = VAR_6;
   VAR_6->prev->next = VAR_5;
   VAR_6->prev = VAR_5;
   return;
  }
 }


 VAR_5->prev = VAR_6->prev;
 VAR_5->next = VAR_6;
 VAR_6->prev->next = VAR_5;
 VAR_6->prev = VAR_5;
}
