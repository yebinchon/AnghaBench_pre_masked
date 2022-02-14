
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hv_ring_buffer_debug_info {int bytes_avail_toread; } ;
struct hv_device {TYPE_1__* channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int inbound; } ;


 int VAR_0 ;
 struct hv_device* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,struct hv_ring_buffer_debug_info*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2,
     char *VAR_3)
{
 struct hv_device *VAR_4 = FUNC_0(VAR_1);
 struct hv_ring_buffer_debug_info VAR_5;
 int VAR_6;

 if (!VAR_4->channel)
  return -VAR_0;

 VAR_6 = FUNC_1(&VAR_4->channel->inbound, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_2(VAR_3, "%d\n", VAR_5.bytes_avail_toread);
}
