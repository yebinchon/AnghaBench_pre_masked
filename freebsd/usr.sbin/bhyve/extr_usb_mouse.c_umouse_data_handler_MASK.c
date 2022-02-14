
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct usb_data_xfer_block {int blen; int processed; int bdone; int * buf; } ;
struct usb_data_xfer {int head; int ndata; struct usb_data_xfer_block* data; } ;
struct umouse_softc {int polling; int mtx; int um_report; scalar_t__ newdata; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_data_xfer_block*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(void *VAR_8, struct usb_data_xfer *VAR_9, int VAR_10,
     int VAR_11)
{
 struct umouse_softc *VAR_12;
 struct usb_data_xfer_block *VAR_13;
 uint8_t *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 int VAR_18;

 FUNC_0(("umouse handle data - DIR=%s|EP=%d, blen %d\r\n",
         VAR_10 ? "IN" : "OUT", VAR_11, VAR_9->data[0].blen));



 VAR_14 = ((void*)0);
 VAR_18 = VAR_2;


 VAR_13 = ((void*)0);
 VAR_17 = VAR_9->head;
 for (VAR_16 = 0; VAR_16 < VAR_9->ndata; VAR_16++) {
  VAR_13 = &VAR_9->data[VAR_17];
  if (VAR_13->buf != ((void*)0) && VAR_13->blen != 0) {
   break;
  } else {
   VAR_13->processed = 1;
   VAR_13 = ((void*)0);
  }
  VAR_17 = (VAR_17 + 1) % VAR_5;
 }
 if (!VAR_13)
  goto done;

 VAR_14 = VAR_13->buf;
 VAR_15 = VAR_13->blen;

 if (VAR_14 == ((void*)0)) {
  FUNC_0(("umouse no buffer provided for input\r\n"));
  VAR_18 = VAR_1;
  goto done;
 }

 VAR_12 = VAR_8;

 if (VAR_10) {

  FUNC_3(&VAR_12->mtx);

  if (!VAR_12->newdata) {
   VAR_18 = VAR_0;
   FUNC_1(&VAR_9->data[VAR_9->head], VAR_6);
   FUNC_4(&VAR_12->mtx);
   goto done;
  }

  if (VAR_12->polling) {
   VAR_18 = VAR_4;
   FUNC_1(VAR_13, VAR_7);
   FUNC_4(&VAR_12->mtx);
   goto done;
  }
  VAR_12->polling = 1;

  if (VAR_15 > 0) {
   VAR_12->newdata = 0;

   VAR_13->processed = 1;
   VAR_13->bdone += 6;
   FUNC_2(VAR_14, &VAR_12->um_report, 6);
   VAR_13->blen = VAR_15 - 6;
   if (VAR_13->blen > 0)
    VAR_18 = VAR_3;
  }

  VAR_12->polling = 0;
  FUNC_4(&VAR_12->mtx);
 } else {
  FUNC_1(VAR_13, VAR_7);
  VAR_18 = VAR_4;
 }

done:
 return (VAR_18);
}
