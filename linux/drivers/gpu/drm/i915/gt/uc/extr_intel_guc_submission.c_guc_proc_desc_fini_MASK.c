
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int dummy; } ;
struct guc_process_desc {int dummy; } ;


 struct guc_process_desc* FUNC_0 (struct intel_guc_client*) ;
 int FUNC_1 (struct guc_process_desc*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct intel_guc_client *VAR_0)
{
 struct guc_process_desc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
