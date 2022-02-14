
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long cur_freq; unsigned long cur_volt; } ;
struct panfrost_device {TYPE_1__ devfreq; int regulator; int clock; } ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct device*,char*,unsigned long,...) ;
 unsigned long FUNC_4 (struct dev_pm_opp*) ;
 unsigned long FUNC_5 (struct dev_pm_opp*) ;
 int FUNC_6 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_7 (struct device*,unsigned long*,int ) ;
 struct panfrost_device* FUNC_8 (int ) ;
 int FUNC_9 (int ,unsigned long,unsigned long) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_0, unsigned long *VAR_1,
       u32 VAR_2)
{
 struct panfrost_device *VAR_3 = FUNC_8(FUNC_10(VAR_0));
 struct dev_pm_opp *VAR_4;
 unsigned long VAR_5 = VAR_3->devfreq.cur_freq;
 unsigned long VAR_6, VAR_7;
 int VAR_8;

 VAR_4 = FUNC_7(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_7 = FUNC_4(VAR_4);
 VAR_6 = FUNC_5(VAR_4);
 FUNC_6(VAR_4);

 if (VAR_5 == VAR_7)
  return 0;





 if (VAR_5 < VAR_7) {
  VAR_8 = FUNC_9(VAR_3->regulator, VAR_6,
         VAR_6);
  if (VAR_8) {
   FUNC_3(VAR_0, "Cannot set voltage %lu uV\n",
    VAR_6);
   return VAR_8;
  }
 }

 VAR_8 = FUNC_2(VAR_3->clock, VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_0, "Cannot set frequency %lu (%d)\n", VAR_7,
   VAR_8);
  FUNC_9(VAR_3->regulator, VAR_3->devfreq.cur_volt,
          VAR_3->devfreq.cur_volt);
  return VAR_8;
 }

 if (VAR_5 > VAR_7) {
  VAR_8 = FUNC_9(VAR_3->regulator, VAR_6,
         VAR_6);
  if (VAR_8)
   FUNC_3(VAR_0, "Cannot set voltage %lu uV\n", VAR_6);
 }

 VAR_3->devfreq.cur_freq = VAR_7;
 VAR_3->devfreq.cur_volt = VAR_6;

 return 0;
}
