
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_driver_req {int dummy; } ;
struct ath_diag {int ad_out_size; int ad_name; scalar_t__ ad_out_data; int ad_id; } ;
typedef int state ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int noiseImmunityLevel; int cckNoiseImmunityLevel; int spurImmunityLevel; int firstepLevel; int ofdmWeakSigDetectOff; int cckWeakSigThreshold; int mrcCck; } ;
typedef TYPE_1__ HAL_ANI_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath_driver_req*,int ,struct ath_diag*) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_4(struct ath_driver_req *VAR_2, const char *VAR_3)
{
 struct ath_diag VAR_4;
 HAL_ANI_STATE VAR_5;





 FUNC_3(VAR_4.ad_name, VAR_3, sizeof (VAR_4.ad_name));

 VAR_4.ad_id = VAR_0;
 VAR_4.ad_out_data = (caddr_t) &VAR_5;
 VAR_4.ad_out_size = sizeof(VAR_5);

 if (FUNC_0(VAR_2, VAR_1, &VAR_4) < 0)
  FUNC_1(1, "%s", VAR_4.ad_name);


 FUNC_2("  ofdm_noise_immunity_level=%d\n", VAR_5.noiseImmunityLevel);
 FUNC_2("  cck_noise_immunity_level=%d\n", VAR_5.cckNoiseImmunityLevel);
 FUNC_2("  spur_immunity_level=%d\n", VAR_5.spurImmunityLevel);
 FUNC_2("  firstep_level=%d\n", VAR_5.firstepLevel);
 FUNC_2("  ofdm_weak_signal_detect=%d\n", VAR_5.ofdmWeakSigDetectOff);
 FUNC_2("  cck_weak_signal_threshold=%d\n", VAR_5.cckWeakSigThreshold);
 FUNC_2("  mrc_cck=%d\n", VAR_5.mrcCck);

}
