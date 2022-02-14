
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * funcs; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct hw_ddc {TYPE_2__ base; } ;
struct dc_context {int dummy; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;


 int FUNC_0 (TYPE_2__*,int,int ,struct dc_context*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(
 struct hw_ddc *VAR_1,
 enum gpio_id VAR_2,
 uint32_t VAR_3,
 struct dc_context *VAR_4)
{
 FUNC_0(&VAR_1->base, VAR_2, VAR_3, VAR_4);
 VAR_1->base.base.funcs = &VAR_0;
}
