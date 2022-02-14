
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct qcm_process_device {int page_table_base; int tba_addr; int tma_addr; int gds_context_area; int sh_mem_bases; int sh_mem_config; int queue_count; scalar_t__ is_debug; int num_oac; int num_gws; int gds_size; TYPE_4__* pqm; } ;
struct TYPE_10__ {int sdma_enable; int num_queues; int num_oac; int num_gws; int gds_size; } ;
struct TYPE_7__ {int diq_enable; int process_quantum; int pasid; } ;
struct TYPE_6__ {int u32All; } ;
struct pm4_mes_map_process {int sq_shader_tba_hi; int sq_shader_tma_hi; int gds_addr_hi; int vm_context_page_table_base_addr_hi32; void* vm_context_page_table_base_addr_lo32; void* gds_addr_lo; void* sq_shader_tma_lo; void* sq_shader_tba_lo; int sh_mem_bases; int sh_mem_config; TYPE_5__ bitfields14; TYPE_2__ bitfields2; TYPE_1__ header; } ;
struct packet_manager {int dummy; } ;
struct TYPE_9__ {TYPE_3__* process; } ;
struct TYPE_8__ {int pasid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct packet_manager *VAR_2,
  uint32_t *VAR_3, struct qcm_process_device *VAR_4)
{
 struct pm4_mes_map_process *VAR_5;
 uint64_t VAR_6 = VAR_4->page_table_base;

 VAR_5 = (struct pm4_mes_map_process *)VAR_3;
 FUNC_1(VAR_3, 0, sizeof(struct pm4_mes_map_process));

 VAR_5->header.u32All = FUNC_2(VAR_0,
     sizeof(struct pm4_mes_map_process));
 VAR_5->bitfields2.diq_enable = (VAR_4->is_debug) ? 1 : 0;
 VAR_5->bitfields2.process_quantum = 1;
 VAR_5->bitfields2.pasid = VAR_4->pqm->process->pasid;
 VAR_5->bitfields14.gds_size = VAR_4->gds_size;
 VAR_5->bitfields14.num_gws = VAR_4->num_gws;
 VAR_5->bitfields14.num_oac = VAR_4->num_oac;
 VAR_5->bitfields14.sdma_enable = 1;

 VAR_5->bitfields14.num_queues = (VAR_4->is_debug) ? 0 : VAR_4->queue_count;

 VAR_5->sh_mem_config = VAR_4->sh_mem_config;
 VAR_5->sh_mem_bases = VAR_4->sh_mem_bases;
 if (VAR_4->tba_addr) {
  VAR_5->sq_shader_tba_lo = FUNC_0(VAR_4->tba_addr >> 8);
  VAR_5->sq_shader_tba_hi = (1 << VAR_1) |
   FUNC_3(VAR_4->tba_addr >> 8);
  VAR_5->sq_shader_tma_lo = FUNC_0(VAR_4->tma_addr >> 8);
  VAR_5->sq_shader_tma_hi = FUNC_3(VAR_4->tma_addr >> 8);
 }

 VAR_5->gds_addr_lo = FUNC_0(VAR_4->gds_context_area);
 VAR_5->gds_addr_hi = FUNC_3(VAR_4->gds_context_area);

 VAR_5->vm_context_page_table_base_addr_lo32 =
   FUNC_0(VAR_6);
 VAR_5->vm_context_page_table_base_addr_hi32 =
   FUNC_3(VAR_6);

 return 0;
}
