
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_dpi_sync_param {int sync_width; int back_porch; int front_porch; } ;
struct mtk_dpi {int dummy; } ;


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
     struct mtk_dpi_sync_param *VAR_9)
{
 FUNC_0(VAR_8, VAR_1,
       VAR_9->sync_width << VAR_6, VAR_7);
 FUNC_0(VAR_8, VAR_0,
       VAR_9->back_porch << VAR_2, VAR_3);
 FUNC_0(VAR_8, VAR_0, VAR_9->front_porch << VAR_4,
       VAR_5);
}
