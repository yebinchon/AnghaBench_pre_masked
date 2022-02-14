
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_dp {int* dpcd; int aux; } ;
typedef int dpcd_ext ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int**,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int*,int) ;

__attribute__((used)) static void
FUNC_5(struct intel_dp *VAR_4)
{
 u8 VAR_5[6];
 if (!(VAR_4->dpcd[VAR_3] &
       VAR_2))
  return;

 if (FUNC_2(&VAR_4->aux, VAR_0,
        &VAR_5, sizeof(VAR_5)) != sizeof(VAR_5)) {
  FUNC_1("DPCD failed read at extended capabilities\n");
  return;
 }

 if (VAR_4->dpcd[VAR_1] > VAR_5[VAR_1]) {
  FUNC_0("DPCD extended DPCD rev less than base DPCD rev\n");
  return;
 }

 if (!FUNC_3(VAR_4->dpcd, VAR_5, sizeof(VAR_5)))
  return;

 FUNC_0("Base DPCD: %*ph\n",
        (int)sizeof(VAR_4->dpcd), VAR_4->dpcd);

 FUNC_4(VAR_4->dpcd, VAR_5, sizeof(VAR_5));
}
