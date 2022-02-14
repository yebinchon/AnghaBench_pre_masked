
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sdvo_device_mapping {size_t i2c_pin; size_t i2c_speed; scalar_t__ initialized; } ;
struct psb_intel_sdvo {int * i2c; } ;
struct drm_psb_private {TYPE_1__* gmbus; struct sdvo_device_mapping* sdvo_mappings; } ;
struct TYPE_2__ {int adapter; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,size_t) ;

__attribute__((used)) static void
FUNC_3(struct drm_psb_private *VAR_3,
     struct psb_intel_sdvo *VAR_4, u32 VAR_5)
{
 struct sdvo_device_mapping *VAR_6;
 u8 VAR_7, VAR_8;

 if (FUNC_0(VAR_5))
  VAR_6 = &VAR_3->sdvo_mappings[0];
 else
  VAR_6 = &VAR_3->sdvo_mappings[1];

 VAR_7 = VAR_1;
 VAR_8 = VAR_2 >> 8;
 if (VAR_6->initialized) {
  VAR_7 = VAR_6->i2c_pin;
  VAR_8 = VAR_6->i2c_speed;
 }

 if (VAR_7 < VAR_0) {
  VAR_4->i2c = &VAR_3->gmbus[VAR_7].adapter;
  FUNC_2(VAR_4->i2c, VAR_8);
  FUNC_1(VAR_4->i2c, 1);
 } else
  VAR_4->i2c = &VAR_3->gmbus[VAR_1].adapter;
}
