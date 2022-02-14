
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct atmel_hlcdc_crtc {TYPE_2__* dc; } ;
struct TYPE_4__ {TYPE_1__* hlcdc; } ;
struct TYPE_3__ {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atmel_hlcdc_crtc* FUNC_0 (struct drm_crtc*) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_crtc *VAR_2)
{
 struct atmel_hlcdc_crtc *VAR_3 = FUNC_0(VAR_2);
 struct regmap *VAR_4 = VAR_3->dc->hlcdc->regmap;

 FUNC_1(VAR_4, VAR_0, VAR_1);
}
