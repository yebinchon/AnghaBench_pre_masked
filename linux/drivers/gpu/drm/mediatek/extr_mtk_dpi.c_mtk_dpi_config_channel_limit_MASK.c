
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dpi_yc_limit {int y_bottom; int y_top; int c_bottom; int c_top; } ;
struct mtk_dpi {int dummy; } ;


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
 int FUNC_0 (struct mtk_dpi*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct mtk_dpi *VAR_10,
      struct mtk_dpi_yc_limit *VAR_11)
{
 FUNC_0(VAR_10, VAR_5, VAR_11->y_bottom << VAR_6,
       VAR_7);
 FUNC_0(VAR_10, VAR_5, VAR_11->y_top << VAR_8,
       VAR_9);
 FUNC_0(VAR_10, VAR_4, VAR_11->c_bottom << VAR_0,
       VAR_1);
 FUNC_0(VAR_10, VAR_4, VAR_11->c_top << VAR_2,
       VAR_3);
}
