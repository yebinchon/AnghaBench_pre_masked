
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {void** irq; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 int FUNC_3 (struct talitos_private*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (struct device_node*,int) ;
 int FUNC_6 (void*,int ,int ,int ,struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_5->dev.of_node;
 struct talitos_private *VAR_8 = FUNC_2(VAR_6);
 int VAR_9;
 bool VAR_10 = FUNC_3(VAR_8);

 VAR_8->irq[0] = FUNC_5(VAR_7, 0);
 if (!VAR_8->irq[0]) {
  FUNC_1(VAR_6, "failed to map irq\n");
  return -VAR_0;
 }
 if (VAR_10) {
  VAR_9 = FUNC_6(VAR_8->irq[0], VAR_1, 0,
      FUNC_0(VAR_6), VAR_6);
  goto primary_out;
 }

 VAR_8->irq[1] = FUNC_5(VAR_7, 1);


 if (!VAR_8->irq[1]) {
  VAR_9 = FUNC_6(VAR_8->irq[0], VAR_2, 0,
      FUNC_0(VAR_6), VAR_6);
  goto primary_out;
 }

 VAR_9 = FUNC_6(VAR_8->irq[0], VAR_3, 0,
     FUNC_0(VAR_6), VAR_6);
 if (VAR_9)
  goto primary_out;


 VAR_9 = FUNC_6(VAR_8->irq[1], VAR_4, 0,
     FUNC_0(VAR_6), VAR_6);
 if (VAR_9) {
  FUNC_1(VAR_6, "failed to request secondary irq\n");
  FUNC_4(VAR_8->irq[1]);
  VAR_8->irq[1] = 0;
 }

 return VAR_9;

primary_out:
 if (VAR_9) {
  FUNC_1(VAR_6, "failed to request primary irq\n");
  FUNC_4(VAR_8->irq[0]);
  VAR_8->irq[0] = 0;
 }

 return VAR_9;
}
