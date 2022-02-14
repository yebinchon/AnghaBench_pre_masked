
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int *,struct component_match*) ;
 int FUNC_1 (TYPE_1__*,struct component_match**,int ,struct device_node*) ;
 int VAR_2 ;
 struct device_node* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct device_node *VAR_4;
 struct component_match *VAR_5 = ((void*)0);


 VAR_4 = FUNC_2(VAR_3->dev.of_node, 0, 0);
 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_3->dev, &VAR_5, VAR_1, VAR_4);
 FUNC_3(VAR_4);

 return FUNC_0(&VAR_3->dev, &VAR_2,
            VAR_5);
}
