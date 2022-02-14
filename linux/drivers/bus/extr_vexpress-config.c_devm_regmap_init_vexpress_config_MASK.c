
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vexpress_config_bridge {int context; TYPE_1__* ops; } ;
struct regmap {int dummy; } ;
struct device {TYPE_2__* parent; } ;
struct TYPE_4__ {scalar_t__ class; } ;
struct TYPE_3__ {struct regmap* (* regmap_init ) (struct device*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct regmap* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 scalar_t__ FUNC_2 (int) ;
 struct vexpress_config_bridge* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct device*,struct regmap**) ;
 struct regmap** FUNC_5 (int ,int,int ) ;
 int FUNC_6 (struct regmap**) ;
 struct regmap* FUNC_7 (struct device*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

struct regmap *FUNC_8(struct device *VAR_6)
{
 struct vexpress_config_bridge *VAR_7;
 struct regmap *VAR_8;
 struct regmap **VAR_9;

 if (FUNC_2(VAR_6->parent->class != VAR_4))
  return FUNC_0(-VAR_1);

 VAR_7 = FUNC_3(VAR_6->parent);
 if (FUNC_2(!VAR_7))
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_5(VAR_5, sizeof(*VAR_9),
   VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_8 = (VAR_7->ops->regmap_init)(VAR_6, VAR_7->context);
 if (FUNC_1(VAR_8)) {
  FUNC_6(VAR_9);
  return VAR_8;
 }

 *VAR_9 = VAR_8;
 FUNC_4(VAR_6, VAR_9);

 return VAR_8;
}
