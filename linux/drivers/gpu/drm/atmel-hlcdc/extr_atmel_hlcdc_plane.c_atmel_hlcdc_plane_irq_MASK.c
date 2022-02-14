
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_6__ {struct atmel_hlcdc_layer_desc* desc; } ;
struct atmel_hlcdc_plane {TYPE_2__ base; TYPE_3__ layer; } ;
struct atmel_hlcdc_layer_desc {int name; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,char*,int ) ;

void FUNC_3(struct atmel_hlcdc_plane *VAR_1)
{
 const struct atmel_hlcdc_layer_desc *VAR_2 = VAR_1->layer.desc;
 u32 VAR_3;

 VAR_3 = FUNC_1(&VAR_1->layer, VAR_0);






 if (VAR_3 &
     (FUNC_0(0) | FUNC_0(1) |
      FUNC_0(2)))
  FUNC_2(VAR_1->base.dev->dev, "overrun on plane %s\n",
   VAR_2->name);
}
