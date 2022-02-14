
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_fixed_16_16_t ;
typedef int u64 ;
typedef int u32 ;
struct intel_plane_state {int dummy; } ;
struct intel_crtc_state {int pixel_rate; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct intel_crtc_state const*,struct intel_plane_state const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct intel_crtc_state const*,struct intel_plane_state const*) ;

__attribute__((used)) static u32
FUNC_4(const struct intel_crtc_state *VAR_0,
         const struct intel_plane_state *VAR_1)
{
 u64 VAR_2;
 uint_fixed_16_16_t VAR_3;


 if (FUNC_0(!FUNC_1(VAR_0, VAR_1)))
  return 0;





 VAR_2 = VAR_0->pixel_rate;
 VAR_3 = FUNC_3(VAR_0, VAR_1);

 return FUNC_2(VAR_2,
         VAR_3);
}
