
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_guc_client {int guc; int doorbell_id; } ;
struct guc_doorbell_info {int db_status; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 struct guc_doorbell_info* FUNC_2 (struct intel_guc_client*) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct intel_guc_client *VAR_1)
{
 struct guc_doorbell_info *VAR_2;
 u16 VAR_3 = VAR_1->doorbell_id;

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->db_status = VAR_0;





 if (FUNC_3(!FUNC_1(VAR_1->guc, VAR_3), 10))
  FUNC_0(1, "Doorbell never became invalid after disable\n");
}
