
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct hw_ddc {int dummy; } ;
struct dc_context {int dummy; } ;
typedef enum gpio_id { ____Placeholder_gpio_id } gpio_id ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct hw_ddc*,int,scalar_t__,struct dc_context*) ;
 struct hw_ddc* FUNC_2 (int,int ) ;

void FUNC_3(
 struct hw_ddc **VAR_3,
 struct dc_context *VAR_4,
 enum gpio_id VAR_5,
 uint32_t VAR_6)
{
 if ((VAR_6 < VAR_2) || (VAR_6 > VAR_1)) {
  FUNC_0(0);
  *VAR_3 = ((void*)0);
 }

 *VAR_3 = FUNC_2(sizeof(struct hw_ddc), VAR_0);
 if (!*VAR_3) {
  FUNC_0(0);
  return;
 }

 FUNC_1(*VAR_3, VAR_5, VAR_6, VAR_4);
}
