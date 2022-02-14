
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ipu_image_convert_priv {TYPE_1__* ipu; } ;
struct ipu_image_convert_dma_chan {int rot_out; int rot_in; int out; int in; } ;
struct ipu_image_convert_chan {int out_eof_irq; int rot_out_eof_irq; void* rotation_out_chan; void* out_chan; void* rotation_in_chan; void* in_chan; void* ic; int ic_task; struct ipu_image_convert_priv* priv; struct ipu_image_convert_dma_chan* dma_ch; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 void* FUNC_3 (TYPE_1__*,int ) ;
 void* FUNC_4 (TYPE_1__*,void*,int ) ;
 void* FUNC_5 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct ipu_image_convert_chan*) ;
 int FUNC_7 (int,int ,int ,int ,char*,struct ipu_image_convert_chan*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct ipu_image_convert_chan *VAR_5)
{
 const struct ipu_image_convert_dma_chan *VAR_6 = VAR_5->dma_ch;
 struct ipu_image_convert_priv *VAR_7 = VAR_5->priv;
 int VAR_8;


 VAR_5->ic = FUNC_3(VAR_7->ipu, VAR_5->ic_task);
 if (FUNC_0(VAR_5->ic)) {
  FUNC_2(VAR_7->ipu->dev, "could not acquire IC\n");
  VAR_8 = FUNC_1(VAR_5->ic);
  goto err;
 }


 VAR_5->in_chan = FUNC_5(VAR_7->ipu, VAR_6->in);
 VAR_5->out_chan = FUNC_5(VAR_7->ipu, VAR_6->out);
 if (FUNC_0(VAR_5->in_chan) || FUNC_0(VAR_5->out_chan)) {
  FUNC_2(VAR_7->ipu->dev, "could not acquire idmac channels\n");
  VAR_8 = -VAR_0;
  goto err;
 }

 VAR_5->rotation_in_chan = FUNC_5(VAR_7->ipu, VAR_6->rot_in);
 VAR_5->rotation_out_chan = FUNC_5(VAR_7->ipu, VAR_6->rot_out);
 if (FUNC_0(VAR_5->rotation_in_chan) || FUNC_0(VAR_5->rotation_out_chan)) {
  FUNC_2(VAR_7->ipu->dev,
   "could not acquire idmac rotation channels\n");
  VAR_8 = -VAR_0;
  goto err;
 }


 VAR_5->out_eof_irq = FUNC_4(VAR_7->ipu,
        VAR_5->out_chan,
        VAR_1);

 VAR_8 = FUNC_7(VAR_5->out_eof_irq, VAR_3, VAR_2,
       0, "ipu-ic", VAR_5);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7->ipu->dev, "could not acquire irq %d\n",
    VAR_5->out_eof_irq);
  VAR_5->out_eof_irq = -1;
  goto err;
 }

 VAR_5->rot_out_eof_irq = FUNC_4(VAR_7->ipu,
           VAR_5->rotation_out_chan,
           VAR_1);

 VAR_8 = FUNC_7(VAR_5->rot_out_eof_irq, VAR_4, VAR_2,
       0, "ipu-ic", VAR_5);
 if (VAR_8 < 0) {
  FUNC_2(VAR_7->ipu->dev, "could not acquire irq %d\n",
   VAR_5->rot_out_eof_irq);
  VAR_5->rot_out_eof_irq = -1;
  goto err;
 }

 return 0;
err:
 FUNC_6(VAR_5);
 return VAR_8;
}
