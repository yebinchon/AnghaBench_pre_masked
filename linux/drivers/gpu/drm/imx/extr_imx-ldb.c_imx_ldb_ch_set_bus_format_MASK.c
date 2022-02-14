
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx_ldb_channel {int chno; struct imx_ldb* ldb; } ;
struct imx_ldb {int ldb_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




__attribute__((used)) static void FUNC_0(struct imx_ldb_channel *VAR_5,
          u32 VAR_6)
{
 struct imx_ldb *VAR_7 = VAR_5->ldb;
 int VAR_8 = VAR_7->ldb_ctrl & VAR_4;

 switch (VAR_6) {
 case 130:
  break;
 case 128:
  if (VAR_5->chno == 0 || VAR_8)
   VAR_7->ldb_ctrl |= VAR_2;
  if (VAR_5->chno == 1 || VAR_8)
   VAR_7->ldb_ctrl |= VAR_3;
  break;
 case 129:
  if (VAR_5->chno == 0 || VAR_8)
   VAR_7->ldb_ctrl |= VAR_2 |
      VAR_0;
  if (VAR_5->chno == 1 || VAR_8)
   VAR_7->ldb_ctrl |= VAR_3 |
      VAR_1;
  break;
 }
}
