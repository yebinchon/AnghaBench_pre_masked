
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_image_convert_run {struct ipu_image_convert_ctx* ctx; } ;
struct ipu_image_convert_ctx {int rot_mode; } ;
struct ipu_image_convert_chan {int irqlock; struct ipu_image_convert_run* current_run; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ipu_image_convert_run*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct ipu_image_convert_chan *VAR_4 = VAR_3;
 struct ipu_image_convert_ctx *VAR_5;
 struct ipu_image_convert_run *VAR_6;
 unsigned long VAR_7;
 irqreturn_t VAR_8;

 FUNC_2(&VAR_4->irqlock, VAR_7);


 VAR_6 = VAR_4->current_run;
 if (!VAR_6) {
  VAR_8 = VAR_1;
  goto out;
 }

 VAR_5 = VAR_6->ctx;

 if (FUNC_1(VAR_5->rot_mode)) {

  FUNC_3(&VAR_4->irqlock, VAR_7);
  return VAR_0;
 }

 VAR_8 = FUNC_0(VAR_6);
out:
 FUNC_3(&VAR_4->irqlock, VAR_7);
 return VAR_8;
}
