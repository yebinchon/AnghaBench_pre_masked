
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_clk_info {scalar_t__ num_parents; char* name; unsigned int id; } ;
struct tegra_bpmp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int,scalar_t__,scalar_t__) ;
 struct tegra_bpmp_clk_info* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct tegra_bpmp*,unsigned int,struct tegra_bpmp_clk_info*) ;
 int FUNC_4 (struct tegra_bpmp*) ;
 int FUNC_5 (struct tegra_bpmp*,int ,struct tegra_bpmp_clk_info*) ;

__attribute__((used)) static int FUNC_6(struct tegra_bpmp *VAR_5,
       struct tegra_bpmp_clk_info **VAR_6)
{
 struct tegra_bpmp_clk_info *VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10 = 0;
 unsigned int VAR_11 = 0;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_8 = VAR_12;

 FUNC_0(VAR_5->dev, "maximum clock ID: %u\n", VAR_8);

 VAR_7 = FUNC_2(VAR_8 + 1, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++) {
  struct tegra_bpmp_clk_info *VAR_13 = &VAR_7[VAR_10];

  VAR_12 = FUNC_3(VAR_5, VAR_9, VAR_13);
  if (VAR_12 < 0)
   continue;

  if (VAR_13->num_parents >= VAR_4) {
   FUNC_1(VAR_5->dev,
    "clock %u has too many parents (%u, max: %u)\n",
    VAR_9, VAR_13->num_parents, VAR_4);
   continue;
  }


  if (VAR_13->name[0] == '\0') {
   VAR_11++;
   continue;
  }

  VAR_13->id = VAR_9;
  VAR_10++;

  if (VAR_3)
   FUNC_5(VAR_5, VAR_2, VAR_13);
 }

 FUNC_0(VAR_5->dev, "holes: %u\n", VAR_11);
 *VAR_6 = VAR_7;

 return VAR_10;
}
