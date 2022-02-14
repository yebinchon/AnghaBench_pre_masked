
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,struct component_match*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,struct component_match**) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct component_match *VAR_4 = ((void*)0);
 int VAR_5;


 if (!VAR_3->dev.of_node) {
  FUNC_1(&VAR_3->dev, "device-tree data is missing\n");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(&VAR_3->dev, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 else if (VAR_5 == 0)
  return FUNC_3(&VAR_2, &VAR_3->dev);
 else
  return FUNC_0(&VAR_3->dev,
             &VAR_1,
             VAR_4);
}
