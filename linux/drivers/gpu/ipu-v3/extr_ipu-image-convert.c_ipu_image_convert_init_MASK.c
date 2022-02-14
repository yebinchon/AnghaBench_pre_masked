
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_soc {struct ipu_image_convert_priv* image_convert_priv; } ;
struct ipu_image_convert_priv {struct ipu_image_convert_chan* chan; struct ipu_soc* ipu; } ;
struct ipu_image_convert_chan {int ic_task; int out_eof_irq; int rot_out_eof_irq; int done_q; int pending_q; int ctx_list; int irqlock; int * dma_ch; struct ipu_image_convert_priv* priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct ipu_image_convert_priv* FUNC_1 (struct device*,int,int ) ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ipu_soc *VAR_4, struct device *VAR_5)
{
 struct ipu_image_convert_priv *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_4->image_convert_priv = VAR_6;
 VAR_6->ipu = VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct ipu_image_convert_chan *VAR_8 = &VAR_6->chan[VAR_7];

  VAR_8->ic_task = VAR_7;
  VAR_8->priv = VAR_6;
  VAR_8->dma_ch = &VAR_3[VAR_7];
  VAR_8->out_eof_irq = -1;
  VAR_8->rot_out_eof_irq = -1;

  FUNC_2(&VAR_8->irqlock);
  FUNC_0(&VAR_8->ctx_list);
  FUNC_0(&VAR_8->pending_q);
  FUNC_0(&VAR_8->done_q);
 }

 return 0;
}
