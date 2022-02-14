
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
 int FUNC_0 (int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void**,int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_3(struct packet_manager *VAR_9, uint32_t *VAR_10,
   enum kfd_queue_type VAR_11,
   enum kfd_unmap_queues_filter VAR_12,
   uint32_t VAR_13, bool VAR_14,
   unsigned int VAR_15)
{
 struct pm4_mes_unmap_queues *VAR_16;

 VAR_16 = (struct pm4_mes_unmap_queues *)VAR_10;
 FUNC_1(VAR_10, 0, sizeof(struct pm4_mes_unmap_queues));

 VAR_16->header.u32All = FUNC_2(VAR_0,
     sizeof(struct pm4_mes_unmap_queues));
 switch (VAR_11) {
 case 135:
 case 134:
  VAR_16->bitfields2.engine_sel =
   VAR_3;
  break;
 case 133:
 case 132:
  VAR_16->bitfields2.engine_sel =
   VAR_4 + VAR_15;
  break;
 default:
  FUNC_0(1, "queue type %d\n", VAR_11);
  break;
 }

 if (VAR_14)
  VAR_16->bitfields2.action =
   VAR_2;
 else
  VAR_16->bitfields2.action =
   VAR_1;

 switch (VAR_12) {
 case 128:
  VAR_16->bitfields2.queue_sel =
   VAR_6;
  VAR_16->bitfields2.num_queues = 1;
  VAR_16->bitfields3b.doorbell_offset0 = VAR_13;
  break;
 case 130:
  VAR_16->bitfields2.queue_sel =
   VAR_5;
  VAR_16->bitfields3a.pasid = VAR_13;
  break;
 case 131:
  VAR_16->bitfields2.queue_sel =
   VAR_8;
  break;
 case 129:

  VAR_16->bitfields2.queue_sel =
   VAR_7;
  break;
 default:
  FUNC_0(1, "filter %d\n", VAR_12);
  break;
 }

 return 0;

}
