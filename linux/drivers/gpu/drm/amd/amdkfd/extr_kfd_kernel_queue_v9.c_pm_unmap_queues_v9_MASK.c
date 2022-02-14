
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_8__ {unsigned int engine_sel; int num_queues; int queue_sel; int action; void* extended_engine_sel; } ;
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
 unsigned int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (void**,int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_3(struct packet_manager *VAR_12, uint32_t *VAR_13,
   enum kfd_queue_type VAR_14,
   enum kfd_unmap_queues_filter VAR_15,
   uint32_t VAR_16, bool VAR_17,
   unsigned int VAR_18)
{
 struct pm4_mes_unmap_queues *VAR_19;

 VAR_19 = (struct pm4_mes_unmap_queues *)VAR_13;
 FUNC_1(VAR_13, 0, sizeof(struct pm4_mes_unmap_queues));

 VAR_19->header.u32All = FUNC_2(VAR_1,
     sizeof(struct pm4_mes_unmap_queues));
 switch (VAR_14) {
 case 135:
 case 134:
  VAR_19->bitfields2.extended_engine_sel =
   VAR_6;
  VAR_19->bitfields2.engine_sel =
   VAR_4;
  break;
 case 133:
 case 132:
  if (VAR_18 < 2) {
   VAR_19->bitfields2.extended_engine_sel =
    VAR_6;
   VAR_19->bitfields2.engine_sel =
    VAR_5 + VAR_18;
  } else {
   VAR_19->bitfields2.extended_engine_sel =
    VAR_7;
   VAR_19->bitfields2.engine_sel = VAR_18;
  }
  break;
 default:
  FUNC_0(1, "queue type %d", VAR_14);
  return -VAR_0;
 }

 if (VAR_17)
  VAR_19->bitfields2.action =
   VAR_3;
 else
  VAR_19->bitfields2.action =
   VAR_2;

 switch (VAR_15) {
 case 128:
  VAR_19->bitfields2.queue_sel =
   VAR_9;
  VAR_19->bitfields2.num_queues = 1;
  VAR_19->bitfields3b.doorbell_offset0 = VAR_16;
  break;
 case 130:
  VAR_19->bitfields2.queue_sel =
   VAR_8;
  VAR_19->bitfields3a.pasid = VAR_16;
  break;
 case 131:
  VAR_19->bitfields2.queue_sel =
   VAR_11;
  break;
 case 129:

  VAR_19->bitfields2.queue_sel =
   VAR_10;
  break;
 default:
  FUNC_0(1, "filter %d", VAR_15);
  return -VAR_0;
 }

 return 0;

}
