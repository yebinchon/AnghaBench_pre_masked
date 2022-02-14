
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_phandle_args {scalar_t__ np; int* args; } ;
struct TYPE_3__ {scalar_t__ of_node; } ;
struct generic_pm_domain {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_4__ {scalar_t__ managed; } ;


 int VAR_0 ;
 int FUNC_0 (struct of_phandle_args*,struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device_node*,char*,char*,int,struct of_phandle_args*) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct generic_pm_domain *VAR_2,
    struct device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->of_node;
 struct of_phandle_args VAR_5;
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 while (!FUNC_2(VAR_4, "clocks", "#clock-cells", VAR_6,
        &VAR_5)) {
  if (VAR_5.np != VAR_2->dev.of_node)
   continue;

  VAR_8 = VAR_5.args[0];
  if (VAR_8 < VAR_0 &&
      VAR_1[VAR_8].managed) {
   VAR_7 = FUNC_0(&VAR_5, VAR_3);
   FUNC_1(VAR_5.np);
   if (VAR_7)
    return VAR_7;
  }
  VAR_6++;
 }

 return 0;
}
