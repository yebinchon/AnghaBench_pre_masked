
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {float value; float time; int shape; struct TYPE_10__* next; struct TYPE_10__* prev; } ;
typedef TYPE_1__ lwKey ;
struct TYPE_11__ {int nkeys; int* behavior; TYPE_1__* key; } ;
typedef TYPE_2__ lwEnvelope ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,float) ;
 int FUNC_1 (float,float*,float*,float*,float*) ;
 float FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 float FUNC_3 (TYPE_1__*,TYPE_1__*) ;
 float FUNC_4 (float,float,float,int*) ;

float FUNC_5( lwEnvelope *VAR_0, float VAR_1 ){
 lwKey *VAR_2, *VAR_3, *VAR_4, *VAR_5;
 float VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0.0f;
 int VAR_14;




 if ( VAR_0->nkeys == 0 ) {
  return 0.0f;
 }



 if ( VAR_0->nkeys == 1 ) {
  return VAR_0->key->value;
 }



 VAR_4 = VAR_5 = VAR_0->key;
 while ( VAR_5->next ) VAR_5 = VAR_5->next;



 if ( VAR_1 < VAR_4->time ) {
  switch ( VAR_0->behavior[ 0 ] )
  {
  case 134:
   return 0.0f;

  case 139:
   return VAR_4->value;

  case 135:
   VAR_1 = FUNC_4( VAR_1, VAR_4->time, VAR_5->time, ((void*)0) );
   break;

  case 136:
   VAR_1 = FUNC_4( VAR_1, VAR_4->time, VAR_5->time, &VAR_14 );
   if ( VAR_14 % 2 ) {
    VAR_1 = VAR_5->time - VAR_4->time - VAR_1;
   }
   break;

  case 137:
   VAR_1 = FUNC_4( VAR_1, VAR_4->time, VAR_5->time, &VAR_14 );
   VAR_13 = VAR_14 * ( VAR_5->value - VAR_4->value );
   break;

  case 138:
   VAR_12 = FUNC_3( VAR_4, VAR_4->next )
      / ( VAR_4->next->time - VAR_4->time );
   return VAR_12 * ( VAR_1 - VAR_4->time ) + VAR_4->value;
  }
 }



 else if ( VAR_1 > VAR_5->time ) {
  switch ( VAR_0->behavior[ 1 ] )
  {
  case 134:
   return 0.0f;

  case 139:
   return VAR_5->value;

  case 135:
   VAR_1 = FUNC_4( VAR_1, VAR_4->time, VAR_5->time, ((void*)0) );
   break;

  case 136:
   VAR_1 = FUNC_4( VAR_1, VAR_4->time, VAR_5->time, &VAR_14 );
   if ( VAR_14 % 2 ) {
    VAR_1 = VAR_5->time - VAR_4->time - VAR_1;
   }
   break;

  case 137:
   VAR_1 = FUNC_4( VAR_1, VAR_4->time, VAR_5->time, &VAR_14 );
   VAR_13 = VAR_14 * ( VAR_5->value - VAR_4->value );
   break;

  case 138:
   VAR_11 = FUNC_2( VAR_5->prev, VAR_5 )
     / ( VAR_5->time - VAR_5->prev->time );
   return VAR_11 * ( VAR_1 - VAR_5->time ) + VAR_5->value;
  }
 }



 VAR_2 = VAR_0->key;
 while ( VAR_1 > VAR_2->next->time )
  VAR_2 = VAR_2->next;
 VAR_3 = VAR_2->next;



 if ( VAR_1 == VAR_2->time ) {
  return VAR_2->value + VAR_13;
 }
 else if ( VAR_1 == VAR_3->time ) {
  return VAR_3->value + VAR_13;
 }



 VAR_6 = ( VAR_1 - VAR_2->time ) / ( VAR_3->time - VAR_2->time );



 switch ( VAR_3->shape )
 {
 case 128:
 case 132:
 case 131:
  VAR_12 = FUNC_3( VAR_2, VAR_3 );
  VAR_11 = FUNC_2( VAR_2, VAR_3 );
  FUNC_1( VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10 );
  return VAR_7 * VAR_2->value + VAR_8 * VAR_3->value + VAR_9 * VAR_12 + VAR_10 * VAR_11 + VAR_13;

 case 133:
  return FUNC_0( VAR_2, VAR_3, VAR_1 ) + VAR_13;

 case 130:
  return VAR_2->value + VAR_6 * ( VAR_3->value - VAR_2->value ) + VAR_13;

 case 129:
  return VAR_2->value + VAR_13;

 default:
  return VAR_13;
 }
}
