
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipu_image_convert_run {struct ipu_image_convert_ctx* ctx; } ;
struct ipu_image_convert_priv {TYPE_1__* ipu; } ;
struct ipu_image_convert_ctx {int rot_mode; } ;
struct ipu_image_convert_chan {int irqlock; struct ipu_image_convert_run* current_run; struct ipu_image_convert_priv* priv; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ipu_image_convert_run*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct ipu_image_convert_chan *VAR_4 = VAR_3;
 struct ipu_image_convert_priv *VAR_5 = VAR_4->priv;
 struct ipu_image_convert_ctx *VAR_6;
 struct ipu_image_convert_run *VAR_7;
 unsigned long VAR_8;
 irqreturn_t VAR_9;

 FUNC_3(&VAR_4->irqlock, VAR_8);


 VAR_7 = VAR_4->current_run;
 if (!VAR_7) {
  VAR_9 = VAR_1;
  goto out;
 }

 VAR_6 = VAR_7->ctx;

 if (!FUNC_2(VAR_6->rot_mode)) {

  FUNC_0(VAR_5->ipu->dev, "Unexpected rotation interrupt\n");
  FUNC_4(&VAR_4->irqlock, VAR_8);
  return VAR_0;
 }

 VAR_9 = FUNC_1(VAR_7);
out:
 FUNC_4(&VAR_4->irqlock, VAR_8);
 return VAR_9;
}
