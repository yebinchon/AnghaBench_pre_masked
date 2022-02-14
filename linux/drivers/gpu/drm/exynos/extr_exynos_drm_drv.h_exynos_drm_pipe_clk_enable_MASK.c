
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_crtc {TYPE_1__* pipe_clk; } ;
struct TYPE_2__ {int (* enable ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline void FUNC_1(struct exynos_drm_crtc *VAR_0,
           bool VAR_1)
{
 if (VAR_0->pipe_clk)
  VAR_0->pipe_clk->enable(VAR_0->pipe_clk, VAR_1);
}
