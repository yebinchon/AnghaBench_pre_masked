
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct cnl_ddi_buf_trans {int dw7_n_scalar; int dw4_cursor_coeff; int dw4_post_cursor_2; int dw4_post_cursor_1; int dw2_swing_sel; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum intel_output_type { ____Placeholder_intel_output_type } intel_output_type ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ) ;
 int VAR_3 ;
 int FUNC_11 (int ) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;
 int VAR_5 ;
 int FUNC_13 (int) ;
 int VAR_6 ;
 int FUNC_14 (int) ;
 int VAR_7 ;
 int FUNC_15 (int) ;
 int VAR_8 ;
 int FUNC_16 (int ) ;
 int VAR_9 ;
 int FUNC_17 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_18 (int) ;
 struct cnl_ddi_buf_trans* FUNC_19 (struct drm_i915_private*,int*) ;
 struct cnl_ddi_buf_trans* FUNC_20 (struct drm_i915_private*,int*) ;
 struct cnl_ddi_buf_trans* FUNC_21 (struct drm_i915_private*,int*) ;
 struct drm_i915_private* FUNC_22 (int ) ;

__attribute__((used)) static void FUNC_23(struct intel_encoder *VAR_12,
       int VAR_13, enum intel_output_type VAR_14)
{
 struct drm_i915_private *VAR_15 = FUNC_22(VAR_12->base.dev);
 const struct cnl_ddi_buf_trans *VAR_16;
 enum port VAR_17 = VAR_12->port;
 int VAR_18, VAR_19;
 u32 VAR_20;

 if (VAR_14 == VAR_2)
  VAR_16 = FUNC_21(VAR_15, &VAR_18);
 else if (VAR_14 == VAR_1)
  VAR_16 = FUNC_20(VAR_15, &VAR_18);
 else
  VAR_16 = FUNC_19(VAR_15, &VAR_18);

 if (FUNC_18(!VAR_16))
  return;
 if (FUNC_18(VAR_13 >= VAR_18))
  VAR_13 = VAR_18 - 1;


 VAR_20 = FUNC_8(FUNC_4(VAR_17));
 VAR_20 &= ~VAR_8;
 VAR_20 |= FUNC_15(2);
 FUNC_9(FUNC_3(VAR_17), VAR_20);


 VAR_20 = FUNC_8(FUNC_1(VAR_17));
 VAR_20 &= ~(VAR_9 | VAR_10 |
   VAR_6);
 VAR_20 |= FUNC_17(VAR_16[VAR_13].dw2_swing_sel);
 VAR_20 |= FUNC_16(VAR_16[VAR_13].dw2_swing_sel);

 VAR_20 |= FUNC_13(0x98);
 FUNC_9(FUNC_0(VAR_17), VAR_20);



 for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
  VAR_20 = FUNC_8(FUNC_2(VAR_19, VAR_17));
  VAR_20 &= ~(VAR_4 | VAR_5 |
    VAR_0);
  VAR_20 |= FUNC_11(VAR_16[VAR_13].dw4_post_cursor_1);
  VAR_20 |= FUNC_12(VAR_16[VAR_13].dw4_post_cursor_2);
  VAR_20 |= FUNC_7(VAR_16[VAR_13].dw4_cursor_coeff);
  FUNC_9(FUNC_2(VAR_19, VAR_17), VAR_20);
 }



 VAR_20 = FUNC_8(FUNC_4(VAR_17));
 VAR_20 &= ~VAR_7;
 VAR_20 |= FUNC_14(6);
 VAR_20 |= VAR_11;
 FUNC_9(FUNC_3(VAR_17), VAR_20);


 VAR_20 = FUNC_8(FUNC_6(VAR_17));
 VAR_20 &= ~VAR_3;
 VAR_20 |= FUNC_10(VAR_16[VAR_13].dw7_n_scalar);
 FUNC_9(FUNC_5(VAR_17), VAR_20);
}
