
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float distance; int hit; int origin; int direction; int displacement; int end; } ;
typedef TYPE_1__ trace_t ;


 int FUNC_0 (int ,int ) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

float FUNC_3( trace_t *VAR_0 ){
 FUNC_2( VAR_0->end, VAR_0->origin, VAR_0->displacement );
 VAR_0->distance = FUNC_1( VAR_0->displacement, VAR_0->direction );
 FUNC_0( VAR_0->origin, VAR_0->hit );
 return VAR_0->distance;
}
