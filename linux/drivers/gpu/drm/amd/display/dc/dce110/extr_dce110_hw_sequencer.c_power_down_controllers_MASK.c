
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dc {TYPE_2__* res_pool; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {int timing_generator_count; TYPE_3__** timing_generators; } ;
struct TYPE_4__ {int (* disable_crtc ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct dc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->res_pool->timing_generator_count; VAR_1++) {
  VAR_0->res_pool->timing_generators[VAR_1]->funcs->disable_crtc(
    VAR_0->res_pool->timing_generators[VAR_1]);
 }
}
