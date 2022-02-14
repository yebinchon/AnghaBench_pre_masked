
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct device *VAR_1)
{
 int VAR_2;

 if (!VAR_1->of_node) {
  FUNC_0(VAR_1, "device does not have a device node entry\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_1(VAR_1->of_node, "devfreq-events",
      sizeof(u32));
 if (VAR_2 < 0) {
  FUNC_0(VAR_1,
   "failed to get the count of devfreq-event in %pOF node\n",
   VAR_1->of_node);
  return VAR_2;
 }

 return VAR_2;
}
