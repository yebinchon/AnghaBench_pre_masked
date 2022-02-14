
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc_client {scalar_t__ doorbell_id; TYPE_1__* guc; } ;
struct TYPE_2__ {int doorbell_bitmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_1(struct intel_guc_client *VAR_1)
{
 if (VAR_1->doorbell_id == VAR_0)
  return 0;

 return FUNC_0(VAR_1->doorbell_id, VAR_1->guc->doorbell_bitmap);
}
