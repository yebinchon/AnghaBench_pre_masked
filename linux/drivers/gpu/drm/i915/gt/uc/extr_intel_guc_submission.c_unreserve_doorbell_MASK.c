
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_guc_client {int doorbell_id; TYPE_1__* guc; } ;
struct TYPE_2__ {int doorbell_bitmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct intel_guc_client*) ;

__attribute__((used)) static void FUNC_3(struct intel_guc_client *VAR_1)
{
 FUNC_0(!FUNC_2(VAR_1));

 FUNC_1(VAR_1->doorbell_id, VAR_1->guc->doorbell_bitmap);
 VAR_1->doorbell_id = VAR_0;
}
