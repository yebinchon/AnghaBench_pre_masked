
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int dev; struct exynos_drm_ipp_task* task; int id; } ;
struct exynos_drm_ipp_task {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct exynos_drm_ipp_task*,int) ;
 int FUNC_4 (struct gsc_context*) ;
 int FUNC_5 (struct gsc_context*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct gsc_context *VAR_7 = VAR_6;
 u32 VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_7->dev, "gsc id[%d]\n", VAR_7->id);

 VAR_8 = FUNC_6(VAR_1);
 if (VAR_8 & VAR_3) {
  FUNC_2(VAR_7->dev, "occurred overflow at %d, status 0x%x.\n",
   VAR_7->id, VAR_8);
  VAR_9 = -VAR_0;
 }

 if (VAR_8 & VAR_2) {
  int VAR_10, VAR_11;

  FUNC_1(VAR_7->dev, "occurred frame done at %d, status 0x%x.\n",
   VAR_7->id, VAR_8);

  VAR_10 = FUNC_5(VAR_7);
  VAR_11 = FUNC_4(VAR_7);

  FUNC_0(VAR_7->dev, "buf_id_src[%d]buf_id_dst[%d]\n",
      VAR_10, VAR_11);

  if (VAR_10 < 0 || VAR_11 < 0)
   VAR_9 = -VAR_0;
 }

 if (VAR_7->task) {
  struct exynos_drm_ipp_task *VAR_12 = VAR_7->task;

  VAR_7->task = ((void*)0);
  FUNC_7(VAR_7->dev);
  FUNC_8(VAR_7->dev);
  FUNC_3(VAR_12, VAR_9);
 }

 return VAR_4;
}
