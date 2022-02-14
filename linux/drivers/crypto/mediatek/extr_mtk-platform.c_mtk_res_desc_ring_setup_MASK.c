
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_sys_cap {int hia_opt; } ;
struct mtk_cryp {scalar_t__ base; TYPE_1__** ring; } ;
struct TYPE_2__ {int res_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_18(struct mtk_cryp *VAR_8,
        int VAR_9, struct mtk_sys_cap *VAR_10)
{
 u32 VAR_11 = 2;
 u32 VAR_12 = ((1 << FUNC_4(VAR_10->hia_opt)) / VAR_11) - 1;


 FUNC_17(0, VAR_8->base + FUNC_7(VAR_9));


 FUNC_17(VAR_0, VAR_8->base + FUNC_10(VAR_9));
 FUNC_17(VAR_0, VAR_8->base + FUNC_12(VAR_9));

 FUNC_17(0, VAR_8->base + FUNC_11(VAR_9));
 FUNC_17(0, VAR_8->base + FUNC_13(VAR_9));
 FUNC_17(0, VAR_8->base + FUNC_9(VAR_9));


 FUNC_17(0, VAR_8->base + FUNC_5(VAR_9));
 FUNC_17(VAR_8->ring[VAR_9]->res_dma, VAR_8->base + FUNC_6(VAR_9));

 FUNC_17(VAR_3, VAR_8->base + FUNC_14(VAR_9));
 FUNC_17(VAR_7, VAR_8->base + FUNC_15(VAR_9));






 FUNC_17(VAR_6 | VAR_5,
        VAR_8->base + FUNC_16(VAR_9));






 FUNC_17(FUNC_3(VAR_4) | FUNC_2(VAR_1),
        VAR_8->base + FUNC_8(VAR_9));





 FUNC_17(FUNC_0(VAR_12 * VAR_1) |
        FUNC_1(VAR_12 * VAR_11) |
        VAR_2,
     VAR_8->base + FUNC_7(VAR_9));
}
