
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {int dummy; } ;
struct hv_device {int vendor_id; int dev_instance; int dev_type; struct vmbus_channel* channel; } ;
typedef int guid_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 struct hv_device* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

struct hv_device *FUNC_3(const guid_t *VAR_1,
          const guid_t *VAR_2,
          struct vmbus_channel *VAR_3)
{
 struct hv_device *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct hv_device), VAR_0);
 if (!VAR_4) {
  FUNC_2("Unable to allocate device object for child device\n");
  return ((void*)0);
 }

 VAR_4->channel = VAR_3;
 FUNC_0(&VAR_4->dev_type, VAR_1);
 FUNC_0(&VAR_4->dev_instance, VAR_2);
 VAR_4->vendor_id = 0x1414;

 return VAR_4;
}
