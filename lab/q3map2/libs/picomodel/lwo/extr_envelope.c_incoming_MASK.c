
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int shape; float value; float time; float* param; TYPE_1__* next; int bias; int continuity; int tension; } ;
typedef TYPE_2__ lwKey ;
struct TYPE_5__ {float time; float value; } ;
 float FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1( lwKey *VAR_0, lwKey *VAR_1 ){
 float VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 switch ( VAR_1->shape )
 {
 case 130:
  VAR_4 = VAR_1->value - VAR_0->value;
  if ( VAR_1->next ) {
   VAR_5 = ( VAR_1->time - VAR_0->time ) / ( VAR_1->next->time - VAR_0->time );
   VAR_6 = VAR_5 * ( VAR_1->next->value - VAR_1->value + VAR_4 );
  }
  else{
   VAR_6 = VAR_4;
  }
  break;

 case 128:
  VAR_2 = ( 1.0f - VAR_1->tension )
   * ( 1.0f - VAR_1->continuity )
   * ( 1.0f + VAR_1->bias );
  VAR_3 = ( 1.0f - VAR_1->tension )
   * ( 1.0f + VAR_1->continuity )
   * ( 1.0f - VAR_1->bias );
  VAR_4 = VAR_1->value - VAR_0->value;

  if ( VAR_1->next ) {
   VAR_5 = ( VAR_1->time - VAR_0->time ) / ( VAR_1->next->time - VAR_0->time );
   VAR_6 = VAR_5 * ( VAR_3 * ( VAR_1->next->value - VAR_1->value ) + VAR_2 * VAR_4 );
  }
  else{
   VAR_6 = VAR_2 * VAR_4;
  }
  break;

 case 132:
 case 131:
  VAR_6 = VAR_1->param[ 0 ];
  if ( VAR_1->next ) {
   VAR_6 *= ( VAR_1->time - VAR_0->time ) / ( VAR_1->next->time - VAR_0->time );
  }
  break;
  return VAR_6;

 case 133:
  VAR_6 = VAR_1->param[ 1 ] * ( VAR_1->time - VAR_0->time );
  if ( FUNC_0( VAR_1->param[ 0 ] ) > 1e-5f ) {
   VAR_6 /= VAR_1->param[ 0 ];
  }
  else{
   VAR_6 *= 1e5f;
  }
  break;

 case 129:
 default:
  VAR_6 = 0.0f;
  break;
 }

 return VAR_6;
}
