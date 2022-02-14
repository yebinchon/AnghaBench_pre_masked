
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ quirk_addfb_prefer_xbgr_30bpp; scalar_t__ quirk_addfb_prefer_host_byte_order; } ;
struct drm_device {TYPE_1__ mode_config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

uint32_t FUNC_1(struct drm_device *VAR_10,
         uint32_t VAR_11, uint32_t VAR_12)
{
 uint32_t VAR_13 = FUNC_0(VAR_11, VAR_12);

 if (VAR_10->mode_config.quirk_addfb_prefer_host_byte_order) {
  if (VAR_13 == VAR_9)
   VAR_13 = VAR_4;
  if (VAR_13 == VAR_0)
   VAR_13 = VAR_1;
  if (VAR_13 == VAR_5)
   VAR_13 = VAR_2;
  if (VAR_13 == VAR_7)
   VAR_13 = VAR_3;
 }

 if (VAR_10->mode_config.quirk_addfb_prefer_xbgr_30bpp &&
     VAR_13 == VAR_8)
  VAR_13 = VAR_6;

 return VAR_13;
}
