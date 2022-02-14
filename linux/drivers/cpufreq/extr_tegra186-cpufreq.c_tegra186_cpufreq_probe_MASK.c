
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_bpmp {int dummy; } ;
struct tegra186_cpufreq_data {unsigned int num_clusters; struct tegra186_cpufreq_cluster* clusters; struct tegra_bpmp* regs; } ;
struct tegra186_cpufreq_cluster {struct tegra_bpmp* table; TYPE_2__* info; } ;
struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_6__ {int bpmp_cluster_id; } ;
struct TYPE_5__ {struct tegra186_cpufreq_data* driver_data; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tegra_bpmp*) ;
 int FUNC_2 (struct tegra_bpmp*) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 struct tegra_bpmp* FUNC_4 (int *,struct resource*) ;
 struct tegra186_cpufreq_cluster* FUNC_5 (int *,unsigned int,int,int ) ;
 struct tegra186_cpufreq_data* FUNC_6 (int *,int,int ) ;
 struct tegra_bpmp* FUNC_7 (struct platform_device*,struct tegra_bpmp*,int ) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 struct tegra_bpmp* FUNC_9 (int *) ;
 int FUNC_10 (struct tegra_bpmp*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct tegra186_cpufreq_data *VAR_6;
 struct tegra_bpmp *VAR_7;
 struct resource *VAR_8;
 unsigned int VAR_9 = 0, VAR_10;

 VAR_6 = FUNC_6(&VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->clusters = FUNC_5(&VAR_5->dev, FUNC_0(VAR_3),
          sizeof(*VAR_6->clusters), VAR_1);
 if (!VAR_6->clusters)
  return -VAR_0;

 VAR_6->num_clusters = FUNC_0(VAR_3);

 VAR_7 = FUNC_9(&VAR_5->dev);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_8 = FUNC_8(VAR_5, VAR_2, 0);
 VAR_6->regs = FUNC_4(&VAR_5->dev, VAR_8);
 if (FUNC_1(VAR_6->regs)) {
  VAR_10 = FUNC_2(VAR_6->regs);
  goto put_bpmp;
 }

 for (VAR_9 = 0; VAR_9 < VAR_6->num_clusters; VAR_9++) {
  struct tegra186_cpufreq_cluster *VAR_11 = &VAR_6->clusters[VAR_9];

  VAR_11->info = &VAR_3[VAR_9];
  VAR_11->table = FUNC_7(
   VAR_5, VAR_7, VAR_11->info->bpmp_cluster_id);
  if (FUNC_1(VAR_11->table)) {
   VAR_10 = FUNC_2(VAR_11->table);
   goto put_bpmp;
  }
 }

 FUNC_10(VAR_7);

 VAR_4.driver_data = VAR_6;

 VAR_10 = FUNC_3(&VAR_4);
 if (VAR_10)
  return VAR_10;

 return 0;

put_bpmp:
 FUNC_10(VAR_7);

 return VAR_10;
}
