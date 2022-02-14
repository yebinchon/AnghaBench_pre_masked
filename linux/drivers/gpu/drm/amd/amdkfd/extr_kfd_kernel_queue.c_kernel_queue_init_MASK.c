
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kfd_dev {TYPE_1__* device_info; } ;
struct TYPE_4__ {scalar_t__ (* initialize ) (struct kernel_queue*,struct kfd_dev*,int,int ) ;int rollback_packet; int submit_packet; int acquire_packet_buffer; int uninitialize; } ;
struct kernel_queue {TYPE_2__ ops; int ops_asic_specific; } ;
typedef enum kfd_queue_type { ____Placeholder_kfd_queue_type } kfd_queue_type ;
struct TYPE_3__ {int asic_family; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct kernel_queue*,struct kfd_dev*,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kernel_queue*) ;
 struct kernel_queue* FUNC_7 (int,int ) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (struct kernel_queue*,struct kfd_dev*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;

struct kernel_queue *FUNC_10(struct kfd_dev *VAR_6,
     enum kfd_queue_type VAR_7)
{
 struct kernel_queue *VAR_8;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->ops.initialize = FUNC_1;
 VAR_8->ops.uninitialize = VAR_5;
 VAR_8->ops.acquire_packet_buffer = VAR_2;
 VAR_8->ops.submit_packet = VAR_4;
 VAR_8->ops.rollback_packet = VAR_3;

 switch (VAR_6->device_info->asic_family) {
 case 141:
 case 132:
 case 140:
 case 136:
 case 135:
 case 134:
 case 128:
  FUNC_5(&VAR_8->ops_asic_specific);
  break;

 case 138:
 case 139:
  FUNC_2(&VAR_8->ops_asic_specific);
  break;

 case 131:
 case 130:
 case 129:
 case 133:
 case 142:
  FUNC_4(&VAR_8->ops_asic_specific);
  break;
 case 137:
  FUNC_3(&VAR_8->ops_asic_specific);
  break;
 default:
  FUNC_0(1, "Unexpected ASIC family %u",
       VAR_6->device_info->asic_family);
  goto out_free;
 }

 if (VAR_8->ops.initialize(VAR_8, VAR_6, VAR_7, VAR_1))
  return VAR_8;

 FUNC_8("Failed to init kernel queue\n");

out_free:
 FUNC_6(VAR_8);
 return ((void*)0);
}
