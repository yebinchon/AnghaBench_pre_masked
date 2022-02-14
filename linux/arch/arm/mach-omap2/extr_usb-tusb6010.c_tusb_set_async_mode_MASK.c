
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_timings {int dummy; } ;
struct gpmc_device_timings {int t_ceasu; unsigned int t_avdasu; int t_ce_avd; unsigned int t_avdp_r; unsigned int t_oeasu; int t_oe; int t_cez_r; int t_cez_w; unsigned int t_avdp_w; unsigned int t_weasu; int t_wpl; int cyc_aavdh_we; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct gpmc_timings*,int *,struct gpmc_device_timings*) ;
 int FUNC_1 (int ,struct gpmc_timings*,int *) ;
 int FUNC_2 (struct gpmc_device_timings*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(unsigned VAR_2)
{
 struct gpmc_device_timings VAR_3;
 struct gpmc_timings VAR_4;
 unsigned VAR_5 = VAR_2 + 3000;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.t_ceasu = 8 * 1000;
 VAR_3.t_avdasu = VAR_5 - 7000;
 VAR_3.t_ce_avd = 1000;
 VAR_3.t_avdp_r = VAR_5;
 VAR_3.t_oeasu = VAR_5 + 1000;
 VAR_3.t_oe = 300;
 VAR_3.t_cez_r = 7000;
 VAR_3.t_cez_w = VAR_3.t_cez_r;
 VAR_3.t_avdp_w = VAR_5;
 VAR_3.t_weasu = VAR_5 + 1000;
 VAR_3.t_wpl = 300;
 VAR_3.cyc_aavdh_we = 1;

 FUNC_0(&VAR_4, &VAR_1, &VAR_3);

 return FUNC_1(VAR_0, &VAR_4, &VAR_1);
}
