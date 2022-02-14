
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_mipi_tx {unsigned long data_rate; int dev; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,char*,unsigned long) ;
 struct mtk_mipi_tx* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 struct mtk_mipi_tx *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->dev, "set rate: %lu Hz\n", VAR_1);

 VAR_3->data_rate = VAR_1;

 return 0;
}
