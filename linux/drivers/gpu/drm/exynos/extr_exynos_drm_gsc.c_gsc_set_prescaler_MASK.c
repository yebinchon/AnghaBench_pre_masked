
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_scaler {int main_hratio; int main_vratio; int pre_vratio; int pre_hratio; int pre_shfactor; } ;
struct gsc_context {int dev; scalar_t__ rotation; } ;
struct drm_exynos_ipp_task_rect {int w; int h; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct gsc_context*,int,int,int *) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct gsc_context *VAR_1, struct gsc_scaler *VAR_2,
        struct drm_exynos_ipp_task_rect *VAR_3,
        struct drm_exynos_ipp_task_rect *VAR_4)
{
 u32 VAR_5;
 u32 VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 VAR_6 = VAR_3->w;
 VAR_7 = VAR_3->h;

 if (VAR_1->rotation) {
  VAR_8 = VAR_4->h;
  VAR_9 = VAR_4->w;
 } else {
  VAR_8 = VAR_4->w;
  VAR_9 = VAR_4->h;
 }

 VAR_10 = FUNC_6(VAR_1, VAR_6, VAR_8, &VAR_2->pre_hratio);
 if (VAR_10) {
  FUNC_1(VAR_1->dev, "failed to get ratio horizontal.\n");
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_1, VAR_7, VAR_9, &VAR_2->pre_vratio);
 if (VAR_10) {
  FUNC_1(VAR_1->dev, "failed to get ratio vertical.\n");
  return VAR_10;
 }

 FUNC_0(VAR_1->dev, "pre_hratio[%d]pre_vratio[%d]\n",
     VAR_2->pre_hratio, VAR_2->pre_vratio);

 VAR_2->main_hratio = (VAR_6 << 16) / VAR_8;
 VAR_2->main_vratio = (VAR_7 << 16) / VAR_9;

 FUNC_0(VAR_1->dev, "main_hratio[%ld]main_vratio[%ld]\n",
     VAR_2->main_hratio, VAR_2->main_vratio);

 FUNC_5(VAR_2->pre_hratio, VAR_2->pre_vratio,
  &VAR_2->pre_shfactor);

 FUNC_0(VAR_1->dev, "pre_shfactor[%d]\n", VAR_2->pre_shfactor);

 VAR_5 = (FUNC_3(VAR_2->pre_shfactor) |
  FUNC_2(VAR_2->pre_hratio) |
  FUNC_4(VAR_2->pre_vratio));
 FUNC_7(VAR_5, VAR_0);

 return VAR_10;
}
