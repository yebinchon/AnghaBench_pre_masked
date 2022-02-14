
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int overflow; int underflow; int vblank; int frames; } ;
struct tegra_dc {TYPE_2__ stats; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_3__ {struct tegra_dc* data; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = VAR_0->private;
 struct tegra_dc *VAR_3 = VAR_2->info_ent->data;

 FUNC_0(VAR_0, "frames: %lu\n", VAR_3->stats.frames);
 FUNC_0(VAR_0, "vblank: %lu\n", VAR_3->stats.vblank);
 FUNC_0(VAR_0, "underflow: %lu\n", VAR_3->stats.underflow);
 FUNC_0(VAR_0, "overflow: %lu\n", VAR_3->stats.overflow);

 return 0;
}
