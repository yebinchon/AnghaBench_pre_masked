
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rk3399_dmcfreq {unsigned long rate; unsigned long odt_dis_freq; unsigned long volt; int lock; int vdd_center; int dmc_clk; int odt_pd_arg1; int odt_pd_arg0; } ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;
struct arm_smccc_res {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int,int ,int ,int ,struct arm_smccc_res*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (struct device*,char*,unsigned long,...) ;
 struct rk3399_dmcfreq* FUNC_6 (struct device*) ;
 unsigned long FUNC_7 (struct dev_pm_opp*) ;
 unsigned long FUNC_8 (struct dev_pm_opp*) ;
 int FUNC_9 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_10 (struct device*,unsigned long*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_2, unsigned long *VAR_3,
     u32 VAR_4)
{
 struct rk3399_dmcfreq *VAR_5 = FUNC_6(VAR_2);
 struct dev_pm_opp *VAR_6;
 unsigned long VAR_7 = VAR_5->rate;
 unsigned long VAR_8, VAR_9;
 struct arm_smccc_res VAR_10;
 bool VAR_11 = 0;
 int VAR_12;

 VAR_6 = FUNC_10(VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_9 = FUNC_7(VAR_6);
 VAR_8 = FUNC_8(VAR_6);
 FUNC_9(VAR_6);

 if (VAR_5->rate == VAR_9)
  return 0;

 FUNC_11(&VAR_5->lock);

 if (VAR_9 >= VAR_5->odt_dis_freq)
  VAR_11 = 1;






 FUNC_2(VAR_1, VAR_5->odt_pd_arg0,
        VAR_5->odt_pd_arg1,
        VAR_0,
        VAR_11, 0, 0, 0, &VAR_10);





 if (VAR_7 < VAR_9) {
  VAR_12 = FUNC_13(VAR_5->vdd_center, VAR_8,
         VAR_8);
  if (VAR_12) {
   FUNC_5(VAR_2, "Cannot set voltage %lu uV\n",
    VAR_8);
   goto out;
  }
 }

 VAR_12 = FUNC_4(VAR_5->dmc_clk, VAR_9);
 if (VAR_12) {
  FUNC_5(VAR_2, "Cannot set frequency %lu (%d)\n", VAR_9,
   VAR_12);
  FUNC_13(VAR_5->vdd_center, VAR_5->volt,
          VAR_5->volt);
  goto out;
 }







 VAR_5->rate = FUNC_3(VAR_5->dmc_clk);


 if (VAR_5->rate != VAR_9) {
  FUNC_5(VAR_2, "Got wrong frequency, Request %lu, Current %lu\n",
   VAR_9, VAR_5->rate);
  FUNC_13(VAR_5->vdd_center, VAR_5->volt,
          VAR_5->volt);
  goto out;
 } else if (VAR_7 > VAR_9)
  VAR_12 = FUNC_13(VAR_5->vdd_center, VAR_8,
         VAR_8);
 if (VAR_12)
  FUNC_5(VAR_2, "Cannot set voltage %lu uV\n", VAR_8);

 VAR_5->rate = VAR_9;
 VAR_5->volt = VAR_8;

out:
 FUNC_12(&VAR_5->lock);
 return VAR_12;
}
