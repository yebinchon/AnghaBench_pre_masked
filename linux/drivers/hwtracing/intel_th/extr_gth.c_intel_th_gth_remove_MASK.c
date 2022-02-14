
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_th_device {int dev; } ;
struct gth_device {int master_group; TYPE_1__* dev; int output_group; } ;
struct TYPE_2__ {int kobj; } ;


 struct gth_device* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct intel_th_device *VAR_0)
{
 struct gth_device *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->dev->kobj, &VAR_1->output_group);
 FUNC_1(&VAR_1->dev->kobj, &VAR_1->master_group);
}
