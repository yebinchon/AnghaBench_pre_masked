
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_device {int num_channels; TYPE_1__* pdev; int model; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_2(struct sh_tmu_device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->pdev->dev.of_node;

 VAR_2->model = VAR_1;
 VAR_2->num_channels = 3;

 FUNC_1(VAR_3, "#renesas,channels", &VAR_2->num_channels);

 if (VAR_2->num_channels != 2 && VAR_2->num_channels != 3) {
  FUNC_0(&VAR_2->pdev->dev, "invalid number of channels %u\n",
   VAR_2->num_channels);
  return -VAR_0;
 }

 return 0;
}
