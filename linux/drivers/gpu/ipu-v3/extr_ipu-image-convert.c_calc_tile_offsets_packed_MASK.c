
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ipu_image_pixfmt {int bpp; } ;
struct ipu_image_convert_priv {TYPE_2__* ipu; } ;
struct ipu_image_convert_image {int stride; unsigned int num_rows; unsigned int num_cols; scalar_t__ type; TYPE_1__* tile; struct ipu_image_pixfmt* fmt; } ;
struct ipu_image_convert_ctx {struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {int ic_task; struct ipu_image_convert_priv* priv; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int top; int left; int offset; scalar_t__ v_off; scalar_t__ u_off; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ,struct ipu_image_convert_ctx*,char*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(struct ipu_image_convert_ctx *VAR_2,
        struct ipu_image_convert_image *VAR_3)
{
 struct ipu_image_convert_chan *VAR_4 = VAR_2->chan;
 struct ipu_image_convert_priv *VAR_5 = VAR_4->priv;
 const struct ipu_image_pixfmt *VAR_6 = VAR_3->fmt;
 unsigned int VAR_7, VAR_8, VAR_9 = 0;
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13, VAR_14;


 VAR_11 = VAR_3->stride;
 VAR_10 = VAR_6->bpp;

 for (VAR_7 = 0; VAR_7 < VAR_3->num_rows; VAR_7++) {
  VAR_13 = VAR_3->tile[VAR_9].top * VAR_11;

  for (VAR_8 = 0; VAR_8 < VAR_3->num_cols; VAR_8++) {
   VAR_14 = (VAR_3->tile[VAR_9].left * VAR_10) >> 3;

   VAR_12 = VAR_13 + VAR_14;

   VAR_3->tile[VAR_9].offset = VAR_12;
   VAR_3->tile[VAR_9].u_off = 0;
   VAR_3->tile[VAR_9++].v_off = 0;

   if (VAR_12 & 0x7) {
    FUNC_0(VAR_5->ipu->dev,
     "task %u: ctx %p: %s@[%d,%d]: "
     "phys %08x\n",
     VAR_4->ic_task, VAR_2,
     VAR_3->type == VAR_1 ?
     "Input" : "Output", VAR_7, VAR_8,
     VAR_13 + VAR_14);
    return -VAR_0;
   }
  }
 }

 return 0;
}
