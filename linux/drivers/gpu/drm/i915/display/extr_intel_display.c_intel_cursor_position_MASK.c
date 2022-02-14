
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int crtc_x; int crtc_y; } ;
struct intel_plane_state {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u32 FUNC_0(const struct intel_plane_state *VAR_3)
{
 int VAR_4 = VAR_3->base.crtc_x;
 int VAR_5 = VAR_3->base.crtc_y;
 u32 VAR_6 = 0;

 if (VAR_4 < 0) {
  VAR_6 |= VAR_0 << VAR_1;
  VAR_4 = -VAR_4;
 }
 VAR_6 |= VAR_4 << VAR_1;

 if (VAR_5 < 0) {
  VAR_6 |= VAR_0 << VAR_2;
  VAR_5 = -VAR_5;
 }
 VAR_6 |= VAR_5 << VAR_2;

 return VAR_6;
}
