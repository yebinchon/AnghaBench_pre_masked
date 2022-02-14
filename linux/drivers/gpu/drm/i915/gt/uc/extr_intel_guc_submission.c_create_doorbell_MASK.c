
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int stage_id; int guc; int doorbell_id; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct intel_guc_client*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct intel_guc_client*) ;
 int FUNC_5 (struct intel_guc_client*,int ) ;
 int FUNC_6 (struct intel_guc_client*) ;

__attribute__((used)) static int FUNC_7(struct intel_guc_client *VAR_2)
{
 int VAR_3;

 if (FUNC_1(!FUNC_6(VAR_2)))
  return -VAR_0;

 FUNC_5(VAR_2, VAR_2->doorbell_id);
 FUNC_4(VAR_2);

 VAR_3 = FUNC_3(VAR_2->guc, VAR_2->stage_id);
 if (VAR_3) {
  FUNC_2(VAR_2);
  FUNC_5(VAR_2, VAR_1);
  FUNC_0("Couldn't create client %u doorbell: %d\n",
     VAR_2->stage_id, VAR_3);
  return VAR_3;
 }

 return 0;
}
