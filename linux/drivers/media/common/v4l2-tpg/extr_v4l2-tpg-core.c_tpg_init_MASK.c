
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int width; unsigned int height; } ;
struct TYPE_3__ {unsigned int width; unsigned int height; } ;
struct tpg_data {unsigned int scaled_width; unsigned int src_width; unsigned int src_height; unsigned int buf_height; int recalc_colors; int recalc_square_border; int brightness; int contrast; int saturation; int perc_fill; int hsv_enc; int colorspace; int field; void* mv_vert_mode; void* mv_hor_mode; scalar_t__ hue; TYPE_2__ compose; TYPE_1__ crop; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tpg_data*,int ,int) ;
 int FUNC_1 (struct tpg_data*,int ) ;

void FUNC_2(struct tpg_data *VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->scaled_width = VAR_5->src_width = VAR_6;
 VAR_5->src_height = VAR_5->buf_height = VAR_7;
 VAR_5->crop.width = VAR_5->compose.width = VAR_6;
 VAR_5->crop.height = VAR_5->compose.height = VAR_7;
 VAR_5->recalc_colors = 1;
 VAR_5->recalc_square_border = 1;
 VAR_5->brightness = 128;
 VAR_5->contrast = 128;
 VAR_5->saturation = 128;
 VAR_5->hue = 0;
 VAR_5->mv_hor_mode = VAR_0;
 VAR_5->mv_vert_mode = VAR_0;
 VAR_5->field = VAR_2;
 FUNC_1(VAR_5, VAR_4);
 VAR_5->colorspace = VAR_1;
 VAR_5->perc_fill = 100;
 VAR_5->hsv_enc = VAR_3;
}
