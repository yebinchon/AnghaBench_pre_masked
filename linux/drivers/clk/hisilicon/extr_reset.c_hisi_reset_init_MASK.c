
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_4__ {int of_reset_n_cells; int of_xlate; int of_node; int * ops; int owner; } ;
struct hisi_reset_controller {TYPE_1__ rcdev; int lock; int membase; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,struct resource*) ;
 struct hisi_reset_controller* FUNC_2 (TYPE_2__*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

struct hisi_reset_controller *FUNC_6(struct platform_device *VAR_5)
{
 struct hisi_reset_controller *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_2(&VAR_5->dev, sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_3(VAR_5, VAR_1, 0);
 VAR_6->membase = FUNC_1(&VAR_5->dev, VAR_7);
 if (FUNC_0(VAR_6->membase))
  return ((void*)0);

 FUNC_5(&VAR_6->lock);
 VAR_6->rcdev.owner = VAR_2;
 VAR_6->rcdev.ops = &VAR_4;
 VAR_6->rcdev.of_node = VAR_5->dev.of_node;
 VAR_6->rcdev.of_reset_n_cells = 2;
 VAR_6->rcdev.of_xlate = VAR_3;
 FUNC_4(&VAR_6->rcdev);

 return VAR_6;
}
