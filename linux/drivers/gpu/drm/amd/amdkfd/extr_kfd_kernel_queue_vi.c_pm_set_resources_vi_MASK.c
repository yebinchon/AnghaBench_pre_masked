
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct scheduling_resources {int queue_mask; int gws_mask; int gds_heap_size; int gds_heap_base; int oac_mask; int vmid_mask; } ;
struct TYPE_8__ {int gds_heap_size; int gds_heap_base; } ;
struct TYPE_7__ {int oac_mask; } ;
struct TYPE_6__ {int unmap_latency; int vmid_mask; int queue_type; } ;
struct TYPE_5__ {int u32All; } ;
struct pm4_mes_set_resources {void* queue_mask_hi; void* queue_mask_lo; void* gws_mask_hi; void* gws_mask_lo; TYPE_4__ bitfields8; TYPE_3__ bitfields7; TYPE_2__ bitfields2; TYPE_1__ header; } ;
struct packet_manager {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 void* FUNC_3 (int ) ;

int FUNC_4(struct packet_manager *VAR_3, uint32_t *VAR_4,
    struct scheduling_resources *VAR_5)
{
 struct pm4_mes_set_resources *VAR_6;

 VAR_6 = (struct pm4_mes_set_resources *)VAR_4;
 FUNC_1(VAR_4, 0, sizeof(struct pm4_mes_set_resources));

 VAR_6->header.u32All = FUNC_2(VAR_0,
     sizeof(struct pm4_mes_set_resources));

 VAR_6->bitfields2.queue_type =
   VAR_2;
 VAR_6->bitfields2.vmid_mask = VAR_5->vmid_mask;
 VAR_6->bitfields2.unmap_latency = VAR_1 / 100;
 VAR_6->bitfields7.oac_mask = VAR_5->oac_mask;
 VAR_6->bitfields8.gds_heap_base = VAR_5->gds_heap_base;
 VAR_6->bitfields8.gds_heap_size = VAR_5->gds_heap_size;

 VAR_6->gws_mask_lo = FUNC_0(VAR_5->gws_mask);
 VAR_6->gws_mask_hi = FUNC_3(VAR_5->gws_mask);

 VAR_6->queue_mask_lo = FUNC_0(VAR_5->queue_mask);
 VAR_6->queue_mask_hi = FUNC_3(VAR_5->queue_mask);

 return 0;
}
