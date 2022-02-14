
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_dev {TYPE_1__* pdev; } ;
struct fwnode_reference_args {struct fwnode_handle* fwnode; } ;
struct fwnode_handle {int dummy; } ;
struct device_node {struct fwnode_handle fwnode; } ;
struct device {int fwnode; struct device_node* of_node; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,struct fwnode_reference_args*) ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (struct fwnode_handle*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct device_node* FUNC_6 (struct device_node*,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_3, bool VAR_4)
{
 struct device_node *VAR_5;
 struct device *VAR_6 = &VAR_3->pdev->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct fwnode_handle *VAR_8;
 int VAR_9;


 if (FUNC_2(VAR_6)) {
  VAR_5 = FUNC_6(VAR_7, "dsaf-handle", 0);
  if (!VAR_5) {
   FUNC_1(VAR_6, "could not find dsaf-handle\n");
   return -VAR_0;
  }
  VAR_8 = &VAR_5->fwnode;
 } else if (FUNC_4(VAR_6->fwnode)) {
  struct fwnode_reference_args VAR_10;

  VAR_9 = FUNC_0(VAR_6->fwnode,
             "dsaf-handle", 0, &VAR_10);
  if (VAR_9) {
   FUNC_1(VAR_6, "could not find dsaf-handle\n");
   return VAR_9;
  }
  VAR_8 = VAR_10.fwnode;
 } else {
  FUNC_1(VAR_6, "cannot read data from DT or ACPI\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_8, 0);
 if (VAR_9)
  return VAR_9;

 if (VAR_4) {
  FUNC_5(VAR_2);
  VAR_9 = FUNC_3(VAR_8, 1);
 }

 return VAR_9;
}
