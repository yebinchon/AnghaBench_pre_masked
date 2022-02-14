
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int nr_resets; int of_node; int * ops; } ;
struct qcom_scm {TYPE_1__* dev; int * core_clk; TYPE_4__ reset; int * bus_clk; int * iface_clk; int dload_mode_addr; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_2 () ;
 struct qcom_scm* VAR_7 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 void* FUNC_5 (TYPE_1__*,char*) ;
 struct qcom_scm* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int VAR_9 ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct qcom_scm *VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 VAR_11 = FUNC_6(&VAR_10->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_0;

 VAR_13 = FUNC_9(&VAR_10->dev, &VAR_11->dload_mode_addr);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = (unsigned long)FUNC_8(&VAR_10->dev);

 VAR_11->core_clk = FUNC_5(&VAR_10->dev, "core");
 if (FUNC_0(VAR_11->core_clk)) {
  if (FUNC_1(VAR_11->core_clk) == -VAR_1)
   return FUNC_1(VAR_11->core_clk);

  if (VAR_12 & VAR_5) {
   FUNC_4(&VAR_10->dev, "failed to acquire core clk\n");
   return FUNC_1(VAR_11->core_clk);
  }

  VAR_11->core_clk = ((void*)0);
 }

 VAR_11->iface_clk = FUNC_5(&VAR_10->dev, "iface");
 if (FUNC_0(VAR_11->iface_clk)) {
  if (FUNC_1(VAR_11->iface_clk) == -VAR_1)
   return FUNC_1(VAR_11->iface_clk);

  if (VAR_12 & VAR_6) {
   FUNC_4(&VAR_10->dev, "failed to acquire iface clk\n");
   return FUNC_1(VAR_11->iface_clk);
  }

  VAR_11->iface_clk = ((void*)0);
 }

 VAR_11->bus_clk = FUNC_5(&VAR_10->dev, "bus");
 if (FUNC_0(VAR_11->bus_clk)) {
  if (FUNC_1(VAR_11->bus_clk) == -VAR_1)
   return FUNC_1(VAR_11->bus_clk);

  if (VAR_12 & VAR_4) {
   FUNC_4(&VAR_10->dev, "failed to acquire bus clk\n");
   return FUNC_1(VAR_11->bus_clk);
  }

  VAR_11->bus_clk = ((void*)0);
 }

 VAR_11->reset.ops = &VAR_9;
 VAR_11->reset.nr_resets = 1;
 VAR_11->reset.of_node = VAR_10->dev.of_node;
 VAR_13 = FUNC_7(&VAR_10->dev, &VAR_11->reset);
 if (VAR_13)
  return VAR_13;


 VAR_13 = FUNC_3(VAR_11->core_clk, VAR_3);
 if (VAR_13)
  return VAR_13;

 VAR_7 = VAR_11;
 VAR_7->dev = &VAR_10->dev;

 FUNC_2();






 if (VAR_8)
  FUNC_10(1);

 return 0;
}
