
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {scalar_t__* clks; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (struct device_node*,int ,int ,TYPE_2__*) ;
 int FUNC_5 (struct device_node*,int,int) ;
 int FUNC_6 (struct device_node*,int ,TYPE_2__*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 int VAR_8, VAR_9;
 struct device_node *VAR_10 = VAR_7->dev.of_node;

 if (!VAR_3) {
  VAR_3 = FUNC_2(VAR_0);
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
   if (VAR_3->clks[VAR_9] == FUNC_1(-VAR_2))
    VAR_3->clks[VAR_9] = FUNC_1(-VAR_1);
  }
 }

 FUNC_4(VAR_10, VAR_4, FUNC_0(VAR_4),
      VAR_3);
 FUNC_3(VAR_5, FUNC_0(VAR_5),
      VAR_3);

 VAR_8 = FUNC_6(VAR_10, VAR_6, VAR_3);
 if (VAR_8)
  return VAR_8;

 FUNC_5(VAR_10, 2, 0x30);

 return 0;
}
