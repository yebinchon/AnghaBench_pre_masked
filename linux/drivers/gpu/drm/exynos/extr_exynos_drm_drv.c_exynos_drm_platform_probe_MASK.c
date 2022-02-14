
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int coherent_dma_mask; } ;
struct platform_device {TYPE_1__ dev; } ;
struct component_match {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct component_match*) ;
 int FUNC_2 (struct component_match*) ;
 int FUNC_3 (TYPE_1__*,int *,struct component_match*) ;
 struct component_match* FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct component_match *VAR_2;

 VAR_1->dev.coherent_dma_mask = FUNC_0(32);

 VAR_2 = FUNC_4(&VAR_1->dev);
 if (FUNC_1(VAR_2))
  return FUNC_2(VAR_2);

 return FUNC_3(&VAR_1->dev, &VAR_0,
            VAR_2);
}
