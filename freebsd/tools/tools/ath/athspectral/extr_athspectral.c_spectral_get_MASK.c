
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ad_id; int ad_out_size; int ad_name; scalar_t__ ad_out_data; scalar_t__ ad_in_size; int * ad_in_data; } ;
struct spectralhandler {TYPE_3__ atd; int s; } ;
typedef int pe ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int ss_enabled; int ss_active; int ss_count; int ss_fft_period; int ss_period; int ss_short_report; int ss_spectral_pri; int radar_bin_thresh_sel; } ;
typedef TYPE_1__ HAL_SPECTRAL_PARAM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(struct spectralhandler *VAR_3)
{
 HAL_SPECTRAL_PARAM VAR_4;

 VAR_3->atd.ad_id = VAR_2 | VAR_0;
 FUNC_2(&VAR_4, 0, sizeof(VAR_4));

 VAR_3->atd.ad_in_data = ((void*)0);
 VAR_3->atd.ad_in_size = 0;
 VAR_3->atd.ad_out_data = (caddr_t) &VAR_4;
 VAR_3->atd.ad_out_size = sizeof(VAR_4);

 if (FUNC_1(VAR_3->s, VAR_1, &VAR_3->atd) < 0)
  FUNC_0(1, "%s", VAR_3->atd.ad_name);

 FUNC_3("Spectral parameters (raw):\n");
 FUNC_3("   ss_enabled: %d\n", VAR_4.ss_enabled);
 FUNC_3("   ss_active: %d\n", VAR_4.ss_active);
 FUNC_3("   ss_count: %d\n", VAR_4.ss_count);
 FUNC_3("   ss_fft_period: %d\n", VAR_4.ss_fft_period);
 FUNC_3("   ss_period: %d\n", VAR_4.ss_period);
 FUNC_3("   ss_short_report: %d\n", VAR_4.ss_short_report);
 FUNC_3("   ss_spectral_pri: %d\n", VAR_4.ss_spectral_pri);
 FUNC_3("   radar_bin_thresh_sel: %d\n", VAR_4.radar_bin_thresh_sel);
}
