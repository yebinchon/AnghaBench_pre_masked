
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_data_xfer_block {int blen; int ccs; scalar_t__ bdone; scalar_t__ processed; void* hci_data; void* buf; } ;
struct usb_data_xfer {int ndata; size_t tail; struct usb_data_xfer_block* data; } ;


 int VAR_0 ;

struct usb_data_xfer_block *
FUNC_0(struct usb_data_xfer *VAR_1, void *VAR_2, int VAR_3,
                     void *VAR_4, int VAR_5)
{
 struct usb_data_xfer_block *VAR_6;

 if (VAR_1->ndata >= VAR_0)
  return (((void*)0));

 VAR_6 = &VAR_1->data[VAR_1->tail];
 VAR_6->buf = VAR_2;
 VAR_6->blen = VAR_3;
 VAR_6->hci_data = VAR_4;
 VAR_6->ccs = VAR_5;
 VAR_6->processed = 0;
 VAR_6->bdone = 0;
 VAR_1->ndata++;
 VAR_1->tail = (VAR_1->tail + 1) % VAR_0;
 return (VAR_6);
}
