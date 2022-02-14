
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_devfreq_device {int target_freq; int avg_count; } ;
struct tegra_devfreq {int cur_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct tegra_devfreq_device*,int,int ) ;
 int FUNC_1 (struct tegra_devfreq*,struct tegra_devfreq_device*) ;
 int FUNC_2 (struct tegra_devfreq*,struct tegra_devfreq_device*) ;

__attribute__((used)) static void FUNC_3(struct tegra_devfreq *VAR_19,
       struct tegra_devfreq_device *VAR_20)
{
 u32 VAR_21 = 0;

 VAR_20->target_freq = VAR_19->cur_freq;

 VAR_20->avg_count = VAR_19->cur_freq * VAR_18;
 FUNC_0(VAR_20, VAR_20->avg_count, VAR_15);

 FUNC_1(VAR_19, VAR_20);
 FUNC_2(VAR_19, VAR_20);

 FUNC_0(VAR_20, VAR_3, VAR_4);
 FUNC_0(VAR_20, VAR_17, VAR_16);

 VAR_21 |= VAR_13;
 VAR_21 |= (VAR_1 - 1)
  << VAR_14;
 VAR_21 |= (VAR_2 - 1)
  << VAR_11;
 VAR_21 |= (VAR_0 - 1)
  << VAR_9;
 VAR_21 |= VAR_6;
 VAR_21 |= VAR_7;
 VAR_21 |= VAR_10;
 VAR_21 |= VAR_8;
 VAR_21 |= VAR_12;

 FUNC_0(VAR_20, VAR_21, VAR_5);
}
