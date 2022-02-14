
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int priority; int stage_id; } ;
struct guc_process_desc {int priority; int wq_status; int wq_size_bytes; int stage_id; scalar_t__ db_base_addr; scalar_t__ wq_base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_guc_client*) ;
 struct guc_process_desc* FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct intel_guc_client *VAR_2)
{
 struct guc_process_desc *VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_2), 0, sizeof(*VAR_3));







 VAR_3->wq_base_addr = 0;
 VAR_3->db_base_addr = 0;

 VAR_3->stage_id = VAR_2->stage_id;
 VAR_3->wq_size_bytes = VAR_0;
 VAR_3->wq_status = VAR_1;
 VAR_3->priority = VAR_2->priority;
}
