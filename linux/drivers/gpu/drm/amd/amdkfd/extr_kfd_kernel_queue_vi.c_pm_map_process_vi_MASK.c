
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct qcm_process_device {int gds_context_area; int sh_hidden_private_base; int sh_mem_ape1_limit; int sh_mem_ape1_base; int sh_mem_bases; int sh_mem_config; int queue_count; scalar_t__ is_debug; int num_oac; int num_gws; int gds_size; int page_table_base; TYPE_4__* pqm; } ;
struct TYPE_12__ {int num_queues; int num_oac; int num_gws; int gds_size; } ;
struct TYPE_11__ {int page_table_base; } ;
struct TYPE_8__ {int diq_enable; int process_quantum; int pasid; } ;
struct TYPE_7__ {int u32All; } ;
struct pm4_mes_map_process {int gds_addr_hi; int gds_addr_lo; int sh_hidden_private_base_vmid; int sh_mem_ape1_limit; int sh_mem_ape1_base; int sh_mem_bases; int sh_mem_config; TYPE_6__ bitfields10; TYPE_5__ bitfields3; TYPE_2__ bitfields2; TYPE_1__ header; } ;
struct packet_manager {int dummy; } ;
struct TYPE_10__ {TYPE_3__* process; } ;
struct TYPE_9__ {int pasid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct packet_manager *VAR_1, uint32_t *VAR_2,
    struct qcm_process_device *VAR_3)
{
 struct pm4_mes_map_process *VAR_4;

 VAR_4 = (struct pm4_mes_map_process *)VAR_2;

 FUNC_1(VAR_2, 0, sizeof(struct pm4_mes_map_process));

 VAR_4->header.u32All = FUNC_2(VAR_0,
     sizeof(struct pm4_mes_map_process));
 VAR_4->bitfields2.diq_enable = (VAR_3->is_debug) ? 1 : 0;
 VAR_4->bitfields2.process_quantum = 1;
 VAR_4->bitfields2.pasid = VAR_3->pqm->process->pasid;
 VAR_4->bitfields3.page_table_base = VAR_3->page_table_base;
 VAR_4->bitfields10.gds_size = VAR_3->gds_size;
 VAR_4->bitfields10.num_gws = VAR_3->num_gws;
 VAR_4->bitfields10.num_oac = VAR_3->num_oac;
 VAR_4->bitfields10.num_queues = (VAR_3->is_debug) ? 0 : VAR_3->queue_count;

 VAR_4->sh_mem_config = VAR_3->sh_mem_config;
 VAR_4->sh_mem_bases = VAR_3->sh_mem_bases;
 VAR_4->sh_mem_ape1_base = VAR_3->sh_mem_ape1_base;
 VAR_4->sh_mem_ape1_limit = VAR_3->sh_mem_ape1_limit;

 VAR_4->sh_hidden_private_base_vmid = VAR_3->sh_hidden_private_base;

 VAR_4->gds_addr_lo = FUNC_0(VAR_3->gds_context_area);
 VAR_4->gds_addr_hi = FUNC_3(VAR_3->gds_context_area);

 return 0;
}
