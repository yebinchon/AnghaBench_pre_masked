
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {int num_queues; int queue_sel; int action; int engine_sel; } ;
struct TYPE_7__ {void* pasid; } ;
struct TYPE_6__ {void* doorbell_offset0; } ;
struct TYPE_5__ {int u32All; } ;
struct pm4_mes_unmap_queues {TYPE_4__ bitfields2; TYPE_3__ bitfields3a; TYPE_2__ bitfields3b; TYPE_1__ header; } ;
struct packet_manager {int dummy; } ;
typedef enum kfd_unmap_queues_filter { ____Placeholder_kfd_unmap_queues_filter } kfd_unmap_queues_filter ;
typedef enum kfd_queue_type { ____Placeholder_kfd_queue_type } kfd_queue_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (void**,int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_3(struct packet_manager *VAR_10, uint32_t *VAR_11,
   enum kfd_queue_type VAR_12,
   enum kfd_unmap_queues_filter VAR_13,
   uint32_t VAR_14, bool VAR_15,
   unsigned int VAR_16)
{
 struct pm4_mes_unmap_queues *VAR_17;

 VAR_17 = (struct pm4_mes_unmap_queues *)VAR_11;
 FUNC_1(VAR_11, 0, sizeof(struct pm4_mes_unmap_queues));

 VAR_17->header.u32All = FUNC_2(VAR_1,
     sizeof(struct pm4_mes_unmap_queues));
 switch (VAR_12) {
 case 135:
 case 134:
  VAR_17->bitfields2.engine_sel =
   VAR_4;
  break;
 case 133:
 case 132:
  VAR_17->bitfields2.engine_sel =
   VAR_5 + VAR_16;
  break;
 default:
  FUNC_0(1, "queue type %d", VAR_12);
  return -VAR_0;
 }

 if (VAR_15)
  VAR_17->bitfields2.action =
   VAR_3;
 else
  VAR_17->bitfields2.action =
   VAR_2;

 switch (VAR_13) {
 case 128:
  VAR_17->bitfields2.queue_sel =
   VAR_7;
  VAR_17->bitfields2.num_queues = 1;
  VAR_17->bitfields3b.doorbell_offset0 = VAR_14;
  break;
 case 130:
  VAR_17->bitfields2.queue_sel =
   VAR_6;
  VAR_17->bitfields3a.pasid = VAR_14;
  break;
 case 131:
  VAR_17->bitfields2.queue_sel =
   VAR_9;
  break;
 case 129:

  VAR_17->bitfields2.queue_sel =
   VAR_8;
  break;
 default:
  FUNC_0(1, "filter %d", VAR_13);
  return -VAR_0;
 }

 return 0;

}
