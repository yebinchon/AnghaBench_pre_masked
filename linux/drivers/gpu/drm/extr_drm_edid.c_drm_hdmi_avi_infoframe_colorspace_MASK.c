
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hdmi_avi_infoframe {size_t colorimetry; size_t extended_colorimetry; } ;
struct drm_connector_state {size_t colorspace; } ;


 size_t FUNC_0 (size_t*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t* VAR_4 ;

void
FUNC_1(struct hdmi_avi_infoframe *VAR_5,
      const struct drm_connector_state *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = VAR_6->colorspace & VAR_1;

 if (VAR_8 >= FUNC_0(VAR_4))
  VAR_7 = VAR_2;
 else
  VAR_7 = VAR_4[VAR_8];

 VAR_5->colorimetry = VAR_7 & VAR_3;




 VAR_5->extended_colorimetry = (VAR_7 >> 2) &
     VAR_0;
}
