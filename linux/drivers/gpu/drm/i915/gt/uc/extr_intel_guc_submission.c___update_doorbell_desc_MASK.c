
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_guc_client {int dummy; } ;
struct guc_stage_desc {int db_id; } ;


 struct guc_stage_desc* FUNC_0 (struct intel_guc_client*) ;

__attribute__((used)) static void FUNC_1(struct intel_guc_client *VAR_0, u16 VAR_1)
{
 struct guc_stage_desc *VAR_2;


 VAR_2 = FUNC_0(VAR_0);
 VAR_2->db_id = VAR_1;
}
