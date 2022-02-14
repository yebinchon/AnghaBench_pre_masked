
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_sys_cap {int hia_opt; } ;
struct mtk_cryp {scalar_t__ base; TYPE_1__** ring; } ;
struct TYPE_2__ {int cmd_dma; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_0 ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int VAR_3 ;
 int FUNC_14 (int) ;
 int VAR_4 ;
 int FUNC_15 (int) ;
 int VAR_5 ;
 int FUNC_16 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_17(struct mtk_cryp *VAR_6,
        int VAR_7, struct mtk_sys_cap *VAR_8)
{

 u32 VAR_9 =
  ((1 << FUNC_11(VAR_8->hia_opt)) / VAR_5) - 1;


 FUNC_16(0, VAR_6->base + FUNC_2(VAR_7));


 FUNC_16(VAR_1, VAR_6->base + FUNC_5(VAR_7));
 FUNC_16(VAR_1, VAR_6->base + FUNC_7(VAR_7));

 FUNC_16(0, VAR_6->base + FUNC_6(VAR_7));
 FUNC_16(0, VAR_6->base + FUNC_8(VAR_7));
 FUNC_16(0, VAR_6->base + FUNC_4(VAR_7));


 FUNC_16(0, VAR_6->base + FUNC_0(VAR_7));
 FUNC_16(VAR_6->ring[VAR_7]->cmd_dma, VAR_6->base + FUNC_1(VAR_7));

 FUNC_16(VAR_4, VAR_6->base + FUNC_9(VAR_7));


 FUNC_16(VAR_0, VAR_6->base + FUNC_10(VAR_7));





 FUNC_16(FUNC_15(VAR_5) |
     FUNC_14(VAR_3) |
        VAR_2,
        VAR_6->base + FUNC_3(VAR_7));

 FUNC_16(FUNC_12(VAR_9 * VAR_3) |
     FUNC_13(VAR_9 * VAR_5),
     VAR_6->base + FUNC_2(VAR_7));
}
