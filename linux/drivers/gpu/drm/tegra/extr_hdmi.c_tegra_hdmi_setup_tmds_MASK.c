
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tmds_config {int peak_current; int drive_current; int pe_current; int pll1; int pll0; } ;
struct tegra_hdmi {TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ has_sor_io_peak_current; int fuse_override_offset; int fuse_override_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tegra_hdmi*,int ) ;
 int FUNC_1 (struct tegra_hdmi*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_hdmi *VAR_5,
      const struct tmds_config *VAR_6)
{
 u32 VAR_7;

 FUNC_1(VAR_5, VAR_6->pll0, VAR_3);
 FUNC_1(VAR_5, VAR_6->pll1, VAR_4);
 FUNC_1(VAR_5, VAR_6->pe_current, VAR_0);

 FUNC_1(VAR_5, VAR_6->drive_current,
     VAR_2);

 VAR_7 = FUNC_0(VAR_5, VAR_5->config->fuse_override_offset);
 VAR_7 |= VAR_5->config->fuse_override_value;
 FUNC_1(VAR_5, VAR_7, VAR_5->config->fuse_override_offset);

 if (VAR_5->config->has_sor_io_peak_current)
  FUNC_1(VAR_5, VAR_6->peak_current,
      VAR_1);
}
