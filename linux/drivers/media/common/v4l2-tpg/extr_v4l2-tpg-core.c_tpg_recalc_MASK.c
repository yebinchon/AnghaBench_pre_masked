
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int recalc_colors; int recalc_lines; scalar_t__ real_xfer_func; scalar_t__ xfer_func; scalar_t__ real_ycbcr_enc; scalar_t__ ycbcr_enc; scalar_t__ real_quantization; scalar_t__ quantization; scalar_t__ color_enc; int recalc_square_border; int colorspace; int hsv_enc; int real_hsv_enc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct tpg_data*) ;
 int FUNC_4 (struct tpg_data*) ;
 int FUNC_5 (struct tpg_data*) ;

__attribute__((used)) static void FUNC_6(struct tpg_data *VAR_4)
{
 if (VAR_4->recalc_colors) {
  VAR_4->recalc_colors = 0;
  VAR_4->recalc_lines = 1;
  VAR_4->real_xfer_func = VAR_4->xfer_func;
  VAR_4->real_ycbcr_enc = VAR_4->ycbcr_enc;
  VAR_4->real_hsv_enc = VAR_4->hsv_enc;
  VAR_4->real_quantization = VAR_4->quantization;

  if (VAR_4->xfer_func == VAR_2)
   VAR_4->real_xfer_func =
    FUNC_1(VAR_4->colorspace);

  if (VAR_4->ycbcr_enc == VAR_3)
   VAR_4->real_ycbcr_enc =
    FUNC_2(VAR_4->colorspace);

  if (VAR_4->quantization == VAR_1)
   VAR_4->real_quantization =
    FUNC_0(
     VAR_4->color_enc != VAR_0,
     VAR_4->colorspace, VAR_4->real_ycbcr_enc);

  FUNC_4(VAR_4);
 }
 if (VAR_4->recalc_square_border) {
  VAR_4->recalc_square_border = 0;
  FUNC_3(VAR_4);
 }
 if (VAR_4->recalc_lines) {
  VAR_4->recalc_lines = 0;
  FUNC_5(VAR_4);
 }
}
