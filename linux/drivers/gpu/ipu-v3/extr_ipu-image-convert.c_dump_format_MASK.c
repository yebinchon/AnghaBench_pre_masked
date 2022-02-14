
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipu_image_convert_priv {TYPE_1__* ipu; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_7__ {TYPE_2__ pix; } ;
struct ipu_image_convert_image {scalar_t__ type; TYPE_4__* fmt; int num_rows; int num_cols; TYPE_3__ base; } ;
struct ipu_image_convert_ctx {struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {int ic_task; struct ipu_image_convert_priv* priv; } ;
struct TYPE_8__ {int fourcc; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ,struct ipu_image_convert_ctx*,char*,int ,int ,int ,int ,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct ipu_image_convert_ctx *VAR_1,
   struct ipu_image_convert_image *VAR_2)
{
 struct ipu_image_convert_chan *VAR_3 = VAR_1->chan;
 struct ipu_image_convert_priv *VAR_4 = VAR_3->priv;

 FUNC_0(VAR_4->ipu->dev,
  "task %u: ctx %p: %s format: %dx%d (%dx%d tiles), %c%c%c%c\n",
  VAR_3->ic_task, VAR_1,
  VAR_2->type == VAR_0 ? "Output" : "Input",
  VAR_2->base.pix.width, VAR_2->base.pix.height,
  VAR_2->num_cols, VAR_2->num_rows,
  VAR_2->fmt->fourcc & 0xff,
  (VAR_2->fmt->fourcc >> 8) & 0xff,
  (VAR_2->fmt->fourcc >> 16) & 0xff,
  (VAR_2->fmt->fourcc >> 24) & 0xff);
}
