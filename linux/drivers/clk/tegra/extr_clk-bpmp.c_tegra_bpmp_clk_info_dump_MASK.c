
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bpmp_clk_info {int flags; unsigned int num_parents; unsigned int* parents; int name; int id; } ;
struct tegra_bpmp {int dev; } ;
struct seq_buf {int dummy; } ;
typedef int flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int ,char*,unsigned int,...) ;
 int FUNC_1 (struct seq_buf*,char*,int) ;
 int FUNC_2 (struct seq_buf*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct tegra_bpmp *VAR_3,
         const char *VAR_4,
         const struct tegra_bpmp_clk_info *VAR_5)
{
 const char *VAR_6 = "";
 struct seq_buf VAR_7;
 unsigned int VAR_8;
 char VAR_9[64];

 FUNC_1(&VAR_7, VAR_9, sizeof(VAR_9));

 if (VAR_5->flags)
  FUNC_2(&VAR_7, "(");

 if (VAR_5->flags & VAR_0) {
  FUNC_2(&VAR_7, "%smux", VAR_6);
  VAR_6 = ", ";
 }

 if ((VAR_5->flags & VAR_1) == 0) {
  FUNC_2(&VAR_7, "%sfixed", VAR_6);
  VAR_6 = ", ";
 }

 if (VAR_5->flags & VAR_2) {
  FUNC_2(&VAR_7, "%sroot", VAR_6);
  VAR_6 = ", ";
 }

 if (VAR_5->flags)
  FUNC_2(&VAR_7, ")");

 FUNC_0(VAR_4, VAR_3->dev, "%03u: %s\n", VAR_5->id, VAR_5->name);
 FUNC_0(VAR_4, VAR_3->dev, "  flags: %lx %s\n", VAR_5->flags, VAR_9);
 FUNC_0(VAR_4, VAR_3->dev, "  parents: %u\n", VAR_5->num_parents);

 for (VAR_8 = 0; VAR_8 < VAR_5->num_parents; VAR_8++)
  FUNC_0(VAR_4, VAR_3->dev, "    %03u\n", VAR_5->parents[VAR_8]);
}
