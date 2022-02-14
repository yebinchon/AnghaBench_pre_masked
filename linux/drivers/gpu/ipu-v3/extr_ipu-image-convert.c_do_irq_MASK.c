
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipuv3_channel {int dummy; } ;
struct ipu_image_tile {scalar_t__ offset; int v_off; int u_off; } ;
struct ipu_image_convert_run {int list; scalar_t__ status; struct ipu_image_convert_ctx* ctx; } ;
struct TYPE_4__ {scalar_t__ phys0; } ;
struct ipu_image_convert_image {TYPE_2__ base; struct ipu_image_tile* tile; TYPE_1__* fmt; } ;
struct ipu_image_convert_ctx {size_t next_tile; size_t num_tiles; unsigned int* out_tile_map; int cur_buf_num; int double_buffering; scalar_t__ aborting; int rot_mode; struct ipu_image_convert_image out; struct ipu_image_convert_image in; struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {int * current_run; int done_q; struct ipuv3_channel* in_chan; struct ipuv3_channel* out_chan; struct ipuv3_channel* rotation_out_chan; int irqlock; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ planar; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ipu_image_convert_run*,size_t) ;
 int FUNC_1 (struct ipu_image_convert_run*) ;
 scalar_t__ FUNC_2 (struct ipu_image_convert_ctx*) ;
 int FUNC_3 (struct ipuv3_channel*,int,scalar_t__) ;
 int FUNC_4 (struct ipuv3_channel*,int ,int ) ;
 int FUNC_5 (struct ipuv3_channel*,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ipu_image_convert_chan*) ;

__attribute__((used)) static irqreturn_t FUNC_10(struct ipu_image_convert_run *VAR_3)
{
 struct ipu_image_convert_ctx *VAR_4 = VAR_3->ctx;
 struct ipu_image_convert_chan *VAR_5 = VAR_4->chan;
 struct ipu_image_tile *VAR_6, *VAR_7;
 struct ipu_image_convert_image *VAR_8 = &VAR_4->in;
 struct ipu_image_convert_image *VAR_9 = &VAR_4->out;
 struct ipuv3_channel *VAR_10;
 unsigned int VAR_11;

 FUNC_8(&VAR_5->irqlock);

 VAR_10 = FUNC_6(VAR_4->rot_mode) ?
  VAR_5->rotation_out_chan : VAR_5->out_chan;
 if (VAR_4->aborting && !VAR_4->double_buffering) {
  FUNC_1(VAR_3);
  VAR_3->status = -VAR_0;
  goto done;
 }

 if (VAR_4->next_tile == VAR_4->num_tiles) {



  FUNC_1(VAR_3);
  VAR_3->status = 0;
  goto done;
 }




 if (!VAR_4->double_buffering) {
  if (FUNC_2(VAR_4)) {
   FUNC_1(VAR_3);
   FUNC_0(VAR_3, VAR_4->next_tile);
  } else {
   VAR_6 = &VAR_8->tile[VAR_4->next_tile];
   VAR_11 = VAR_4->out_tile_map[VAR_4->next_tile];
   VAR_7 = &VAR_9->tile[VAR_11];

   FUNC_3(VAR_5->in_chan, 0,
          VAR_8->base.phys0 +
          VAR_6->offset);
   FUNC_3(VAR_10, 0,
          VAR_9->base.phys0 +
          VAR_7->offset);
   if (VAR_8->fmt->planar)
    FUNC_4(VAR_5->in_chan,
       VAR_6->u_off,
       VAR_6->v_off);
   if (VAR_9->fmt->planar)
    FUNC_4(VAR_10,
       VAR_7->u_off,
       VAR_7->v_off);

   FUNC_5(VAR_5->in_chan, 0);
   FUNC_5(VAR_10, 0);
  }
 } else if (VAR_4->next_tile < VAR_4->num_tiles - 1) {

  VAR_6 = &VAR_8->tile[VAR_4->next_tile + 1];
  VAR_11 = VAR_4->out_tile_map[VAR_4->next_tile + 1];
  VAR_7 = &VAR_9->tile[VAR_11];

  FUNC_3(VAR_5->in_chan, VAR_4->cur_buf_num,
         VAR_8->base.phys0 + VAR_6->offset);
  FUNC_3(VAR_10, VAR_4->cur_buf_num,
         VAR_9->base.phys0 + VAR_7->offset);

  FUNC_5(VAR_5->in_chan, VAR_4->cur_buf_num);
  FUNC_5(VAR_10, VAR_4->cur_buf_num);

  VAR_4->cur_buf_num ^= 1;
 }

 VAR_4->next_tile++;
 return VAR_1;
done:
 FUNC_7(&VAR_3->list, &VAR_5->done_q);
 VAR_5->current_run = ((void*)0);
 FUNC_9(VAR_5);
 return VAR_2;
}
