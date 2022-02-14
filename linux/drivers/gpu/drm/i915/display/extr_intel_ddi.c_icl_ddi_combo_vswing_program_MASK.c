
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct drm_i915_private {int dummy; } ;
struct cnl_ddi_buf_trans {int dw7_n_scalar; int dw4_cursor_coeff; int dw4_post_cursor_2; int dw4_post_cursor_1; int dw2_swing_sel; } ;
typedef enum phy { ____Placeholder_phy } phy ;


 size_t FUNC_0 (int ) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,size_t,size_t) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 size_t FUNC_11 (int ) ;
 size_t VAR_1 ;
 size_t FUNC_12 (int ) ;
 size_t VAR_2 ;
 size_t FUNC_13 (int ) ;
 size_t VAR_3 ;
 size_t FUNC_14 (int) ;
 size_t VAR_4 ;
 size_t FUNC_15 (int) ;
 size_t VAR_5 ;
 size_t FUNC_16 (int) ;
 size_t VAR_6 ;
 size_t FUNC_17 (int ) ;
 size_t VAR_7 ;
 size_t FUNC_18 (int ) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 struct cnl_ddi_buf_trans* FUNC_19 (struct drm_i915_private*,int,int,size_t*) ;

__attribute__((used)) static void FUNC_20(struct drm_i915_private *VAR_11,
     u32 VAR_12, enum phy VAR_13, int VAR_14,
     int VAR_15)
{
 const struct cnl_ddi_buf_trans *VAR_16 = ((void*)0);
 u32 VAR_17, VAR_18;
 int VAR_19;

 VAR_16 = FUNC_19(VAR_11, VAR_14, VAR_15,
         &VAR_17);
 if (!VAR_16)
  return;

 if (VAR_12 >= VAR_17) {
  FUNC_1("DDI translation not found for level %d. Using %d instead.", VAR_12, VAR_17 - 1);
  VAR_12 = VAR_17 - 1;
 }


 VAR_18 = FUNC_2(FUNC_8(VAR_13));
 VAR_18 &= ~(VAR_6 | VAR_5 |
    VAR_9 | VAR_10);
 VAR_18 |= FUNC_16(0x2);
 VAR_18 |= FUNC_15(0x6);
 VAR_18 |= VAR_10;
 FUNC_3(FUNC_7(VAR_13), VAR_18);


 VAR_18 = FUNC_2(FUNC_5(VAR_13));
 VAR_18 &= ~(VAR_7 | VAR_8 |
   VAR_4);
 VAR_18 |= FUNC_18(VAR_16[VAR_12].dw2_swing_sel);
 VAR_18 |= FUNC_17(VAR_16[VAR_12].dw2_swing_sel);

 VAR_18 |= FUNC_14(0x98);
 FUNC_3(FUNC_4(VAR_13), VAR_18);



 for (VAR_19 = 0; VAR_19 <= 3; VAR_19++) {
  VAR_18 = FUNC_2(FUNC_6(VAR_19, VAR_13));
  VAR_18 &= ~(VAR_2 | VAR_3 |
    VAR_0);
  VAR_18 |= FUNC_12(VAR_16[VAR_12].dw4_post_cursor_1);
  VAR_18 |= FUNC_13(VAR_16[VAR_12].dw4_post_cursor_2);
  VAR_18 |= FUNC_0(VAR_16[VAR_12].dw4_cursor_coeff);
  FUNC_3(FUNC_6(VAR_19, VAR_13), VAR_18);
 }


 VAR_18 = FUNC_2(FUNC_10(VAR_13));
 VAR_18 &= ~VAR_1;
 VAR_18 |= FUNC_11(VAR_16[VAR_12].dw7_n_scalar);
 FUNC_3(FUNC_9(VAR_13), VAR_18);
}
