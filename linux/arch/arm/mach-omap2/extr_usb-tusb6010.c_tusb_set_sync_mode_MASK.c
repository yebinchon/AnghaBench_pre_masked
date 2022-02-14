
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpmc_timings {int dummy; } ;
struct gpmc_device_timings {int clk; int t_bacc; int t_ces; int t_ceasu; unsigned int t_avdasu; int t_ce_avd; unsigned int t_avdp_r; int cyc_aavdh_oe; int cyc_oe; int t_ce_rdyz; unsigned int t_avdp_w; int cyc_aavdh_we; int cyc_wpl; } ;
typedef int dev_t ;


 int FUNC_0 (struct gpmc_timings*,int *,struct gpmc_device_timings*) ;
 int FUNC_1 (int ,struct gpmc_timings*,int *) ;
 int FUNC_2 (struct gpmc_device_timings*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(unsigned VAR_2)
{
 struct gpmc_device_timings VAR_3;
 struct gpmc_timings VAR_4;
 unsigned VAR_5 = VAR_2 + 3000;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_3.clk = 11100;
 VAR_3.t_bacc = 1000;
 VAR_3.t_ces = 1000;
 VAR_3.t_ceasu = 8 * 1000;
 VAR_3.t_avdasu = VAR_5 - 7000;
 VAR_3.t_ce_avd = 1000;
 VAR_3.t_avdp_r = VAR_5;
 VAR_3.cyc_aavdh_oe = 3;
 VAR_3.cyc_oe = 5;
 VAR_3.t_ce_rdyz = 7000;
 VAR_3.t_avdp_w = VAR_5;
 VAR_3.cyc_aavdh_we = 3;
 VAR_3.cyc_wpl = 6;

 FUNC_0(&VAR_4, &VAR_1, &VAR_3);

 return FUNC_1(VAR_0, &VAR_4, &VAR_1);
}
