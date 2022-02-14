
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_devfreq_device {int avg_count; } ;
struct tegra_devfreq {int max_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tegra_devfreq_device*,int,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct tegra_devfreq *VAR_5,
        struct tegra_devfreq_device *VAR_6)
{
 u32 VAR_7 = VAR_6->avg_count;
 u32 VAR_8 = VAR_5->max_freq * VAR_0 / VAR_4;
 u32 VAR_9 = VAR_8 * VAR_3;

 FUNC_0(VAR_6, VAR_7 + VAR_9, VAR_2);

 VAR_7 = FUNC_1(VAR_6->avg_count, VAR_9);
 FUNC_0(VAR_6, VAR_7 - VAR_9, VAR_1);
}
