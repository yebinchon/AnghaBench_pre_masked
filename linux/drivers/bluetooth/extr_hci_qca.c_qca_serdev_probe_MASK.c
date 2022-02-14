
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serdev_device {int dev; } ;
struct qca_vreg_data {int num_vregs; int vregs; int soc_type; } ;
struct TYPE_4__ {struct serdev_device* serdev; } ;
struct qca_serdev {int susclk; TYPE_2__ serdev_hu; int bt_en; int btsoc_type; int oper_speed; TYPE_1__* bt_power; int firmware_name; } ;
struct qca_power {int dummy; } ;
struct TYPE_3__ {int vregs_on; struct qca_vreg_data const* vreg_data; int * dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int *) ;
 int FUNC_9 (int *,char*,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,char*,int ) ;
 void* FUNC_12 (int *,int,int ) ;
 int FUNC_13 (TYPE_2__*,int *) ;
 struct qca_vreg_data* FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int VAR_5 ;
 int FUNC_17 (struct serdev_device*,struct qca_serdev*) ;

__attribute__((used)) static int FUNC_18(struct serdev_device *VAR_6)
{
 struct qca_serdev *VAR_7;
 const struct qca_vreg_data *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_12(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->serdev_hu.serdev = VAR_6;
 VAR_8 = FUNC_14(&VAR_6->dev);
 FUNC_17(VAR_6, VAR_7);
 FUNC_8(&VAR_6->dev, "firmware-name",
      &VAR_7->firmware_name);
 if (VAR_8 && FUNC_16(VAR_8->soc_type)) {
  VAR_7->btsoc_type = VAR_8->soc_type;
  VAR_7->bt_power = FUNC_12(&VAR_6->dev,
      sizeof(struct qca_power),
      VAR_1);
  if (!VAR_7->bt_power)
   return -VAR_0;

  VAR_7->bt_power->dev = &VAR_6->dev;
  VAR_7->bt_power->vreg_data = VAR_8;
  VAR_9 = FUNC_15(VAR_7->bt_power, VAR_8->vregs,
       VAR_8->num_vregs);
  if (VAR_9) {
   FUNC_1("Failed to init regulators:%d", VAR_9);
   goto out;
  }

  VAR_7->bt_power->vregs_on = 0;

  FUNC_9(&VAR_6->dev, "max-speed",
      &VAR_7->oper_speed);
  if (!VAR_7->oper_speed)
   FUNC_0("UART will pick default operating speed");

  VAR_9 = FUNC_13(&VAR_7->serdev_hu, &VAR_5);
  if (VAR_9) {
   FUNC_1("wcn3990 serdev registration failed");
   goto out;
  }
 } else {
  VAR_7->btsoc_type = VAR_3;
  VAR_7->bt_en = FUNC_11(&VAR_6->dev, "enable",
            VAR_2);
  if (FUNC_2(VAR_7->bt_en)) {
   FUNC_7(&VAR_6->dev, "failed to acquire enable gpio\n");
   return FUNC_3(VAR_7->bt_en);
  }

  VAR_7->susclk = FUNC_10(&VAR_6->dev, ((void*)0));
  if (FUNC_2(VAR_7->susclk)) {
   FUNC_7(&VAR_6->dev, "failed to acquire clk\n");
   return FUNC_3(VAR_7->susclk);
  }

  VAR_9 = FUNC_6(VAR_7->susclk, VAR_4);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_5(VAR_7->susclk);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_13(&VAR_7->serdev_hu, &VAR_5);
  if (VAR_9)
   FUNC_4(VAR_7->susclk);
 }

out: return VAR_9;

}
