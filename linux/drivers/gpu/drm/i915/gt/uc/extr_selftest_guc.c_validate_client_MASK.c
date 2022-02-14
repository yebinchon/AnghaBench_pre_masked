
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_guc_client {int priority; scalar_t__ doorbell_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct intel_guc_client *VAR_2, int VAR_3)
{
 if (VAR_2->priority != VAR_3 ||
     VAR_2->doorbell_id == VAR_1)
  return -VAR_0;
 else
  return 0;
}
