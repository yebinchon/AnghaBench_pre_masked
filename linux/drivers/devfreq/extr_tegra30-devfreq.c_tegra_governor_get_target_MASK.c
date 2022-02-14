
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_devfreq_device {int target_freq; } ;
struct tegra_devfreq {struct tegra_devfreq_device* devices; } ;
struct devfreq_dev_status {struct tegra_devfreq* private_data; } ;
struct devfreq {struct devfreq_dev_status last_status; } ;


 unsigned int FUNC_0 (struct tegra_devfreq_device*) ;
 unsigned long VAR_0 ;
 int FUNC_1 (struct tegra_devfreq*,struct tegra_devfreq_device*) ;
 int FUNC_2 (struct devfreq*) ;
 unsigned long FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct devfreq *VAR_1,
         unsigned long *VAR_2)
{
 struct devfreq_dev_status *VAR_3;
 struct tegra_devfreq *VAR_4;
 struct tegra_devfreq_device *VAR_5;
 unsigned long VAR_6 = 0;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_3 = &VAR_1->last_status;

 VAR_4 = VAR_3->private_data;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->devices); VAR_7++) {
  VAR_5 = &VAR_4->devices[VAR_7];

  FUNC_1(VAR_4, VAR_5);

  VAR_6 = FUNC_3(VAR_6, VAR_5->target_freq);
 }

 *VAR_2 = VAR_6 * VAR_0;

 return 0;
}
