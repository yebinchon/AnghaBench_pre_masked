
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {struct drm_crtc* crtc; } ;
struct TYPE_10__ {TYPE_2__ encoder; } ;
struct tegra_dsi {TYPE_3__ output; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_4__* minor; TYPE_1__* info_ent; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {TYPE_5__* state; } ;
struct TYPE_13__ {unsigned int offset; int name; } ;
struct TYPE_12__ {int active; } ;
struct TYPE_11__ {struct drm_device* dev; } ;
struct TYPE_8__ {struct tegra_dsi* data; } ;


 unsigned int FUNC_0 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct seq_file*,char*,int ,unsigned int,int ) ;
 int FUNC_4 (struct tegra_dsi*,unsigned int) ;
 TYPE_6__* VAR_1 ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_2, void *VAR_3)
{
 struct drm_info_node *VAR_4 = VAR_2->private;
 struct tegra_dsi *VAR_5 = VAR_4->info_ent->data;
 struct drm_crtc *VAR_6 = VAR_5->output.encoder.crtc;
 struct drm_device *VAR_7 = VAR_4->minor->dev;
 unsigned int VAR_8;
 int VAR_9 = 0;

 FUNC_1(VAR_7);

 if (!VAR_6 || !VAR_6->state->active) {
  VAR_9 = -VAR_0;
  goto unlock;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  unsigned int VAR_10 = VAR_1[VAR_8].offset;

  FUNC_3(VAR_2, "%-32s %#05x %08x\n", VAR_1[VAR_8].name,
      VAR_10, FUNC_4(VAR_5, VAR_10));
 }

unlock:
 FUNC_2(VAR_7);
 return VAR_9;
}
