
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int doorbell_id; int guc; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct intel_guc_client *VAR_0)
{
 return !VAR_0 || FUNC_0(VAR_0->guc, VAR_0->doorbell_id);
}
