
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ mux; scalar_t__ en; scalar_t__ a; scalar_t__ mask; } ;
struct TYPE_4__ {int id; int opened; int mode; int en; struct dc_context* ctx; } ;
struct hw_gpio {int mux_supported; TYPE_1__ store; TYPE_2__ base; } ;
struct dc_context {int dummy; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;


 int VAR_0 ;

void FUNC_0(
 struct hw_gpio *VAR_1,
 enum gpio_id VAR_2,
 uint32_t VAR_3,
 struct dc_context *VAR_4)
{
 VAR_1->base.ctx = VAR_4;
 VAR_1->base.id = VAR_2;
 VAR_1->base.en = VAR_3;
 VAR_1->base.mode = VAR_0;
 VAR_1->base.opened = 0;

 VAR_1->store.mask = 0;
 VAR_1->store.a = 0;
 VAR_1->store.en = 0;
 VAR_1->store.mux = 0;

 VAR_1->mux_supported = 0;
}
