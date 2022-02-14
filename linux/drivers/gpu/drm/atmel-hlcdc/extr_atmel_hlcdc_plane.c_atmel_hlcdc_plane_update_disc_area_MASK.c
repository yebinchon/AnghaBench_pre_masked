
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct atmel_hlcdc_plane_state {int disc_h; int disc_w; int disc_y; int disc_x; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct atmel_hlcdc_plane {TYPE_2__ layer; } ;
struct atmel_hlcdc_layer_cfg_layout {int disc_size; int disc_pos; } ;
struct TYPE_3__ {struct atmel_hlcdc_layer_cfg_layout layout; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct atmel_hlcdc_plane *VAR_0,
       struct atmel_hlcdc_plane_state *VAR_1)
{
 const struct atmel_hlcdc_layer_cfg_layout *VAR_2;

 VAR_2 = &VAR_0->layer.desc->layout;
 if (!VAR_2->disc_pos || !VAR_2->disc_size)
  return;

 FUNC_2(&VAR_0->layer, VAR_2->disc_pos,
    FUNC_0(VAR_1->disc_x,
          VAR_1->disc_y));

 FUNC_2(&VAR_0->layer, VAR_2->disc_size,
    FUNC_1(VAR_1->disc_w,
           VAR_1->disc_h));
}
