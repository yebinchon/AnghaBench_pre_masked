
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int parent; } ;
struct TYPE_5__ {int name; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int * VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int *,TYPE_2__*,int *,struct regmap*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (struct device_node*,int ,int *) ;
 int VAR_6 ;
 struct regmap* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct regmap *VAR_9;

 VAR_9 = FUNC_5(VAR_8->parent);
 if (FUNC_0(VAR_9)) {
  FUNC_3(&VAR_7->dev, "syscon lookup failed\n");
  return FUNC_1(VAR_9);
 }

 VAR_2[VAR_1] = VAR_5[VAR_1];
 VAR_2[VAR_0] =
  FUNC_2(((void*)0), &VAR_3[VAR_0],
          &VAR_3[VAR_1].name,
          VAR_9);

 return FUNC_4(VAR_8, VAR_6, &VAR_4);
}
