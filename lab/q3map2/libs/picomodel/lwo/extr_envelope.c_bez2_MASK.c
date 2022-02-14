
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ shape; float time; float* param; float value; } ;
typedef TYPE_1__ lwKey ;


 scalar_t__ VAR_0 ;
 float FUNC_0 (float,float,float,float,float,float*,float*) ;
 float FUNC_1 (float,float,float,float,float) ;

__attribute__((used)) static float FUNC_2( lwKey *VAR_1, lwKey *VAR_2, float VAR_3 ){
 float VAR_4, VAR_5, VAR_6, VAR_7 = 0.0f, VAR_8 = 1.0f;

 if ( VAR_1->shape == VAR_0 ) {
  VAR_4 = VAR_1->time + VAR_1->param[ 2 ];
 }
 else{
  VAR_4 = VAR_1->time + ( VAR_2->time - VAR_1->time ) / 3.0f;
 }

 VAR_6 = FUNC_0( VAR_1->time, VAR_4, VAR_2->time + VAR_2->param[ 0 ], VAR_2->time,
       VAR_3, &VAR_7, &VAR_8 );

 if ( VAR_1->shape == VAR_0 ) {
  VAR_5 = VAR_1->value + VAR_1->param[ 3 ];
 }
 else{
  VAR_5 = VAR_1->value + VAR_1->param[ 1 ] / 3.0f;
 }

 return FUNC_1( VAR_1->value, VAR_5, VAR_2->param[ 1 ] + VAR_2->value, VAR_2->value, VAR_6 );
}
