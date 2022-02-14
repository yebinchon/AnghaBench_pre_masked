
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int dummy; } ;
struct guc_doorbell_info {scalar_t__ cookie; int db_status; } ;


 int VAR_0 ;
 struct guc_doorbell_info* FUNC_0 (struct intel_guc_client*) ;

__attribute__((used)) static void FUNC_1(struct intel_guc_client *VAR_1)
{
 struct guc_doorbell_info *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->db_status = VAR_0;
 VAR_2->cookie = 0;
}
