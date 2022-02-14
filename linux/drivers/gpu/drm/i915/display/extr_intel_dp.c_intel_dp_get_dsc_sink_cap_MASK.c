
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int* dpcd; scalar_t__* edp_dpcd; int fec_capable; int aux; int dsc_dpcd; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct intel_dp *VAR_4)
{




 FUNC_5(VAR_4->dsc_dpcd, 0, sizeof(VAR_4->dsc_dpcd));


 VAR_4->fec_capable = 0;


 if (VAR_4->dpcd[VAR_0] >= 0x14 ||
     VAR_4->edp_dpcd[0] >= VAR_2) {
  if (FUNC_2(&VAR_4->aux, VAR_1,
         VAR_4->dsc_dpcd,
         sizeof(VAR_4->dsc_dpcd)) < 0)
   FUNC_1("Failed to read DPCD register 0x%x\n",
      VAR_1);

  FUNC_0("DSC DPCD: %*ph\n",
         (int)sizeof(VAR_4->dsc_dpcd),
         VAR_4->dsc_dpcd);


  if (!FUNC_4(VAR_4) &&
      FUNC_3(&VAR_4->aux, VAR_3,
          &VAR_4->fec_capable) < 0)
   FUNC_1("Failed to read FEC DPCD register\n");

  FUNC_0("FEC CAPABILITY: %x\n", VAR_4->fec_capable);
 }
}
