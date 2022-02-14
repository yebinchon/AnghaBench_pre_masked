
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct gpio_map {int init; int base_offset; } ;
struct TYPE_3__ {int seq_version; } ;
struct TYPE_4__ {TYPE_1__ dsi; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;


 size_t FUNC_0 (struct gpio_map*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 size_t VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 struct gpio_map* VAR_2 ;
 int FUNC_5 (struct drm_i915_private*,int ) ;
 int FUNC_6 (struct drm_i915_private*,int ) ;
 int FUNC_7 (struct drm_i915_private*,size_t,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_3,
     u8 VAR_4, u8 VAR_5, bool VAR_6)
{
 struct gpio_map *VAR_7;
 u16 VAR_8, VAR_9;
 u32 VAR_10;
 u8 VAR_11;

 if (VAR_5 >= FUNC_0(VAR_2)) {
  FUNC_2("unknown gpio index %u\n", VAR_5);
  return;
 }

 VAR_7 = &VAR_2[VAR_5];

 if (VAR_3->vbt.dsi.seq_version >= 3) {

  VAR_11 = VAR_0;
 } else {
  if (VAR_4 == 0) {
   VAR_11 = VAR_0;
  } else if (VAR_4 == 1) {
   FUNC_2("SC gpio not supported\n");
   return;
  } else {
   FUNC_2("unknown gpio source %u\n", VAR_4);
   return;
  }
 }

 VAR_8 = FUNC_4(VAR_7->base_offset);
 VAR_9 = FUNC_3(VAR_7->base_offset);

 FUNC_5(VAR_3, FUNC_1(VAR_1));
 if (!VAR_7->init) {

  FUNC_7(VAR_3, VAR_11, VAR_8, 0x2000CC00);
  VAR_7->init = 1;
 }

 VAR_10 = 0x4 | VAR_6;
 FUNC_7(VAR_3, VAR_11, VAR_9, VAR_10);
 FUNC_6(VAR_3, FUNC_1(VAR_1));
}
