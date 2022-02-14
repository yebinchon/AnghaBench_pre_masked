
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int r_t; int c_m; } ;
struct drm_i915_private {int mem_freq; int fsb_freq; TYPE_1__ ips; int uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2)
{
 u16 VAR_3, VAR_4;

 VAR_3 = FUNC_1(&VAR_2->uncore, VAR_1);
 VAR_4 = FUNC_1(&VAR_2->uncore, VAR_0);

 switch (VAR_3 & 0xff) {
 case 0xc:
  VAR_2->mem_freq = 800;
  break;
 case 0x10:
  VAR_2->mem_freq = 1066;
  break;
 case 0x14:
  VAR_2->mem_freq = 1333;
  break;
 case 0x18:
  VAR_2->mem_freq = 1600;
  break;
 default:
  FUNC_0("unknown memory frequency 0x%02x\n",
     VAR_3 & 0xff);
  VAR_2->mem_freq = 0;
  break;
 }

 VAR_2->ips.r_t = VAR_2->mem_freq;

 switch (VAR_4 & 0x3ff) {
 case 0x00c:
  VAR_2->fsb_freq = 3200;
  break;
 case 0x00e:
  VAR_2->fsb_freq = 3733;
  break;
 case 0x010:
  VAR_2->fsb_freq = 4266;
  break;
 case 0x012:
  VAR_2->fsb_freq = 4800;
  break;
 case 0x014:
  VAR_2->fsb_freq = 5333;
  break;
 case 0x016:
  VAR_2->fsb_freq = 5866;
  break;
 case 0x018:
  VAR_2->fsb_freq = 6400;
  break;
 default:
  FUNC_0("unknown fsb frequency 0x%04x\n",
     VAR_4 & 0x3ff);
  VAR_2->fsb_freq = 0;
  break;
 }

 if (VAR_2->fsb_freq == 3200) {
  VAR_2->ips.c_m = 0;
 } else if (VAR_2->fsb_freq > 3200 && VAR_2->fsb_freq <= 4800) {
  VAR_2->ips.c_m = 1;
 } else {
  VAR_2->ips.c_m = 2;
 }
}
