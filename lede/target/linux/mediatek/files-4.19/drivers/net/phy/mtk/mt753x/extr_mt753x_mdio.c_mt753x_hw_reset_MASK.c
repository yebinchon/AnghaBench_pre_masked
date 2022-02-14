
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct reset_control {int dummy; } ;
struct gsw_mt753x {int reset_pin; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct reset_control*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*,int,char*) ;
 struct reset_control* FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct device_node*,char*,int ) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct reset_control*) ;
 int FUNC_11 (struct reset_control*) ;

__attribute__((used)) static int FUNC_12(struct gsw_mt753x *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev->of_node;
 struct reset_control *VAR_3;
 int VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_9(VAR_2, "mediatek,mcm");
 if (VAR_4) {
  VAR_3 = FUNC_4(VAR_1->dev, "mcm");
  VAR_5 = FUNC_0(VAR_3);
  if (FUNC_0(VAR_3)) {
   FUNC_1(VAR_1->dev, "Missing reset ctrl of switch\n");
   return VAR_5;
  }

  FUNC_10(VAR_3);
  FUNC_7(30);
  FUNC_11(VAR_3);

  VAR_1->reset_pin = -1;
  return 0;
 }

 VAR_1->reset_pin = FUNC_8(VAR_2, "reset-gpios", 0);
 if (VAR_1->reset_pin < 0) {
  FUNC_1(VAR_1->dev, "Missing reset pin of switch\n");
  return VAR_5;
 }

 VAR_5 = FUNC_3(VAR_1->dev, VAR_1->reset_pin, "mt753x-reset");
 if (VAR_5) {
  FUNC_2(VAR_1->dev, "Failed to request gpio %d\n",
    VAR_1->reset_pin);
  return VAR_5;
 }

 FUNC_5(VAR_1->reset_pin, 0);
 FUNC_7(30);
 FUNC_6(VAR_1->reset_pin, 1);
 FUNC_7(500);

 return 0;
}
