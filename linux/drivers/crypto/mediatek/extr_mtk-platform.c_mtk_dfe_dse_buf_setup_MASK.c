
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mtk_sys_cap {int hw_opt; int hia_opt; } ;
struct mtk_cryp {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct mtk_cryp *VAR_7,
      struct mtk_sys_cap *VAR_8)
{
 u32 VAR_9 = FUNC_4(VAR_8->hia_opt) + 2;
 u32 VAR_10 = FUNC_5(VAR_8->hia_opt) - 1;
 u32 VAR_11 = FUNC_13((u32)FUNC_8(VAR_8->hw_opt) + VAR_9, VAR_10);
 u32 VAR_12 = FUNC_13((u32)FUNC_12(VAR_8->hw_opt) + VAR_9, VAR_10);
 u32 VAR_13 = FUNC_13((u32)FUNC_9(VAR_8->hw_opt) + VAR_9, VAR_10);

 FUNC_14(FUNC_3(VAR_11 - 1) |
        FUNC_2(VAR_11) |
        FUNC_1(VAR_13 - 1) |
        FUNC_0(VAR_13),
        VAR_7->base + VAR_0);

 FUNC_14(FUNC_3(VAR_12 - 1) |
        FUNC_2(VAR_12),
        VAR_7->base + VAR_1);

 FUNC_14(FUNC_7(VAR_11 - 1) |
        FUNC_6(VAR_11),
        VAR_7->base + VAR_2);

 FUNC_14(FUNC_7(VAR_13 - 1) |
        FUNC_6(VAR_13),
        VAR_7->base + VAR_3);

 FUNC_14(FUNC_11(VAR_12 - 1) |
        FUNC_10(VAR_12),
        VAR_7->base + VAR_5);

 FUNC_14(0, VAR_7->base + VAR_6);
 FUNC_14(0, VAR_7->base + VAR_4);
}
