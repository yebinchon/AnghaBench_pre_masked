
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dpi {int dummy; } ;
typedef enum mtk_dpi_out_bit_num { ____Placeholder_mtk_dpi_out_bit_num } mtk_dpi_out_bit_num ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mtk_dpi*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_dpi *VAR_7,
       enum mtk_dpi_out_bit_num VAR_8)
{
 u32 VAR_9;

 switch (VAR_8) {
 case 128:
  VAR_9 = VAR_5;
  break;
 case 131:
  VAR_9 = VAR_2;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 default:
  VAR_9 = VAR_5;
  break;
 }
 FUNC_0(VAR_7, VAR_0, VAR_9 << VAR_1,
       VAR_6);
}
