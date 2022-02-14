
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_plane {int mutex; TYPE_2__* state; } ;
struct TYPE_8__ {struct drm_plane drm_plane; } ;
struct sti_gdp {scalar_t__ regs; TYPE_4__ plane; } ;
struct seq_file {struct drm_info_node* private; } ;
struct drm_info_node {TYPE_1__* info_ent; } ;
struct TYPE_7__ {int id; } ;
struct drm_crtc {TYPE_3__ base; } ;
struct TYPE_6__ {struct drm_crtc* crtc; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,int ) ;
 int FUNC_4 (struct seq_file*,int ) ;
 int FUNC_5 (struct seq_file*,struct sti_gdp*,int ) ;
 int FUNC_6 (struct seq_file*,int ) ;
 int FUNC_7 (struct seq_file*,int ) ;
 int FUNC_8 (struct seq_file*,int ) ;
 int FUNC_9 (struct seq_file*,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct seq_file*,char*,int ,scalar_t__) ;
 int FUNC_12 (struct seq_file*,char*) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (struct drm_crtc*) ;

__attribute__((used)) static int FUNC_16(struct seq_file *VAR_20, void *VAR_21)
{
 struct drm_info_node *VAR_22 = VAR_20->private;
 struct sti_gdp *VAR_23 = (struct sti_gdp *)VAR_22->info_ent->data;
 struct drm_plane *VAR_24 = &VAR_23->plane.drm_plane;
 struct drm_crtc *VAR_25;

 FUNC_1(&VAR_24->mutex, ((void*)0));
 VAR_25 = VAR_24->state->crtc;
 FUNC_2(&VAR_24->mutex);

 FUNC_11(VAR_20, "%s: (vaddr = 0x%p)",
     FUNC_14(&VAR_23->plane), VAR_23->regs);

 FUNC_0(VAR_2);
 FUNC_3(VAR_20, FUNC_10(VAR_23->regs + VAR_3));
 FUNC_0(VAR_0);
 FUNC_0(VAR_16);
 FUNC_8(VAR_20, FUNC_10(VAR_23->regs + VAR_17));
 FUNC_0(VAR_18);
 FUNC_9(VAR_20, FUNC_10(VAR_23->regs + VAR_19));
 FUNC_0(VAR_10);
 FUNC_0(VAR_11);
 FUNC_0(VAR_14);
 FUNC_7(VAR_20, FUNC_10(VAR_23->regs + VAR_15));
 FUNC_0(VAR_8);
 FUNC_5(VAR_20, VAR_23, FUNC_10(VAR_23->regs + VAR_9));
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_12);
 FUNC_6(VAR_20, FUNC_10(VAR_23->regs + VAR_13));
 FUNC_0(VAR_1);
 FUNC_0(VAR_6);
 FUNC_4(VAR_20, FUNC_10(VAR_23->regs + VAR_7));

 FUNC_12(VAR_20, "\n\n");
 if (!VAR_25)
  FUNC_12(VAR_20, "  Not connected to any DRM CRTC\n");
 else
  FUNC_11(VAR_20, "  Connected to DRM CRTC #%d (%s)\n",
      VAR_25->base.id, FUNC_13(FUNC_15(VAR_25)));

 return 0;
}
