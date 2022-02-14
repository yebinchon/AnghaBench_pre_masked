
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {scalar_t__* dpcd; int aux; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int,scalar_t__*,int) ;
 int FUNC_2 (struct intel_dp*) ;

bool
FUNC_3(struct intel_dp *VAR_1)
{
 if (FUNC_1(&VAR_1->aux, 0x000, VAR_1->dpcd,
        sizeof(VAR_1->dpcd)) < 0)
  return 0;

 FUNC_2(VAR_1);

 FUNC_0("DPCD: %*ph\n", (int) sizeof(VAR_1->dpcd), VAR_1->dpcd);

 return VAR_1->dpcd[VAR_0] != 0;
}
