
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 if (!FUNC_0())
  return -VAR_0;

 return FUNC_1(VAR_2->dev.of_node, ((void*)0),
        VAR_1, &VAR_2->dev);
}
