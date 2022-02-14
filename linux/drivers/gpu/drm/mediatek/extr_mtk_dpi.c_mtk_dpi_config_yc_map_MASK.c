
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dpi {int dummy; } ;
typedef enum mtk_dpi_out_yc_map { ____Placeholder_mtk_dpi_out_yc_map } mtk_dpi_out_yc_map ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mtk_dpi*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_dpi *VAR_8,
      enum mtk_dpi_out_yc_map VAR_9)
{
 u32 VAR_10;

 switch (VAR_9) {
 case 130:
  VAR_10 = VAR_5;
  break;
 case 131:
  VAR_10 = VAR_3;
  break;
 case 128:
  VAR_10 = VAR_7;
  break;
 case 132:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_6;
  break;
 default:
  VAR_10 = VAR_5;
  break;
 }

 FUNC_0(VAR_8, VAR_0, VAR_10 << VAR_1, VAR_4);
}
