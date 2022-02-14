
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_uverbs_device {int dev; } ;
struct TYPE_2__ {int driver_id; int uverbs_no_driver_id_binding; int uverbs_abi_ver; } ;
struct ib_device {TYPE_1__ ops; } ;
struct ib_client_nl_info {int port; int nl_msg; int * cdev; int abi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_2, void *VAR_3,
     struct ib_client_nl_info *VAR_4)
{
 struct ib_uverbs_device *VAR_5 = VAR_3;
 int VAR_6;

 if (VAR_4->port != -1)
  return -VAR_0;

 VAR_4->abi = VAR_2->ops.uverbs_abi_ver;
 VAR_4->cdev = &VAR_5->dev;







 if (!VAR_2->ops.uverbs_no_driver_id_binding) {
  VAR_6 = FUNC_0(VAR_4->nl_msg, VAR_1,
      VAR_2->ops.driver_id);
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
