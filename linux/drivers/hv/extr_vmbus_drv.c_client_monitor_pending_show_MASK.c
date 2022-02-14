
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_device {int channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int * monitor_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct hv_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
        struct device_attribute *VAR_3,
        char *VAR_4)
{
 struct hv_device *VAR_5 = FUNC_1(VAR_2);

 if (!VAR_5->channel)
  return -VAR_0;
 return FUNC_2(VAR_4, "%d\n",
         FUNC_0(VAR_5->channel,
           VAR_1.monitor_pages[1]));
}
