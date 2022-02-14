
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_dpi_sync_param {int sync_width; int shift_half_line; int back_porch; int front_porch; } ;
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
     struct mtk_dpi_sync_param *VAR_9,
     u32 VAR_10, u32 VAR_11)
{
 FUNC_0(VAR_8, VAR_10,
       VAR_9->sync_width << VAR_7,
       VAR_6);
 FUNC_0(VAR_8, VAR_10,
       VAR_9->shift_half_line << VAR_5,
       VAR_4);
 FUNC_0(VAR_8, VAR_11,
       VAR_9->back_porch << VAR_1,
       VAR_0);
 FUNC_0(VAR_8, VAR_11,
       VAR_9->front_porch << VAR_3,
       VAR_2);
}
