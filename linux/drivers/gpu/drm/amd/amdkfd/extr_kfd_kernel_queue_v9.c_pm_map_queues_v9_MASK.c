
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int type; int sdma_engine_id; scalar_t__ write_ptr; int doorbell_off; } ;
struct queue {TYPE_4__ properties; int gart_mqd_addr; scalar_t__ gws; } ;
struct TYPE_7__ {int doorbell_offset; } ;
struct TYPE_6__ {int num_queues; int engine_sel; int gws_control_queue; int extended_engine_sel; int queue_type; int queue_sel; } ;
struct TYPE_5__ {int u32All; } ;
struct pm4_mes_map_queues {void* wptr_addr_hi; void* wptr_addr_lo; void* mqd_addr_hi; void* mqd_addr_lo; TYPE_3__ bitfields3; TYPE_2__ bitfields2; TYPE_1__ header; } ;
struct packet_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct packet_manager *VAR_10, uint32_t *VAR_11,
  struct queue *VAR_12, bool VAR_13)
{
 struct pm4_mes_map_queues *VAR_14;
 bool VAR_15 = VAR_13;

 VAR_14 = (struct pm4_mes_map_queues *)VAR_11;
 FUNC_2(VAR_11, 0, sizeof(struct pm4_mes_map_queues));

 VAR_14->header.u32All = FUNC_3(VAR_1,
     sizeof(struct pm4_mes_map_queues));
 VAR_14->bitfields2.num_queues = 1;
 VAR_14->bitfields2.queue_sel =
  VAR_6;

 VAR_14->bitfields2.engine_sel =
  VAR_2;
 VAR_14->bitfields2.gws_control_queue = VAR_12->gws ? 1 : 0;
 VAR_14->bitfields2.extended_engine_sel =
  VAR_4;
 VAR_14->bitfields2.queue_type =
  VAR_8;

 switch (VAR_12->properties.type) {
 case 131:
  if (VAR_15)
   VAR_14->bitfields2.queue_type =
  VAR_9;
  break;
 case 130:
  VAR_14->bitfields2.queue_type =
   VAR_7;
  break;
 case 129:
 case 128:
  VAR_15 = 0;
  if (VAR_12->properties.sdma_engine_id < 2)
   VAR_14->bitfields2.engine_sel = VAR_12->properties.sdma_engine_id +
    VAR_3;
  else {
   VAR_14->bitfields2.extended_engine_sel =
    VAR_5;
   VAR_14->bitfields2.engine_sel = VAR_12->properties.sdma_engine_id;
  }
  break;
 default:
  FUNC_0(1, "queue type %d", VAR_12->properties.type);
  return -VAR_0;
 }
 VAR_14->bitfields3.doorbell_offset =
   VAR_12->properties.doorbell_off;

 VAR_14->mqd_addr_lo =
   FUNC_1(VAR_12->gart_mqd_addr);

 VAR_14->mqd_addr_hi =
   FUNC_4(VAR_12->gart_mqd_addr);

 VAR_14->wptr_addr_lo =
   FUNC_1((uint64_t)VAR_12->properties.write_ptr);

 VAR_14->wptr_addr_hi =
   FUNC_4((uint64_t)VAR_12->properties.write_ptr);

 return 0;
}
