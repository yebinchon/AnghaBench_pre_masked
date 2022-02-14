
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at91_twi_dma {int xfer_in_progress; scalar_t__ direction; int buf_mapped; int * sg; int chan_tx; int chan_rx; } ;
struct at91_twi_dev {int buf_len; int dev; struct at91_twi_dma dma; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct at91_twi_dev*) ;
 int FUNC_1 (struct at91_twi_dev*) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct at91_twi_dev *VAR_1)
{
 struct at91_twi_dma *VAR_2 = &VAR_1->dma;

 FUNC_1(VAR_1);

 if (VAR_2->xfer_in_progress) {
  if (VAR_2->direction == VAR_0)
   FUNC_3(VAR_2->chan_rx);
  else
   FUNC_3(VAR_2->chan_tx);
  VAR_2->xfer_in_progress = 0;
 }
 if (VAR_2->buf_mapped) {
  FUNC_2(VAR_1->dev, FUNC_4(&VAR_2->sg[0]),
     VAR_1->buf_len, VAR_2->direction);
  VAR_2->buf_mapped = 0;
 }

 FUNC_0(VAR_1);
}
