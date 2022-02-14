
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct drm_device {int dev; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_crtc {struct drm_device* dev; } ;
struct atmel_hlcdc_crtc {TYPE_2__* dc; } ;
struct TYPE_4__ {TYPE_1__* hlcdc; } ;
struct TYPE_3__ {int sys_clk; struct regmap* regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 struct atmel_hlcdc_crtc* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct regmap*,int ,unsigned int*) ;
 int FUNC_9 (struct regmap*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct drm_crtc *VAR_5,
         struct drm_crtc_state *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;
 struct atmel_hlcdc_crtc *VAR_8 = FUNC_2(VAR_5);
 struct regmap *VAR_9 = VAR_8->dc->hlcdc->regmap;
 unsigned int VAR_10;

 FUNC_3(VAR_5);

 FUNC_6(VAR_7->dev);

 FUNC_9(VAR_9, VAR_0, VAR_1);
 while (!FUNC_8(VAR_9, VAR_3, &VAR_10) &&
        (VAR_10 & VAR_1))
  FUNC_1();

 FUNC_9(VAR_9, VAR_0, VAR_4);
 while (!FUNC_8(VAR_9, VAR_3, &VAR_10) &&
        (VAR_10 & VAR_4))
  FUNC_1();

 FUNC_9(VAR_9, VAR_0, VAR_2);
 while (!FUNC_8(VAR_9, VAR_3, &VAR_10) &&
        (VAR_10 & VAR_2))
  FUNC_1();

 FUNC_0(VAR_8->dc->hlcdc->sys_clk);
 FUNC_4(VAR_7->dev);

 FUNC_5(VAR_7->dev);

 FUNC_7(VAR_7->dev);
}
