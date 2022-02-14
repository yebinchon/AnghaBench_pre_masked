
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int cur; } ;
struct cpufreq_freqs {scalar_t__ new; scalar_t__ flags; int old; } ;
struct TYPE_2__ {scalar_t__ frequency; scalar_t__ driver_data; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_freqs*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct cpufreq_policy*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct cpufreq_policy *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; (VAR_1[VAR_4].frequency != VAR_0); VAR_4++) {
  if (VAR_1[VAR_4].driver_data == VAR_2) {
   struct cpufreq_freqs VAR_5;

   VAR_5.old = VAR_3->cur;
   VAR_5.new = VAR_1[VAR_4].frequency;
   VAR_5.flags = 0;

   FUNC_0(VAR_3, &VAR_5);
   FUNC_2(VAR_3, VAR_4);
   FUNC_1(VAR_3, &VAR_5, 0);
   break;
  }
 }
 return 0;
}
