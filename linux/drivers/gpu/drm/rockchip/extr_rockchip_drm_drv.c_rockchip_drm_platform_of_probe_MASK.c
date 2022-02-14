
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {struct device_node* parent; } ;
struct device {struct device_node* of_node; } ;


 int FUNC_0 (struct device*,char*,struct device_node*) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->of_node;
 struct device_node *VAR_4;
 bool VAR_5 = 0;
 int VAR_6;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_6 = 0;; VAR_6++) {
  struct device_node *VAR_7;

  VAR_4 = FUNC_4(VAR_3, "ports", VAR_6);
  if (!VAR_4)
   break;

  if (!FUNC_2(VAR_4->parent)) {
   FUNC_3(VAR_4);
   continue;
  }

  VAR_7 = FUNC_4(VAR_4->parent, "iommus", 0);
  if (!VAR_7 || !FUNC_2(VAR_7->parent)) {
   FUNC_0(VAR_2,
          "no iommu attached for %pOF, using non-iommu buffers\n",
          VAR_4->parent);




   VAR_1 = 0;
  }

  VAR_5 = 1;

  FUNC_3(VAR_7);
  FUNC_3(VAR_4);
 }

 if (VAR_6 == 0) {
  FUNC_1(VAR_2, "missing 'ports' property\n");
  return -VAR_0;
 }

 if (!VAR_5) {
  FUNC_1(VAR_2,
         "No available vop found for display-subsystem.\n");
  return -VAR_0;
 }

 return 0;
}
