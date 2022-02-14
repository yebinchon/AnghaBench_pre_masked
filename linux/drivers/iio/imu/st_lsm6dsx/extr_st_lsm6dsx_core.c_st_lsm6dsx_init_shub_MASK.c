
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct st_sensors_platform_data {scalar_t__ pullups; } ;
struct TYPE_8__ {int mask; scalar_t__ addr; } ;
struct TYPE_7__ {int mask; scalar_t__ addr; } ;
struct st_lsm6dsx_shub_settings {TYPE_4__ aux_sens; TYPE_3__ pullup_en; } ;
struct st_lsm6dsx_hw {int regmap; TYPE_2__* dev; TYPE_1__* settings; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ platform_data; struct device_node* of_node; } ;
struct TYPE_5__ {struct st_lsm6dsx_shub_settings shub_settings; } ;


 unsigned int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (int ,scalar_t__,int ,unsigned int) ;
 int FUNC_3 (struct st_lsm6dsx_hw*,int) ;

__attribute__((used)) static int FUNC_4(struct st_lsm6dsx_hw *VAR_0)
{
 const struct st_lsm6dsx_shub_settings *VAR_1;
 struct device_node *VAR_2 = VAR_0->dev->of_node;
 struct st_sensors_platform_data *VAR_3;
 unsigned int VAR_4;
 int VAR_5 = 0;

 VAR_1 = &VAR_0->settings->shub_settings;

 VAR_3 = (struct st_sensors_platform_data *)VAR_0->dev->platform_data;
 if ((VAR_2 && FUNC_1(VAR_2, "st,pullups")) ||
     (VAR_3 && VAR_3->pullups)) {
  VAR_5 = FUNC_3(VAR_0, 1);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_4 = FUNC_0(1, VAR_1->pullup_en.mask);
  VAR_5 = FUNC_2(VAR_0->regmap,
      VAR_1->pullup_en.addr,
      VAR_1->pullup_en.mask, VAR_4);

  FUNC_3(VAR_0, 0);

  if (VAR_5 < 0)
   return VAR_5;
 }

 if (VAR_1->aux_sens.addr) {

  VAR_5 = FUNC_3(VAR_0, 1);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_4 = FUNC_0(3, VAR_1->aux_sens.mask);
  VAR_5 = FUNC_2(VAR_0->regmap,
      VAR_1->aux_sens.addr,
      VAR_1->aux_sens.mask, VAR_4);

  FUNC_3(VAR_0, 0);
 }

 return VAR_5;
}
