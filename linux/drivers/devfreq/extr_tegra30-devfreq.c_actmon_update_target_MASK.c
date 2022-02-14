
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_devfreq_device {int target_freq; int avg_count; TYPE_1__* config; scalar_t__ boost_freq; } ;
struct tegra_devfreq {int dummy; } ;
struct TYPE_2__ {int avg_dependency_threshold; int boost_up_threshold; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct tegra_devfreq*,unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int,unsigned int) ;
 int FUNC_3 (int,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tegra_devfreq *VAR_1,
     struct tegra_devfreq_device *VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4 = 0;
 unsigned int VAR_5;

 if (VAR_2->config->avg_dependency_threshold) {
  VAR_3 = FUNC_1(0);
  VAR_4 = FUNC_0(VAR_1, VAR_3);
 }

 VAR_2->target_freq = VAR_2->avg_count / VAR_0;
 VAR_5 = 100 * 100 / VAR_2->config->boost_up_threshold;
 VAR_2->target_freq = FUNC_2(VAR_2->target_freq, VAR_5);
 VAR_2->target_freq += VAR_2->boost_freq;

 if (VAR_2->avg_count >= VAR_2->config->avg_dependency_threshold)
  VAR_2->target_freq = FUNC_3(VAR_2->target_freq, VAR_4);
}
