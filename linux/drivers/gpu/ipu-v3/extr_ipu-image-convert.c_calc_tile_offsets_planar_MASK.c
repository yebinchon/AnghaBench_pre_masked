
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct ipu_image_pixfmt {int uv_width_dec; int uv_height_dec; scalar_t__ uv_swapped; scalar_t__ uv_packed; } ;
struct ipu_image_convert_priv {TYPE_4__* ipu; } ;
struct TYPE_5__ {int height; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct ipu_image_convert_image {int stride; unsigned int num_rows; unsigned int num_cols; scalar_t__ type; TYPE_3__* tile; TYPE_2__ base; struct ipu_image_pixfmt* fmt; } ;
struct ipu_image_convert_ctx {struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {int ic_task; struct ipu_image_convert_priv* priv; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int top; int left; int offset; int u_off; int v_off; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,struct ipu_image_convert_ctx*,char*,unsigned int,unsigned int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct ipu_image_convert_ctx *VAR_2,
        struct ipu_image_convert_image *VAR_3)
{
 struct ipu_image_convert_chan *VAR_4 = VAR_2->chan;
 struct ipu_image_convert_priv *VAR_5 = VAR_4->priv;
 const struct ipu_image_pixfmt *VAR_6 = VAR_3->fmt;
 unsigned int VAR_7, VAR_8, VAR_9 = 0;
 u32 VAR_10, VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24;


 VAR_10 = VAR_3->base.pix.height;

 VAR_12 = VAR_3->stride;
 VAR_13 = VAR_12 / VAR_6->uv_width_dec;
 if (VAR_6->uv_packed)
  VAR_13 *= 2;

 VAR_23 = VAR_10 * VAR_12;
 VAR_24 = VAR_23 / (VAR_6->uv_width_dec * VAR_6->uv_height_dec);

 for (VAR_7 = 0; VAR_7 < VAR_3->num_rows; VAR_7++) {
  VAR_11 = VAR_3->tile[VAR_9].top;
  VAR_20 = VAR_11 * VAR_12;
  VAR_14 = (VAR_11 * VAR_13) / VAR_6->uv_height_dec;

  for (VAR_8 = 0; VAR_8 < VAR_3->num_cols; VAR_8++) {
   VAR_21 = VAR_3->tile[VAR_9].left;
   VAR_15 = VAR_21 / VAR_6->uv_width_dec;
   if (VAR_6->uv_packed)
    VAR_15 *= 2;

   VAR_22 = VAR_20 + VAR_21;
   VAR_16 = VAR_14 + VAR_15;

   VAR_17 = VAR_23 - VAR_22 + VAR_16;
   VAR_18 = (VAR_6->uv_packed) ? 0 : VAR_17 + VAR_24;
   if (VAR_6->uv_swapped) {
    VAR_19 = VAR_17;
    VAR_17 = VAR_18;
    VAR_18 = VAR_19;
   }

   VAR_3->tile[VAR_9].offset = VAR_22;
   VAR_3->tile[VAR_9].u_off = VAR_17;
   VAR_3->tile[VAR_9++].v_off = VAR_18;

   if ((VAR_22 & 0x7) || (VAR_17 & 0x7) || (VAR_18 & 0x7)) {
    FUNC_0(VAR_5->ipu->dev,
     "task %u: ctx %p: %s@[%d,%d]: "
     "y_off %08x, u_off %08x, v_off %08x\n",
     VAR_4->ic_task, VAR_2,
     VAR_3->type == VAR_1 ?
     "Input" : "Output", VAR_7, VAR_8,
     VAR_22, VAR_17, VAR_18);
    return -VAR_0;
   }
  }
 }

 return 0;
}
