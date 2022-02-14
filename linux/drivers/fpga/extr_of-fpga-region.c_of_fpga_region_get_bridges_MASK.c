
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct fpga_region {int bridge_list; struct fpga_image_info* info; struct device dev; } ;
struct fpga_image_info {struct device_node* overlay; } ;
struct device_node {struct device_node* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device_node*,struct fpga_image_info*,int *) ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (struct device_node*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct fpga_region *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 struct fpga_image_info *VAR_4 = VAR_1->info;
 struct device_node *VAR_5, *VAR_6, *VAR_7 = ((void*)0);
 int VAR_8, VAR_9;


 VAR_9 = FUNC_1(VAR_3->parent, VAR_4,
      &VAR_1->bridge_list);


 if (VAR_9 == -VAR_0)
  return VAR_9;


 if (!VAR_9)
  VAR_7 = VAR_3->parent;


 VAR_5 = FUNC_3(VAR_4->overlay, "fpga-bridges", 0);
 if (VAR_5) {
  FUNC_2(VAR_5);
  VAR_6 = VAR_4->overlay;
 } else {
  VAR_6 = VAR_3;
 }

 for (VAR_8 = 0; ; VAR_8++) {
  VAR_5 = FUNC_3(VAR_6, "fpga-bridges", VAR_8);
  if (!VAR_5)
   break;


  if (VAR_5 == VAR_7) {
   FUNC_2(VAR_5);
   continue;
  }


  VAR_9 = FUNC_1(VAR_5, VAR_4,
       &VAR_1->bridge_list);
  FUNC_2(VAR_5);


  if (VAR_9 == -VAR_0) {
   FUNC_0(&VAR_1->bridge_list);
   return -VAR_0;
  }
 }

 return 0;
}
