
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct intel_dp {int (* get_aux_clock_divider ) (struct intel_dp*,int ) ;int (* get_aux_send_ctl ) (struct intel_dp*,int,int) ;} ;
struct drm_i915_private {int dummy; } ;
typedef int aux_msg ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 struct drm_i915_private* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (struct intel_dp*,int ) ;
 int FUNC_6 (struct intel_dp*,int,int) ;

__attribute__((used)) static void FUNC_7(struct intel_dp *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_3(VAR_5);
 u32 VAR_7, VAR_8;
 int VAR_9;
 static const u8 VAR_10[] = {
  [0] = 130 << 4,
  [1] = 129 >> 8,
  [2] = 129 & 0xff,
  [3] = 1 - 1,
  [4] = 128,
 };
 u32 VAR_11 = VAR_4 |
      VAR_2 |
      VAR_3 |
      VAR_1;

 FUNC_0(sizeof(VAR_10) > 20);
 for (VAR_9 = 0; VAR_9 < sizeof(VAR_10); VAR_9 += 4)
  FUNC_2(FUNC_1(VAR_9 >> 2),
      FUNC_4(&VAR_10[VAR_9], sizeof(VAR_10) - VAR_9));

 VAR_7 = VAR_5->get_aux_clock_divider(VAR_5, 0);


 VAR_8 = VAR_5->get_aux_send_ctl(VAR_5, sizeof(VAR_10),
          VAR_7);


 VAR_8 &= VAR_11;
 FUNC_2(VAR_0, VAR_8);
}
