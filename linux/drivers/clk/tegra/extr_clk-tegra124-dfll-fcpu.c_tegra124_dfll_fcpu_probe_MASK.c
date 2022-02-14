
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rail_alignment {int dummy; } ;
struct tegra_dfll_soc_data {int max_freq; int cvb; int dev; struct rail_alignment alignment; } ;
struct TYPE_8__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct dfll_fcpu_data {int cpu_max_freq_table_size; int cpu_cvb_tables_size; int cpu_cvb_tables; int * cpu_max_freq_table; } ;
struct TYPE_7__ {int cpu_process_id; int cpu_speedo_id; int cpu_speedo_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct tegra_dfll_soc_data* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_2__*,struct rail_alignment*) ;
 int FUNC_5 (TYPE_2__*,struct rail_alignment*) ;
 int FUNC_6 (int ) ;
 struct dfll_fcpu_data* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int ,int ,struct rail_alignment*,int,int,int,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct tegra_dfll_soc_data*) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 struct tegra_dfll_soc_data *VAR_9;
 const struct dfll_fcpu_data *VAR_10;
 struct rail_alignment VAR_11;

 VAR_10 = FUNC_7(&VAR_4->dev);
 if (!VAR_10)
  return -VAR_0;

 VAR_5 = VAR_3.cpu_process_id;
 VAR_6 = VAR_3.cpu_speedo_id;
 VAR_7 = VAR_3.cpu_speedo_value;

 if (VAR_6 >= VAR_10->cpu_max_freq_table_size) {
  FUNC_2(&VAR_4->dev, "unknown max CPU freq for speedo_id=%d\n",
   VAR_6);
  return -VAR_0;
 }

 VAR_9 = FUNC_3(&VAR_4->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->dev = FUNC_6(0);
 if (!VAR_9->dev) {
  FUNC_2(&VAR_4->dev, "no CPU0 device\n");
  return -VAR_0;
 }

 if (FUNC_8(VAR_4->dev.of_node, "nvidia,pwm-to-pmic")) {
  FUNC_4(&VAR_4->dev, &VAR_11);
 } else {
  VAR_8 = FUNC_5(&VAR_4->dev, &VAR_11);
  if (VAR_8)
   return VAR_8;
 }

 VAR_9->max_freq = VAR_10->cpu_max_freq_table[VAR_6];

 VAR_9->cvb = FUNC_9(VAR_9->dev, VAR_10->cpu_cvb_tables,
        VAR_10->cpu_cvb_tables_size,
        &VAR_11, VAR_5, VAR_6,
        VAR_7, VAR_9->max_freq);
 VAR_9->alignment = VAR_11;

 if (FUNC_0(VAR_9->cvb)) {
  FUNC_2(&VAR_4->dev, "couldn't add OPP table: %ld\n",
   FUNC_1(VAR_9->cvb));
  return FUNC_1(VAR_9->cvb);
 }

 VAR_8 = FUNC_11(VAR_4, VAR_9);
 if (VAR_8 < 0) {
  FUNC_10(VAR_9->dev, VAR_9->cvb, VAR_9->max_freq);
  return VAR_8;
 }

 return 0;
}
