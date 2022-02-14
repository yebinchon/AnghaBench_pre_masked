
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float value; float time; int shape; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ lwKey ;
struct TYPE_6__ {int index; int type; int* name; int nkeys; void** behavior; TYPE_1__* key; } ;
typedef TYPE_2__ lwEnvelope ;


 void* VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (void**,TYPE_2__*) ;
 int FUNC_3 (int*,char*) ;

__attribute__((used)) static int FUNC_4( float VAR_2[], float VAR_3[], lwEnvelope **VAR_4, int *VAR_5 ){
 lwEnvelope *VAR_6;
 lwKey *VAR_7, *VAR_8;
 int VAR_9;

 for ( VAR_9 = 0; VAR_9 < 3; VAR_9++ ) {
  VAR_6 = FUNC_1( 1, sizeof( lwEnvelope ) );
  VAR_7 = FUNC_1( 1, sizeof( lwKey ) );
  VAR_8 = FUNC_1( 1, sizeof( lwKey ) );
  if ( !VAR_6 || !VAR_7 || !VAR_8 ) {
   return 0;
  }

  VAR_7->next = VAR_8;
  VAR_7->value = VAR_2[ VAR_9 ];
  VAR_7->time = 0.0f;
  VAR_8->prev = VAR_7;
  VAR_8->value = VAR_2[ VAR_9 ] + VAR_3[ VAR_9 ] * 30.0f;
  VAR_8->time = 1.0f;
  VAR_7->shape = VAR_8->shape = VAR_1;

  VAR_6->index = *VAR_5 + VAR_9 + 1;
  VAR_6->type = 0x0301 + VAR_9;
  VAR_6->name = FUNC_0( 11 );
  if ( VAR_6->name ) {
   FUNC_3( VAR_6->name, "Position.X" );
   VAR_6->name[ 9 ] += VAR_9;
  }
  VAR_6->key = VAR_7;
  VAR_6->nkeys = 2;
  VAR_6->behavior[ 0 ] = VAR_0;
  VAR_6->behavior[ 1 ] = VAR_0;

  FUNC_2( (void **) VAR_4, VAR_6 );
 }

 *VAR_5 += 3;
 return VAR_6->index - 2;
}
