
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_devfreq_device {scalar_t__ avg_count; scalar_t__ boost_freq; TYPE_1__* config; } ;
struct tegra_devfreq {scalar_t__ max_freq; } ;
struct TYPE_2__ {scalar_t__ avg_dependency_threshold; int boost_down_coeff; int boost_up_coeff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct tegra_devfreq*) ;
 void* FUNC_1 (struct tegra_devfreq_device*,int ) ;
 int FUNC_2 (struct tegra_devfreq_device*,int,int ) ;
 void* FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct tegra_devfreq*,struct tegra_devfreq_device*) ;

__attribute__((used)) static void FUNC_5(struct tegra_devfreq *VAR_9,
         struct tegra_devfreq_device *VAR_10)
{
 u32 VAR_11, VAR_12;

 VAR_10->avg_count = FUNC_1(VAR_10, VAR_1);
 FUNC_4(VAR_9, VAR_10);

 VAR_11 = FUNC_1(VAR_10, VAR_7);
 VAR_12 = FUNC_1(VAR_10, VAR_2);

 if (VAR_11 & VAR_6) {



  VAR_10->boost_freq = FUNC_3(VAR_10->boost_freq,
          VAR_10->config->boost_up_coeff);
  VAR_10->boost_freq += VAR_0;

  VAR_12 |= VAR_4;

  if (VAR_10->boost_freq >= VAR_9->max_freq)
   VAR_10->boost_freq = VAR_9->max_freq;
  else
   VAR_12 |= VAR_3;
 } else if (VAR_11 & VAR_5) {




  VAR_10->boost_freq = FUNC_3(VAR_10->boost_freq,
          VAR_10->config->boost_down_coeff);

  VAR_12 |= VAR_3;

  if (VAR_10->boost_freq < (VAR_0 >> 1))
   VAR_10->boost_freq = 0;
  else
   VAR_12 |= VAR_4;
 }

 if (VAR_10->config->avg_dependency_threshold) {
  if (VAR_10->avg_count >= VAR_10->config->avg_dependency_threshold)
   VAR_12 |= VAR_4;
  else if (VAR_10->boost_freq == 0)
   VAR_12 &= ~VAR_4;
 }

 FUNC_2(VAR_10, VAR_12, VAR_2);

 FUNC_2(VAR_10, VAR_8, VAR_7);

 FUNC_0(VAR_9);
}
