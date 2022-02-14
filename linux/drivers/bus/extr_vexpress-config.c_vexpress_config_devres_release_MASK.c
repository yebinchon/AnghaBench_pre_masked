
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vexpress_config_bridge {int context; TYPE_1__* ops; } ;
struct regmap {int dummy; } ;
struct device {int parent; } ;
struct TYPE_2__ {int (* regmap_exit ) (struct regmap*,int ) ;} ;


 struct vexpress_config_bridge* FUNC_0 (int ) ;
 int FUNC_1 (struct regmap*,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct vexpress_config_bridge *VAR_2 = FUNC_0(VAR_0->parent);
 struct regmap *VAR_3 = VAR_1;

 VAR_2->ops->regmap_exit(VAR_3, VAR_2->context);
}
