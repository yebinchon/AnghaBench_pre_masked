
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct mtk_mipi_tx {int pll; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy*) ;
 struct mtk_mipi_tx* FUNC_2 (struct phy*) ;

__attribute__((used)) static int FUNC_3(struct phy *VAR_0)
{
 struct mtk_mipi_tx *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_0(VAR_1->pll);
 if (VAR_2 < 0)
  return VAR_2;


 FUNC_1(VAR_0);

 return 0;
}
