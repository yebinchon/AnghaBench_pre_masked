
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scmi_info {int dev; } ;
struct scmi_device {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *,char*,...) ;
 struct scmi_device* FUNC_1 (struct device_node*,int ,int) ;
 int FUNC_2 (struct scmi_device*) ;
 scalar_t__ FUNC_3 (struct scmi_info*,int *,int) ;
 int FUNC_4 (struct scmi_device*) ;

__attribute__((used)) static inline void
FUNC_5(struct device_node *VAR_0, struct scmi_info *VAR_1,
       int VAR_2)
{
 struct scmi_device *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1->dev, VAR_2);
 if (!VAR_3) {
  FUNC_0(&VAR_1->dev, "failed to create %d protocol device\n",
   VAR_2);
  return;
 }

 if (FUNC_3(VAR_1, &VAR_3->dev, VAR_2)) {
  FUNC_0(&VAR_3->dev, "failed to setup transport\n");
  FUNC_2(VAR_3);
  return;
 }


 FUNC_4(VAR_3);
}
