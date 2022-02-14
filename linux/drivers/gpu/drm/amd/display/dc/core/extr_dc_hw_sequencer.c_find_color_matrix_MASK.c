
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef enum dc_color_space_type { ____Placeholder_dc_color_space_type } dc_color_space_type ;
typedef enum dc_color_space { ____Placeholder_dc_color_space } dc_color_space ;
struct TYPE_3__ {int color_space_type; int * regval; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;

const uint16_t *FUNC_2(enum dc_color_space VAR_1,
       uint32_t *VAR_2)
{
 int VAR_3;
 enum dc_color_space_type VAR_4;
 const uint16_t *VAR_5 = ((void*)0);
 int VAR_6 = FUNC_0(VAR_0);

 VAR_4 = FUNC_1(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++)
  if (VAR_0[VAR_3].color_space_type == VAR_4) {
   VAR_5 = VAR_0[VAR_3].regval;
   *VAR_2 = 12;
   break;
  }

 return VAR_5;
}
