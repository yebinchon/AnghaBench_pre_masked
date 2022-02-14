
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct phy {int dummy; } ;
struct mtk_mipi_tx {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mtk_mipi_tx*,scalar_t__,int ) ;
 int FUNC_1 (struct mtk_mipi_tx*,int ,int ) ;
 struct mtk_mipi_tx* FUNC_2 (struct phy*) ;

__attribute__((used)) static void FUNC_3(struct phy *VAR_5)
{
 struct mtk_mipi_tx *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;

 FUNC_1(VAR_6, VAR_2,
        VAR_4);

 for (VAR_7 = VAR_0;
      VAR_7 <= VAR_1; VAR_7 += 4)
  FUNC_0(VAR_6, VAR_7, VAR_3);
}
