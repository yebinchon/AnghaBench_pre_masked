
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_guc {int shared_data; TYPE_1__* execbuf_client; } ;
struct intel_engine_cs {scalar_t__ guc_id; } ;
struct TYPE_2__ {scalar_t__ stage_id; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct intel_guc*,int ) ;
 int FUNC_3 (struct intel_guc*,scalar_t__*,int ) ;

int FUNC_4(struct intel_guc *VAR_1,
      struct intel_engine_cs *VAR_2)
{
 u32 VAR_3[7];

 FUNC_1(!VAR_1->execbuf_client);

 VAR_3[0] = VAR_0;
 VAR_3[1] = VAR_2->guc_id;
 VAR_3[2] = 0;
 VAR_3[3] = 0;
 VAR_3[4] = 0;
 VAR_3[5] = VAR_1->execbuf_client->stage_id;
 VAR_3[6] = FUNC_2(VAR_1, VAR_1->shared_data);

 return FUNC_3(VAR_1, VAR_3, FUNC_0(VAR_3));
}
