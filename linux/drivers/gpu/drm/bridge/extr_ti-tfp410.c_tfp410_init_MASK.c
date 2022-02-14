
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * timings; scalar_t__ of_node; int * funcs; } ;
struct tfp410 {int hpd_irq; scalar_t__ hpd; int ddc; TYPE_1__ bridge; int hpd_work; int powerdown; struct device* dev; int timings; } ;
struct device {scalar_t__ of_node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct tfp410*) ;
 int FUNC_6 (struct device*,char*,int ) ;
 struct tfp410* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int *,int ,int,char*,struct tfp410*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 int VAR_7 ;
 int FUNC_13 (struct tfp410*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_14 (struct tfp410*,int) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_10, bool VAR_11)
{
 struct tfp410 *VAR_12;
 int VAR_13;

 if (!VAR_10->of_node) {
  FUNC_4(VAR_10, "device-tree data is missing\n");
  return -VAR_1;
 }

 VAR_12 = FUNC_7(VAR_10, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;
 FUNC_5(VAR_10, VAR_12);

 VAR_12->bridge.funcs = &VAR_7;
 VAR_12->bridge.of_node = VAR_10->of_node;
 VAR_12->bridge.timings = &VAR_12->timings;
 VAR_12->dev = VAR_10;

 VAR_13 = FUNC_14(VAR_12, VAR_11);
 if (VAR_13)
  goto fail;

 VAR_13 = FUNC_13(VAR_12);
 if (VAR_13)
  goto fail;

 VAR_12->powerdown = FUNC_6(VAR_10, "powerdown",
       VAR_3);
 if (FUNC_2(VAR_12->powerdown)) {
  FUNC_4(VAR_10, "failed to parse powerdown gpio\n");
  return FUNC_3(VAR_12->powerdown);
 }

 if (VAR_12->hpd)
  VAR_12->hpd_irq = FUNC_11(VAR_12->hpd);
 else
  VAR_12->hpd_irq = -VAR_1;

 if (VAR_12->hpd_irq >= 0) {
  FUNC_1(&VAR_12->hpd_work, VAR_9);

  VAR_13 = FUNC_8(VAR_10, VAR_12->hpd_irq,
   ((void*)0), VAR_8, VAR_6 |
   VAR_5 | VAR_4,
   "hdmi-hpd", VAR_12);
  if (VAR_13) {
   FUNC_0("failed to register hpd interrupt\n");
   goto fail;
  }
 }

 FUNC_9(&VAR_12->bridge);

 return 0;
fail:
 FUNC_12(VAR_12->ddc);
 if (VAR_12->hpd)
  FUNC_10(VAR_12->hpd);
 return VAR_13;
}
