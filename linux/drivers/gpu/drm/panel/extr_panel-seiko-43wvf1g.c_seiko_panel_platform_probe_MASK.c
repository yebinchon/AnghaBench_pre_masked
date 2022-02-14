
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;


 int VAR_0 ;
 struct of_device_id* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 const struct of_device_id *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2->dev.of_node);
 if (!VAR_3)
  return -VAR_0;

 return FUNC_1(&VAR_2->dev, VAR_3->data);
}
