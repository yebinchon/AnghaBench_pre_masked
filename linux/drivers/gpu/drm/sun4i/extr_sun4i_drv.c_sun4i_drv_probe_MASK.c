
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct endpoint_list {int fifo; } ;
struct device_node {int dummy; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,struct component_match*) ;
 scalar_t__ FUNC_2 (int *,struct device_node**) ;
 int FUNC_3 (int *,struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int) ;
 int FUNC_5 (TYPE_1__*,struct endpoint_list*,struct component_match**,struct device_node*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct component_match *VAR_2 = ((void*)0);
 struct device_node *VAR_3 = VAR_1->dev.of_node, *VAR_4;
 struct endpoint_list VAR_5;
 int VAR_6, VAR_7, VAR_8 = 0;

 FUNC_0(VAR_5.fifo);

 for (VAR_6 = 0;; VAR_6++) {
  struct device_node *VAR_9 = FUNC_4(VAR_3,
        "allwinner,pipelines",
        VAR_6);
  if (!VAR_9)
   break;

  FUNC_3(&VAR_5.fifo, VAR_9);
 }

 while (FUNC_2(&VAR_5.fifo, &VAR_4)) {

  VAR_7 = FUNC_5(&VAR_1->dev, &VAR_5, &VAR_2,
           VAR_4);


  if (VAR_7 < 0)
   return VAR_7;

  VAR_8 += VAR_7;
 }

 if (VAR_8)
  return FUNC_1(&VAR_1->dev,
             &VAR_0,
             VAR_2);
 else
  return 0;
}
