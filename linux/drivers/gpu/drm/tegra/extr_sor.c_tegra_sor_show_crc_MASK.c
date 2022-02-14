
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {struct drm_crtc* crtc; } ;
struct TYPE_8__ {TYPE_2__ encoder; } ;
struct tegra_sor {TYPE_3__ output; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_4__* minor; TYPE_1__* info_ent; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {TYPE_5__* state; } ;
struct TYPE_10__ {int active; } ;
struct TYPE_9__ {struct drm_device* dev; } ;
struct TYPE_6__ {struct tegra_sor* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct seq_file*,char*,int ) ;
 int FUNC_3 (struct tegra_sor*,int) ;
 int FUNC_4 (struct tegra_sor*,int ) ;
 int FUNC_5 (struct tegra_sor*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_10, void *VAR_11)
{
 struct drm_info_node *VAR_12 = VAR_10->private;
 struct tegra_sor *VAR_13 = VAR_12->info_ent->data;
 struct drm_crtc *VAR_14 = VAR_13->output.encoder.crtc;
 struct drm_device *VAR_15 = VAR_12->minor->dev;
 int VAR_16 = 0;
 u32 VAR_17;

 FUNC_0(VAR_15);

 if (!VAR_14 || !VAR_14->state->active) {
  VAR_16 = -VAR_0;
  goto unlock;
 }

 VAR_17 = FUNC_4(VAR_13, VAR_6);
 VAR_17 &= ~VAR_7;
 FUNC_5(VAR_13, VAR_17, VAR_6);

 VAR_17 = FUNC_4(VAR_13, VAR_4);
 VAR_17 |= VAR_5;
 FUNC_5(VAR_13, VAR_17, VAR_4);

 VAR_17 = FUNC_4(VAR_13, VAR_8);
 VAR_17 &= ~VAR_9;
 FUNC_5(VAR_13, VAR_17, VAR_8);

 VAR_16 = FUNC_3(VAR_13, 100);
 if (VAR_16 < 0)
  goto unlock;

 FUNC_5(VAR_13, VAR_2, VAR_1);
 VAR_17 = FUNC_4(VAR_13, VAR_3);

 FUNC_2(VAR_10, "%08x\n", VAR_17);

unlock:
 FUNC_1(VAR_15);
 return VAR_16;
}
