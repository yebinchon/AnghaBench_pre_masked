
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ipu_image_convert_priv {TYPE_2__* ipu; } ;
struct TYPE_7__ {int bytesperline; int width; int pixelformat; } ;
struct ipu_image {TYPE_3__ pix; } ;
struct ipu_image_convert_image {int type; struct ipu_image base; int stride; TYPE_4__* fmt; } ;
struct ipu_image_convert_ctx {TYPE_1__* chan; } ;
typedef enum ipu_image_convert_type { ____Placeholder_ipu_image_convert_type } ipu_image_convert_type ;
struct TYPE_8__ {scalar_t__ planar; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {struct ipu_image_convert_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 TYPE_4__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ipu_image_convert_ctx *VAR_2,
        struct ipu_image_convert_image *VAR_3,
        struct ipu_image *VAR_4,
        enum ipu_image_convert_type VAR_5)
{
 struct ipu_image_convert_priv *VAR_6 = VAR_2->chan->priv;

 VAR_3->base = *VAR_4;
 VAR_3->type = VAR_5;

 VAR_3->fmt = FUNC_1(VAR_4->pix.pixelformat);
 if (!VAR_3->fmt) {
  FUNC_0(VAR_6->ipu->dev, "pixelformat not supported for %s\n",
   VAR_5 == VAR_1 ? "Output" : "Input");
  return -VAR_0;
 }

 if (VAR_3->fmt->planar)
  VAR_3->stride = VAR_3->base.pix.width;
 else
  VAR_3->stride = VAR_3->base.pix.bytesperline;

 return 0;
}
