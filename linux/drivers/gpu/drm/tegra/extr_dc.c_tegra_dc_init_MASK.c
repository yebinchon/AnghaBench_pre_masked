
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_drm {scalar_t__ pitch_align; } ;
struct tegra_dc {int syncpt; struct drm_plane* group; int irq; int dev; TYPE_1__* soc; int base; } ;
struct host1x_client {int dev; int parent; } ;
struct drm_plane {int dummy; } ;
struct drm_device {struct tegra_drm* dev_private; } ;
struct TYPE_2__ {scalar_t__ pitch_align; scalar_t__ supports_cursor; scalar_t__ wgrps; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_plane*) ;
 int FUNC_1 (struct drm_plane*) ;
 int FUNC_2 (struct drm_plane*) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct drm_device* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,int ,int ,int ,struct tegra_dc*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct drm_device*,int *,struct drm_plane*,struct drm_plane*,int *,int *) ;
 int FUNC_10 (struct drm_plane*) ;
 struct drm_plane* FUNC_11 (struct host1x_client*,int) ;
 int FUNC_12 (struct host1x_client*,struct drm_plane*) ;
 struct tegra_dc* FUNC_13 (struct host1x_client*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct host1x_client*,unsigned long) ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_plane* FUNC_16 (struct drm_device*,struct tegra_dc*) ;
 struct drm_plane* FUNC_17 (struct drm_device*,struct tegra_dc*) ;
 struct drm_plane* FUNC_18 (struct drm_device*,struct tegra_dc*) ;
 int FUNC_19 (struct tegra_dc*) ;
 int VAR_4 ;
 struct drm_plane* FUNC_20 (struct drm_device*,struct tegra_dc*,int,int) ;
 int FUNC_21 (struct drm_device*,struct tegra_dc*) ;

__attribute__((used)) static int FUNC_22(struct host1x_client *VAR_5)
{
 struct drm_device *VAR_6 = FUNC_4(VAR_5->parent);
 unsigned long VAR_7 = VAR_1;
 struct tegra_dc *VAR_8 = FUNC_13(VAR_5);
 struct tegra_drm *VAR_9 = VAR_6->dev_private;
 struct drm_plane *VAR_10 = ((void*)0);
 struct drm_plane *VAR_11 = ((void*)0);
 int VAR_12;






 if (!FUNC_19(VAR_8))
  return 0;

 VAR_8->syncpt = FUNC_15(VAR_5, VAR_7);
 if (!VAR_8->syncpt)
  FUNC_6(VAR_8->dev, "failed to allocate syncpoint\n");

 VAR_8->group = FUNC_11(VAR_5, 1);
 if (FUNC_0(VAR_8->group)) {
  VAR_12 = FUNC_2(VAR_8->group);
  FUNC_3(VAR_5->dev, "failed to attach to domain: %d\n", VAR_12);
  return VAR_12;
 }

 if (VAR_8->soc->wgrps)
  VAR_10 = FUNC_17(VAR_6, VAR_8);
 else
  VAR_10 = FUNC_16(VAR_6, VAR_8);

 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  goto cleanup;
 }

 if (VAR_8->soc->supports_cursor) {
  VAR_11 = FUNC_18(VAR_6, VAR_8);
  if (FUNC_0(VAR_11)) {
   VAR_12 = FUNC_2(VAR_11);
   goto cleanup;
  }
 } else {

  VAR_11 = FUNC_20(VAR_6, VAR_8, 2, 1);
  if (FUNC_0(VAR_11)) {
   VAR_12 = FUNC_2(VAR_11);
   goto cleanup;
  }
 }

 VAR_12 = FUNC_9(VAR_6, &VAR_8->base, VAR_10, VAR_11,
     &VAR_2, ((void*)0));
 if (VAR_12 < 0)
  goto cleanup;

 FUNC_8(&VAR_8->base, &VAR_3);





 if (VAR_8->soc->pitch_align > VAR_9->pitch_align)
  VAR_9->pitch_align = VAR_8->soc->pitch_align;

 VAR_12 = FUNC_21(VAR_6, VAR_8);
 if (VAR_12 < 0 && VAR_12 != -VAR_0) {
  FUNC_3(VAR_8->dev, "failed to initialize RGB output: %d\n", VAR_12);
  goto cleanup;
 }

 VAR_12 = FUNC_7(VAR_8->dev, VAR_8->irq, VAR_4, 0,
          FUNC_5(VAR_8->dev), VAR_8);
 if (VAR_12 < 0) {
  FUNC_3(VAR_8->dev, "failed to request IRQ#%u: %d\n", VAR_8->irq,
   VAR_12);
  goto cleanup;
 }

 return 0;

cleanup:
 if (!FUNC_1(VAR_11))
  FUNC_10(VAR_11);

 if (!FUNC_0(VAR_10))
  FUNC_10(VAR_10);

 FUNC_12(VAR_5, VAR_8->group);
 FUNC_14(VAR_8->syncpt);

 return VAR_12;
}
