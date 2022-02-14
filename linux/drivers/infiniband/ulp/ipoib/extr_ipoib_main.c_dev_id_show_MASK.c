
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ dev_port; scalar_t__ dev_id; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int comm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct net_device*,char*,int ) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 struct net_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct net_device *VAR_4 = FUNC_2(VAR_1);
 if (VAR_4->dev_port && VAR_4->dev_id == VAR_4->dev_port)
  FUNC_0(VAR_4,
   "\"%s\" wants to know my dev_id. Should it look at dev_port instead? See Documentation/ABI/testing/sysfs-class-net for more info.\n",
   VAR_0->comm);

 return FUNC_1(VAR_3, "%#x\n", VAR_4->dev_id);
}
