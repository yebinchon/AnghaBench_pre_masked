
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int dummy; } ;
struct intel_guc {struct intel_guc_client* execbuf_client; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct intel_guc_client*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct intel_guc_client*) ;
 int FUNC_3 (struct intel_guc_client*) ;
 struct intel_guc_client* FUNC_4 (struct intel_guc*,int ) ;

__attribute__((used)) static int FUNC_5(struct intel_guc *VAR_1)
{
 struct intel_guc_client *VAR_2;

 FUNC_1(VAR_1->execbuf_client);

 VAR_2 = FUNC_4(VAR_1, VAR_0);
 if (FUNC_2(VAR_2)) {
  FUNC_0("Failed to create GuC client for submission!\n");
  return FUNC_3(VAR_2);
 }
 VAR_1->execbuf_client = VAR_2;

 return 0;
}
