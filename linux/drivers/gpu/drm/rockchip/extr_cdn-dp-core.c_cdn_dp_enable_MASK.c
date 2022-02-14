
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdn_dp_port {int id; int lanes; } ;
struct cdn_dp_device {int active; int ports; int lanes; struct cdn_dp_port** port; int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct cdn_dp_device*) ;
 int FUNC_2 (struct cdn_dp_device*) ;
 struct cdn_dp_port* FUNC_3 (struct cdn_dp_device*) ;
 int FUNC_4 (struct cdn_dp_device*,struct cdn_dp_port*) ;
 int FUNC_5 (struct cdn_dp_device*,struct cdn_dp_port*) ;
 int FUNC_6 (struct cdn_dp_device*) ;
 int FUNC_7 (struct cdn_dp_port*) ;
 int FUNC_8 (struct cdn_dp_device*) ;

__attribute__((used)) static int FUNC_9(struct cdn_dp_device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 struct cdn_dp_port *VAR_5;

 VAR_5 = FUNC_3(VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_1->dev,
         "Can't enable without connection\n");
  return -VAR_0;
 }

 if (VAR_1->active)
  return 0;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->dev, "firmware init failed: %d", VAR_2);
  goto err_clk_disable;
 }


 for (VAR_3 = VAR_5->id; VAR_3 < VAR_1->ports; VAR_3++) {
  VAR_5 = VAR_1->port[VAR_3];
  VAR_4 = FUNC_7(VAR_5);
  if (VAR_4) {
   VAR_2 = FUNC_5(VAR_1, VAR_5);
   if (VAR_2)
    continue;

   VAR_2 = FUNC_8(VAR_1);
   if (VAR_2) {
    FUNC_4(VAR_1, VAR_5);
   } else {
    VAR_1->active = 1;
    VAR_1->lanes = VAR_5->lanes;
    return 0;
   }
  }
 }

err_clk_disable:
 FUNC_1(VAR_1);
 return VAR_2;
}
