
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ bytes; } ;
struct TYPE_3__ {scalar_t__ bytes; } ;
struct modem {scalar_t__ loop_data; int xfer_out; int xfer_in; int usb_dev; scalar_t__ random_tx_delay; scalar_t__ random_tx_length; scalar_t__ errors; TYPE_2__ tx_bytes; TYPE_1__ rx_bytes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (struct timeval*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int*,scalar_t__,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int* FUNC_13 (scalar_t__) ;
 int FUNC_14 (int*,int*,scalar_t__) ;
 int FUNC_15 (int*,scalar_t__) ;
 int FUNC_16 (int*,scalar_t__) ;
 int FUNC_17 (char*,...) ;
 int VAR_0 ;
 int FUNC_18 (struct timeval*,struct timeval*,struct timeval*) ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 (scalar_t__) ;

__attribute__((used)) static void
FUNC_21(struct modem *VAR_1, uint32_t VAR_2)
{
 struct timeval VAR_3;
 struct timeval VAR_4;
 struct timeval VAR_5;

 time_t VAR_6;

 uint8_t VAR_7 = 0;
 uint8_t VAR_8 = 0;
 uint8_t VAR_9 = 0;

 uint32_t VAR_10 = 0;

 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;

 uint8_t *VAR_14 = 0;
 uint8_t *VAR_15 = 0;

 FUNC_2(&VAR_4, 0);

 VAR_6 = VAR_4.tv_sec;

 FUNC_17("\n");

 VAR_11 = FUNC_7(VAR_1->xfer_in);
 VAR_12 = FUNC_7(VAR_1->xfer_out);


 VAR_13 = (VAR_11 < VAR_12) ? VAR_11 : VAR_12;

 if (VAR_11 != VAR_12)
  FUNC_17("WARNING: Buffer sizes are un-equal: %u vs %u\n", VAR_11, VAR_12);

 VAR_14 = FUNC_13(VAR_13);
 if (VAR_14 == ((void*)0))
  goto fail;

 VAR_15 = FUNC_13(VAR_13);
 if (VAR_15 == ((void*)0))
  goto fail;

 while (1) {

  FUNC_2(&VAR_3, 0);

  if (VAR_6 != VAR_3.tv_sec) {

   FUNC_17("STATUS: ID=%u, RX=%u bytes/sec, TX=%u bytes/sec, ERR=%d\n",
       (int)VAR_10,
       (int)VAR_1->rx_bytes.bytes,
       (int)VAR_1->tx_bytes.bytes,
       (int)VAR_1->errors);

   VAR_1->rx_bytes.bytes = 0;
   VAR_1->tx_bytes.bytes = 0;

   FUNC_0(VAR_0);

   VAR_6 = VAR_3.tv_sec;

   VAR_10++;
  }
  FUNC_18(&VAR_3, &VAR_4, &VAR_5);

  if ((VAR_5.tv_sec < 0) || (VAR_5.tv_sec >= (int)VAR_2))
   break;

  FUNC_4(VAR_1->usb_dev);

  if (!FUNC_9(VAR_1->xfer_in)) {
   if (VAR_7) {
    if (FUNC_8(VAR_1->xfer_in) == 0) {
     FUNC_15(VAR_14, FUNC_6(VAR_1->xfer_in, 0));
    } else {
     VAR_1->errors++;
     FUNC_20(10000);
    }
    VAR_7 = 0;
    VAR_8 = 1;
   }
   if (VAR_1->loop_data == 0) {
    FUNC_10(VAR_1->xfer_in, VAR_14, VAR_13, 0);
    FUNC_11(VAR_1->xfer_in);
    VAR_7 = 1;
    VAR_8 = 0;
   }
  }
  if (!FUNC_9(VAR_1->xfer_out)) {

   uint32_t VAR_16;
   uint32_t VAR_17;

   if (VAR_9) {
    if (FUNC_8(VAR_1->xfer_out) != 0) {
     VAR_1->errors++;
     FUNC_20(10000);
    }
   }
   if (VAR_1->random_tx_length) {
    VAR_16 = ((uint32_t)FUNC_19()) % ((uint32_t)VAR_13);
   } else {
    VAR_16 = VAR_13;
   }

   if (VAR_1->random_tx_delay) {
    VAR_17 = ((uint32_t)FUNC_19()) % 16000U;
   } else {
    VAR_17 = 0;
   }

   if (VAR_1->loop_data != 0) {
    if (VAR_8 != 0) {
     VAR_16 = FUNC_6(VAR_1->xfer_in, 0);
     FUNC_14(VAR_15, VAR_14, VAR_16);
     VAR_8 = 0;
    } else {
     VAR_16 = VAR_13 + 1;
    }
    if (!FUNC_9(VAR_1->xfer_in)) {
     FUNC_10(VAR_1->xfer_in, VAR_14, VAR_13, 0);
     FUNC_11(VAR_1->xfer_in);
     VAR_7 = 1;
    }
   } else {
    FUNC_16(VAR_15, VAR_16);
   }

   if (VAR_16 <= VAR_13) {
    FUNC_10(VAR_1->xfer_out, VAR_15, VAR_16, 0);

    if (VAR_17 != 0)
     FUNC_20(VAR_17);

    FUNC_11(VAR_1->xfer_out);

    VAR_9 = 1;
   }
  }
  FUNC_5(VAR_1->usb_dev, 500);

  if (FUNC_3(VAR_1->usb_dev) != 0) {
   FUNC_17("Device disconnected\n");
   break;
  }
 }

 FUNC_12(VAR_1->xfer_in);
 FUNC_12(VAR_1->xfer_out);

 FUNC_17("\nData stress test done!\n");

fail:
 if (VAR_14)
  FUNC_1(VAR_14);
 if (VAR_15)
  FUNC_1(VAR_15);
}
