
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scaler_format {int chroma_tile_w; int chroma_tile_h; } ;
struct scaler_context {int dummy; } ;
struct drm_exynos_ipp_task_rect {int x; int y; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static inline void FUNC_5(struct scaler_context *VAR_2,
   struct drm_exynos_ipp_task_rect *VAR_3,
   const struct scaler_format *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_3->x << 2);
 VAR_5 |= FUNC_3(VAR_3->y << 2);
 FUNC_4(VAR_5, VAR_1);
 VAR_5 = FUNC_0(
  (VAR_3->x * VAR_4->chroma_tile_w / 16) << 2);
 VAR_5 |= FUNC_1(
  (VAR_3->y * VAR_4->chroma_tile_h / 16) << 2);
 FUNC_4(VAR_5, VAR_0);
}
