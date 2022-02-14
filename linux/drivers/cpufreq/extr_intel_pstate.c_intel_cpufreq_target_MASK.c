
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {size_t cpu; int cur; } ;
struct cpufreq_freqs {unsigned int new; int old; } ;
struct TYPE_3__ {int scaling; int current_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;
struct TYPE_4__ {int (* get_val ) (struct cpudata*,int) ;} ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cpudata** VAR_2 ;
 int FUNC_2 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_3 (struct cpufreq_policy*,struct cpufreq_freqs*,int) ;
 int FUNC_4 (struct cpudata*,int ,int) ;
 int FUNC_5 (struct cpudata*,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_6 (struct cpudata*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (size_t,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct cpufreq_policy *VAR_4,
    unsigned int VAR_5,
    unsigned int VAR_6)
{
 struct cpudata *VAR_7 = VAR_2[VAR_4->cpu];
 struct cpufreq_freqs VAR_8;
 int VAR_9, VAR_10;

 FUNC_7();

 VAR_8.old = VAR_4->cur;
 VAR_8.new = VAR_5;

 FUNC_2(VAR_4, &VAR_8);
 switch (VAR_6) {
 case 128:
  VAR_9 = FUNC_1(VAR_8.new, VAR_7->pstate.scaling);
  break;
 case 129:
  VAR_9 = VAR_8.new / VAR_7->pstate.scaling;
  break;
 default:
  VAR_9 = FUNC_0(VAR_8.new, VAR_7->pstate.scaling);
  break;
 }
 VAR_9 = FUNC_5(VAR_7, VAR_9);
 VAR_10 = VAR_7->pstate.current_pstate;
 if (VAR_9 != VAR_7->pstate.current_pstate) {
  VAR_7->pstate.current_pstate = VAR_9;
  FUNC_8(VAR_4->cpu, VAR_1,
         VAR_3.get_val(VAR_7, VAR_9));
 }
 VAR_8.new = VAR_9 * VAR_7->pstate.scaling;
 FUNC_4(VAR_7, VAR_0, VAR_10);
 FUNC_3(VAR_4, &VAR_8, 0);

 return 0;
}
