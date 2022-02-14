
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fimd_context {int suspended; int dev; int bus_clk; int lcd_clk; int crtc; TYPE_1__* driver_data; scalar_t__ regs; } ;
struct exynos_drm_crtc {struct fimd_context* ctx; } ;
struct TYPE_2__ {scalar_t__ has_shadowcon; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fimd_context*,unsigned int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fimd_context*,unsigned int,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct exynos_drm_crtc *VAR_2)
{
 struct fimd_context *VAR_3 = VAR_2->ctx;
 unsigned int VAR_4, VAR_5 = 0;


 FUNC_8(VAR_3->dev);

 FUNC_2(VAR_3->bus_clk);
 FUNC_2(VAR_3->lcd_clk);


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u32 VAR_6 = FUNC_10(VAR_3->regs + FUNC_0(VAR_4));

  if (VAR_6 & VAR_0) {
   FUNC_6(VAR_3, VAR_4, 0);

   if (VAR_3->driver_data->has_shadowcon)
    FUNC_4(VAR_3, VAR_4,
        0);

   VAR_5 = 1;
  }
 }


 if (VAR_5) {
  VAR_3->suspended = 0;

  FUNC_5(VAR_3->crtc);
  FUNC_7(VAR_3->crtc);
  FUNC_3(VAR_3->crtc);

  VAR_3->suspended = 1;
 }

 FUNC_1(VAR_3->lcd_clk);
 FUNC_1(VAR_3->bus_clk);

 FUNC_9(VAR_3->dev);
}
