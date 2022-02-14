
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int shape; float value; float time; float* param; TYPE_1__* prev; int bias; int continuity; int tension; } ;
typedef TYPE_2__ lwKey ;
struct TYPE_5__ {float time; float value; } ;
 float FUNC_0 (float) ;

__attribute__((used)) static float FUNC_1( lwKey *VAR_0, lwKey *VAR_1 ){
 float VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 switch ( VAR_0->shape )
 {
 case 128:
  VAR_2 = ( 1.0f - VAR_0->tension )
   * ( 1.0f + VAR_0->continuity )
   * ( 1.0f + VAR_0->bias );
  VAR_3 = ( 1.0f - VAR_0->tension )
   * ( 1.0f - VAR_0->continuity )
   * ( 1.0f - VAR_0->bias );
  VAR_4 = VAR_1->value - VAR_0->value;

  if ( VAR_0->prev ) {
   VAR_5 = ( VAR_1->time - VAR_0->time ) / ( VAR_1->time - VAR_0->prev->time );
   VAR_6 = VAR_5 * ( VAR_2 * ( VAR_0->value - VAR_0->prev->value ) + VAR_3 * VAR_4 );
  }
  else{
   VAR_6 = VAR_3 * VAR_4;
  }
  break;

 case 130:
  VAR_4 = VAR_1->value - VAR_0->value;
  if ( VAR_0->prev ) {
   VAR_5 = ( VAR_1->time - VAR_0->time ) / ( VAR_1->time - VAR_0->prev->time );
   VAR_6 = VAR_5 * ( VAR_0->value - VAR_0->prev->value + VAR_4 );
  }
  else{
   VAR_6 = VAR_4;
  }
  break;

 case 132:
 case 131:
  VAR_6 = VAR_0->param[ 1 ];
  if ( VAR_0->prev ) {
   VAR_6 *= ( VAR_1->time - VAR_0->time ) / ( VAR_1->time - VAR_0->prev->time );
  }
  break;

 case 133:
  VAR_6 = VAR_0->param[ 3 ] * ( VAR_1->time - VAR_0->time );
  if ( FUNC_0( VAR_0->param[ 2 ] ) > 1e-5f ) {
   VAR_6 /= VAR_0->param[ 2 ];
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
