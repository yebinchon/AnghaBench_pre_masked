
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_plane_state {TYPE_1__* color_plane; } ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_2__ {int stride; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(const struct intel_crtc_state *VAR_2,
      const struct intel_plane_state *VAR_3)
{
 return VAR_0 |
  VAR_1 |
  FUNC_0(VAR_3->color_plane[0].stride);
}
