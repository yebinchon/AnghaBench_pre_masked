
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_guc_client {int wq_lock; } ;
struct guc_doorbell_info {scalar_t__ db_status; int cookie; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct guc_doorbell_info* FUNC_3 (struct intel_guc_client*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct intel_guc_client *VAR_1)
{
 struct guc_doorbell_info *VAR_2;
 u32 VAR_3;

 FUNC_4(&VAR_1->wq_lock);


 VAR_2 = FUNC_3(VAR_1);





 VAR_3 = FUNC_1(VAR_2->cookie);
 FUNC_2(FUNC_5(&VAR_2->cookie, VAR_3 + 1 ?: VAR_3 + 2) != VAR_3);


 FUNC_0(VAR_2->db_status != VAR_0);
}
