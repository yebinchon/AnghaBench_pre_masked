
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_encoder {int dummy; } ;
struct atmel_hlcdc_rgb_output {int bus_fmt; } ;


 struct atmel_hlcdc_rgb_output* FUNC_0 (struct drm_encoder*) ;

int FUNC_1(struct drm_encoder *VAR_0)
{
 struct atmel_hlcdc_rgb_output *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 return VAR_1->bus_fmt;
}
