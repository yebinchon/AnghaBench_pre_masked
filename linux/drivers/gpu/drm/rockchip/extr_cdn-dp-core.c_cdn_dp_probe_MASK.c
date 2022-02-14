
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
typedef struct phy extcon_dev ;
struct cdn_dp_port {int id; struct cdn_dp_device* dp; struct phy* phy; struct phy* extcon; } ;
struct cdn_dp_device {int lock; int ports; struct cdn_dp_port** port; struct device* dev; } ;
struct cdn_dp_data {int max_phy; } ;


 int FUNC_0 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct phy*) ;
 int FUNC_2 (struct phy*) ;
 int FUNC_3 (struct cdn_dp_device*,struct device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct device*,int *) ;
 int FUNC_5 (struct device*,struct cdn_dp_device*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 struct phy* FUNC_7 (struct device*,int ,int) ;
 struct phy* FUNC_8 (struct device*,int) ;
 int FUNC_9 (int *) ;
 struct of_device_id* FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 const struct of_device_id *VAR_8;
 struct cdn_dp_data *VAR_9;
 struct cdn_dp_port *VAR_10;
 struct cdn_dp_device *VAR_11;
 struct extcon_dev *VAR_12;
 struct phy *VAR_13;
 int VAR_14;

 VAR_11 = FUNC_6(VAR_7, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;
 VAR_11->dev = VAR_7;

 VAR_8 = FUNC_10(VAR_5, VAR_6->dev.of_node);
 VAR_9 = (struct cdn_dp_data *)VAR_8->data;

 for (VAR_14 = 0; VAR_14 < VAR_9->max_phy; VAR_14++) {
  VAR_12 = FUNC_8(VAR_7, VAR_14);
  VAR_13 = FUNC_7(VAR_7, VAR_7->of_node, VAR_14);

  if (FUNC_2(VAR_12) == -VAR_2 ||
      FUNC_2(VAR_13) == -VAR_2)
   return -VAR_2;

  if (FUNC_1(VAR_12) || FUNC_1(VAR_13))
   continue;

  VAR_10 = FUNC_6(VAR_7, sizeof(*VAR_10), VAR_3);
  if (!VAR_10)
   return -VAR_1;

  VAR_10->extcon = VAR_12;
  VAR_10->phy = VAR_13;
  VAR_10->dp = VAR_11;
  VAR_10->id = VAR_14;
  VAR_11->port[VAR_11->ports++] = VAR_10;
 }

 if (!VAR_11->ports) {
  FUNC_0(VAR_7, "missing extcon or phy\n");
  return -VAR_0;
 }

 FUNC_9(&VAR_11->lock);
 FUNC_5(VAR_7, VAR_11);

 FUNC_3(VAR_11, VAR_7);

 return FUNC_4(VAR_7, &VAR_4);
}
