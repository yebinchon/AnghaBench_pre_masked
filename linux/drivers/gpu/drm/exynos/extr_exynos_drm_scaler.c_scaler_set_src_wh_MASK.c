
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scaler_context {int dummy; } ;
struct drm_exynos_ipp_task_rect {int h; int w; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct scaler_context *VAR_1,
 struct drm_exynos_ipp_task_rect *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->w);
 VAR_3 |= FUNC_0(VAR_2->h);
 FUNC_2(VAR_3, VAR_0);
}
