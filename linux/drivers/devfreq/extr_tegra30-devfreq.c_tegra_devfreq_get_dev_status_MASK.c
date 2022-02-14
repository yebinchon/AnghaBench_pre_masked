
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_devfreq_device {int dummy; } ;
struct tegra_devfreq {struct tegra_devfreq_device* devices; int cur_freq; } ;
struct device {int dummy; } ;
struct devfreq_dev_status {unsigned long current_frequency; int busy_time; unsigned long total_time; struct tegra_devfreq* private_data; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 size_t VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 struct tegra_devfreq* FUNC_1 (struct device*) ;
 int FUNC_2 (struct tegra_devfreq_device*,int ) ;
 int FUNC_3 (int,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_5,
     struct devfreq_dev_status *VAR_6)
{
 struct tegra_devfreq *VAR_7 = FUNC_1(VAR_5);
 struct tegra_devfreq_device *VAR_8;
 unsigned long VAR_9;

 VAR_9 = FUNC_0(VAR_7->cur_freq);


 VAR_6->private_data = VAR_7;


 VAR_6->current_frequency = VAR_9 * VAR_3;

 VAR_8 = &VAR_7->devices[VAR_4];


 VAR_6->busy_time = FUNC_2(VAR_8, VAR_0);


 VAR_6->busy_time *= 100 / VAR_2;


 VAR_6->total_time = VAR_1 * VAR_9;

 VAR_6->busy_time = FUNC_3(VAR_6->busy_time, VAR_6->total_time);

 return 0;
}
