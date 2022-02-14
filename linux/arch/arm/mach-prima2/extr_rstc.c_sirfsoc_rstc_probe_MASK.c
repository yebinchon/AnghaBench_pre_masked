
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_6)
{
 struct device_node *VAR_7 = VAR_6->dev.of_node;
 VAR_5 = FUNC_2(VAR_7, 0);
 if (!VAR_5) {
  FUNC_1(&VAR_6->dev, "unable to map rstc cpu registers\n");
  return -VAR_1;
 }

 VAR_3.of_node = VAR_7;
 VAR_2 = VAR_4;

 if (FUNC_0(VAR_0))
  FUNC_3(&VAR_3);

 return 0;
}
