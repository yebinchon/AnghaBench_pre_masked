
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_du_device {int dev; } ;
struct of_endpoint {struct device_node* local_node; } ;
struct device_node {int dummy; } ;
typedef enum rcar_du_output { ____Placeholder_rcar_du_output } rcar_du_output ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,struct device_node*) ;
 int FUNC_1 (int ,char*,struct device_node*,int,int) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct rcar_du_device*,int,struct device_node*) ;

__attribute__((used)) static int FUNC_6(struct rcar_du_device *VAR_3,
         enum rcar_du_output VAR_4,
         struct of_endpoint *VAR_5)
{
 struct device_node *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_3(VAR_5->local_node);
 if (!VAR_6) {
  FUNC_0(VAR_3->dev, "unconnected endpoint %pOF, skipping\n",
   VAR_5->local_node);
  return -VAR_0;
 }

 if (!FUNC_2(VAR_6)) {
  FUNC_0(VAR_3->dev,
   "connected entity %pOF is disabled, skipping\n",
   VAR_6);
  FUNC_4(VAR_6);
  return -VAR_0;
 }

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_6);
 if (VAR_7 && VAR_7 != -VAR_2 && VAR_7 != -VAR_1)
  FUNC_1(VAR_3->dev,
    "failed to initialize encoder %pOF on output %u (%d), skipping\n",
    VAR_6, VAR_4, VAR_7);

 FUNC_4(VAR_6);

 return VAR_7;
}
