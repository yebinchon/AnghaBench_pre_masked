
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int top; int left; int height; int width; } ;
struct TYPE_3__ {int top; int left; int height; int width; } ;
struct tpg_data {scalar_t__ color_enc; int real_rgb_range; int rgb_range; int real_quantization; int quantization; int real_ycbcr_enc; int ycbcr_enc; int real_hsv_enc; int hsv_enc; int real_xfer_func; int xfer_func; int colorspace; TYPE_2__ compose; TYPE_1__ crop; int field; int src_height; int src_width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(struct tpg_data *VAR_2)
{
 FUNC_0("tpg source WxH: %ux%u (%s)\n",
  VAR_2->src_width, VAR_2->src_height,
  FUNC_1(VAR_2->color_enc));
 FUNC_0("tpg field: %u\n", VAR_2->field);
 FUNC_0("tpg crop: %ux%u@%dx%d\n", VAR_2->crop.width, VAR_2->crop.height,
   VAR_2->crop.left, VAR_2->crop.top);
 FUNC_0("tpg compose: %ux%u@%dx%d\n", VAR_2->compose.width, VAR_2->compose.height,
   VAR_2->compose.left, VAR_2->compose.top);
 FUNC_0("tpg colorspace: %d\n", VAR_2->colorspace);
 FUNC_0("tpg transfer function: %d/%d\n", VAR_2->xfer_func, VAR_2->real_xfer_func);
 if (VAR_2->color_enc == VAR_0)
  FUNC_0("tpg HSV encoding: %d/%d\n",
   VAR_2->hsv_enc, VAR_2->real_hsv_enc);
 else if (VAR_2->color_enc == VAR_1)
  FUNC_0("tpg Y'CbCr encoding: %d/%d\n",
   VAR_2->ycbcr_enc, VAR_2->real_ycbcr_enc);
 FUNC_0("tpg quantization: %d/%d\n", VAR_2->quantization, VAR_2->real_quantization);
 FUNC_0("tpg RGB range: %d/%d\n", VAR_2->rgb_range, VAR_2->real_rgb_range);
}
