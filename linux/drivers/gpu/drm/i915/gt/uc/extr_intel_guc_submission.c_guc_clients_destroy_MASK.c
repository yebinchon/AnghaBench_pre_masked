
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int dummy; } ;
struct intel_guc {int execbuf_client; } ;


 struct intel_guc_client* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_guc_client*) ;

__attribute__((used)) static void FUNC_2(struct intel_guc *VAR_0)
{
 struct intel_guc_client *VAR_1;

 VAR_1 = FUNC_0(&VAR_0->execbuf_client);
 if (VAR_1)
  FUNC_1(VAR_1);
}
