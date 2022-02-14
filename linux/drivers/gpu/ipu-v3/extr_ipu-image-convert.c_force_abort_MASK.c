
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_image_convert_run {int list; int status; struct ipu_image_convert_ctx* ctx; } ;
struct ipu_image_convert_ctx {struct ipu_image_convert_chan* chan; } ;
struct ipu_image_convert_chan {int irqlock; struct ipu_image_convert_run* current_run; int done_q; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipu_image_convert_run*) ;
 int FUNC_1 (struct ipu_image_convert_chan*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ipu_image_convert_chan*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct ipu_image_convert_ctx *VAR_1)
{
 struct ipu_image_convert_chan *VAR_2 = VAR_1->chan;
 struct ipu_image_convert_run *VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_2->irqlock, VAR_4);

 VAR_3 = VAR_2->current_run;
 if (VAR_3 && VAR_3->ctx == VAR_1) {
  FUNC_0(VAR_3);
  VAR_3->status = -VAR_0;
  FUNC_2(&VAR_3->list, &VAR_2->done_q);
  VAR_2->current_run = ((void*)0);
  FUNC_3(VAR_2);
 }

 FUNC_5(&VAR_2->irqlock, VAR_4);

 FUNC_1(VAR_2);
}
