
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dpi_polarities {scalar_t__ ck_pol; scalar_t__ de_pol; scalar_t__ hsync_pol; scalar_t__ vsync_pol; } ;
struct mtk_dpi {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct mtk_dpi*,int ,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct mtk_dpi *VAR_6,
          struct mtk_dpi_polarities *VAR_7)
{
 unsigned int VAR_8;

 VAR_8 = (VAR_7->ck_pol == VAR_4 ? 0 : VAR_0) |
       (VAR_7->de_pol == VAR_4 ? 0 : VAR_1) |
       (VAR_7->hsync_pol == VAR_4 ? 0 : VAR_3) |
       (VAR_7->vsync_pol == VAR_4 ? 0 : VAR_5);
 FUNC_0(VAR_6, VAR_2, VAR_8,
       VAR_0 | VAR_1 | VAR_3 | VAR_5);
}
