
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_image_convert_priv {TYPE_1__* ipu; } ;
struct ipu_image_convert_image {int num_cols; int num_rows; } ;
struct ipu_image_convert_ctx {int rot_mode; struct ipu_image_convert_image out; struct ipu_image_convert_image in; struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {int ic_task; struct ipu_image_convert_priv* priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,struct ipu_image_convert_ctx*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct ipu_image_convert_ctx *VAR_4,
    int VAR_5, int VAR_6)
{
 struct ipu_image_convert_chan *VAR_7 = VAR_4->chan;
 struct ipu_image_convert_priv *VAR_8 = VAR_7->priv;
 struct ipu_image_convert_image *VAR_9 = &VAR_4->in;
 struct ipu_image_convert_image *VAR_10 = &VAR_4->out;
 int VAR_11, VAR_12;


 if (VAR_4->rot_mode == VAR_0)
  return VAR_5 * VAR_9->num_cols + VAR_6;





 VAR_5 = VAR_5 * 2 - (VAR_9->num_rows - 1);
 VAR_6 = VAR_6 * 2 - (VAR_9->num_cols - 1);


 if (VAR_4->rot_mode & VAR_1) {
  VAR_12 = -VAR_5;
  VAR_11 = VAR_6;
 } else {
  VAR_12 = VAR_6;
  VAR_11 = VAR_5;
 }


 if (VAR_4->rot_mode & VAR_2)
  VAR_12 = -VAR_12;
 if (VAR_4->rot_mode & VAR_3)
  VAR_11 = -VAR_11;

 FUNC_0(VAR_8->ipu->dev, "task %u: ctx %p: [%d,%d] --> [%d,%d]\n",
  VAR_7->ic_task, VAR_4, VAR_6, VAR_5, VAR_12, VAR_11);





 VAR_11 += VAR_10->num_rows - 1;
 VAR_12 += VAR_10->num_cols - 1;
 VAR_11 /= 2;
 VAR_12 /= 2;

 return VAR_11 * VAR_10->num_cols + VAR_12;
}
