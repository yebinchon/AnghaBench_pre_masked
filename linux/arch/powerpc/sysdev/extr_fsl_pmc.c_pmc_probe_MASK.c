
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_4)
{
 VAR_2 = FUNC_0(VAR_4->dev.of_node, 0);
 if (!VAR_2)
  return -VAR_0;

 VAR_1 = &VAR_4->dev;
 FUNC_1(&VAR_3);
 return 0;
}
