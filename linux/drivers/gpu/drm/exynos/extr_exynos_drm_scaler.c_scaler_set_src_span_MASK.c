
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scaler_context {int dummy; } ;
struct TYPE_4__ {int* pitch; } ;
struct exynos_drm_ipp_buffer {TYPE_2__ buf; TYPE_1__* format; } ;
struct TYPE_3__ {int* cpp; int num_planes; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct scaler_context *VAR_1,
 struct exynos_drm_ipp_buffer *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2->buf.pitch[0] /
  VAR_2->format->cpp[0]);

 if (VAR_2->format->num_planes > 1)
  VAR_3 |= FUNC_0(VAR_2->buf.pitch[1]);

 FUNC_2(VAR_3, VAR_0);
}
