
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipu_image_tile {int size; int height; int width; int stride; int rot_stride; int top; int left; } ;
struct ipu_image_convert_priv {TYPE_2__* ipu; } ;
struct ipu_image_convert_image {scalar_t__ type; unsigned int num_cols; TYPE_1__* fmt; struct ipu_image_tile* tile; } ;
struct ipu_image_convert_ctx {unsigned int downsize_coeff_h; unsigned int downsize_coeff_v; unsigned int num_tiles; size_t* out_tile_map; struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {int ic_task; struct ipu_image_convert_priv* priv; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int bpp; scalar_t__ planar; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,struct ipu_image_convert_ctx*,char*,unsigned int const,unsigned int const,int,int,int ,int ) ;
 int FUNC_1 (int ,char*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct ipu_image_convert_ctx *VAR_3,
    struct ipu_image_convert_image *VAR_4)
{
 struct ipu_image_convert_chan *VAR_5 = VAR_3->chan;
 struct ipu_image_convert_priv *VAR_6 = VAR_5->priv;
 unsigned int VAR_7 = 1024;
 unsigned int VAR_8 = 1024;
 unsigned int VAR_9;

 if (VAR_4->type == VAR_1) {

  VAR_7 <<= VAR_3->downsize_coeff_h;
  VAR_8 <<= VAR_3->downsize_coeff_v;
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->num_tiles; VAR_9++) {
  struct ipu_image_tile *VAR_10;
  const unsigned int VAR_11 = VAR_9 / VAR_4->num_cols;
  const unsigned int VAR_12 = VAR_9 % VAR_4->num_cols;

  if (VAR_4->type == VAR_2)
   VAR_10 = &VAR_4->tile[VAR_3->out_tile_map[VAR_9]];
  else
   VAR_10 = &VAR_4->tile[VAR_9];

  VAR_10->size = ((VAR_10->height * VAR_4->fmt->bpp) >> 3) *
   VAR_10->width;

  if (VAR_4->fmt->planar) {
   VAR_10->stride = VAR_10->width;
   VAR_10->rot_stride = VAR_10->height;
  } else {
   VAR_10->stride =
    (VAR_4->fmt->bpp * VAR_10->width) >> 3;
   VAR_10->rot_stride =
    (VAR_4->fmt->bpp * VAR_10->height) >> 3;
  }

  FUNC_0(VAR_6->ipu->dev,
   "task %u: ctx %p: %s@[%u,%u]: %ux%u@%u,%u\n",
   VAR_5->ic_task, VAR_3,
   VAR_4->type == VAR_1 ? "Input" : "Output",
   VAR_11, VAR_12,
   VAR_10->width, VAR_10->height, VAR_10->left, VAR_10->top);

  if (!VAR_10->width || VAR_10->width > VAR_7 ||
      !VAR_10->height || VAR_10->height > VAR_8) {
   FUNC_1(VAR_6->ipu->dev, "invalid %s tile size: %ux%u\n",
    VAR_4->type == VAR_1 ? "input" :
    "output", VAR_10->width, VAR_10->height);
   return -VAR_0;
  }
 }

 return 0;
}
