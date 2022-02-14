
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int stage_id; int guc; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct intel_guc_client*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct intel_guc_client*,int ) ;
 int FUNC_5 (struct intel_guc_client*) ;

__attribute__((used)) static int FUNC_6(struct intel_guc_client *VAR_1)
{
 int VAR_2;

 FUNC_1(!FUNC_5(VAR_1));

 FUNC_2(VAR_1);
 VAR_2 = FUNC_3(VAR_1->guc, VAR_1->stage_id);
 if (VAR_2)
  FUNC_0("Couldn't destroy client %u doorbell: %d\n",
     VAR_1->stage_id, VAR_2);

 FUNC_4(VAR_1, VAR_0);

 return VAR_2;
}
