
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_scaler {int hratio; int vratio; int up_h; int up_v; } ;
struct fimc_context {int dev; } ;
struct drm_exynos_ipp_task_rect {int h; int w; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct fimc_context*,int ) ;
 int FUNC_8 (struct fimc_context*,int,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct fimc_context *VAR_7, struct fimc_scaler *VAR_8,
         struct drm_exynos_ipp_task_rect *VAR_9,
         struct drm_exynos_ipp_task_rect *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18 = 0;
 u32 VAR_19, VAR_20, VAR_21, VAR_22;

 VAR_12 = FUNC_7(VAR_7, VAR_3);
 if (VAR_12 & VAR_4) {
  VAR_19 = VAR_9->h;
  VAR_20 = VAR_9->w;
 } else {
  VAR_19 = VAR_9->w;
  VAR_20 = VAR_9->h;
 }

 if (VAR_12 & VAR_5) {
  VAR_21 = VAR_10->h;
  VAR_22 = VAR_10->w;
 } else {
  VAR_21 = VAR_10->w;
  VAR_22 = VAR_10->h;
 }


 VAR_16 = FUNC_9(VAR_19 / VAR_21 / 2);
 if (VAR_16 > VAR_6 / 2) {
  FUNC_6(VAR_7->dev, "failed to get ratio horizontal.\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_9(VAR_20 / VAR_22 / 2);
 if (VAR_17 > VAR_6 / 2) {
  FUNC_6(VAR_7->dev, "failed to get ratio vertical.\n");
  return -VAR_0;
 }

 VAR_14 = VAR_19 >> VAR_16;
 VAR_15 = VAR_20 >> VAR_17;
 FUNC_0(VAR_7->dev, "pre_dst_width[%d]pre_dst_height[%d]\n",
     VAR_14, VAR_15);
 FUNC_0(VAR_7->dev, "hfactor[%d]vfactor[%d]\n", VAR_16,
     VAR_17);

 VAR_8->hratio = (VAR_19 << 14) / (VAR_21 << VAR_16);
 VAR_8->vratio = (VAR_20 << 14) / (VAR_22 << VAR_17);
 VAR_8->up_h = (VAR_21 >= VAR_19) ? 1 : 0;
 VAR_8->up_v = (VAR_22 >= VAR_20) ? 1 : 0;
 FUNC_0(VAR_7->dev, "hratio[%d]vratio[%d]up_h[%d]up_v[%d]\n",
     VAR_8->hratio, VAR_8->vratio, VAR_8->up_h, VAR_8->up_v);

 VAR_13 = VAR_6 - (VAR_16 + VAR_17);
 FUNC_0(VAR_7->dev, "shfactor[%d]\n", VAR_13);

 VAR_11 = (FUNC_5(VAR_13) |
  FUNC_3(1 << VAR_16) |
  FUNC_4(1 << VAR_17));
 FUNC_8(VAR_7, VAR_11, VAR_2);

 VAR_11 = (FUNC_2(VAR_14) |
  FUNC_1(VAR_15));
 FUNC_8(VAR_7, VAR_11, VAR_1);

 return VAR_18;
}
