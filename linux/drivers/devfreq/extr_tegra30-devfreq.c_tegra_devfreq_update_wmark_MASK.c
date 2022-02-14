
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_devfreq_device {TYPE_1__* config; } ;
struct tegra_devfreq {int cur_freq; } ;
struct TYPE_2__ {int boost_down_threshold; int boost_up_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_devfreq_device*,int ,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_devfreq *VAR_3,
           struct tegra_devfreq_device *VAR_4)
{
 u32 VAR_5 = VAR_3->cur_freq * VAR_2;

 FUNC_0(VAR_4, FUNC_1(VAR_5, VAR_4->config->boost_up_threshold),
        VAR_1);

 FUNC_0(VAR_4, FUNC_1(VAR_5, VAR_4->config->boost_down_threshold),
        VAR_0);
}
