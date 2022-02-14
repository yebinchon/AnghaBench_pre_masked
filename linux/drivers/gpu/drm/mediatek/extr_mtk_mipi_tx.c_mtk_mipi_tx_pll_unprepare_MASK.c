
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mipi_tx {int dev; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mtk_mipi_tx*,int ,int) ;
 struct mtk_mipi_tx* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct mtk_mipi_tx*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_16)
{
 struct mtk_mipi_tx *VAR_17 = FUNC_2(VAR_16);

 FUNC_0(VAR_17->dev, "unprepare\n");

 FUNC_1(VAR_17, VAR_2,
          VAR_12);

 FUNC_3(VAR_17, VAR_4,
    VAR_13, 0);

 FUNC_3(VAR_17, VAR_3,
    VAR_14 |
    VAR_15,
    VAR_14);

 FUNC_1(VAR_17, VAR_5,
          VAR_10);

 FUNC_1(VAR_17, VAR_1,
          VAR_8 | VAR_9);

 FUNC_1(VAR_17, VAR_0,
          VAR_6 | VAR_7);

 FUNC_1(VAR_17, VAR_2,
          VAR_11);
}
