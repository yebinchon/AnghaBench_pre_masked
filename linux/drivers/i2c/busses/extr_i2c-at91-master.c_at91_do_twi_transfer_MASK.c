
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int timeout; } ;
struct at91_twi_dev {int buf_len; unsigned int transfer_status; int dev; scalar_t__ fifo_size; scalar_t__ recv_len_abort; TYPE_3__ adapter; int cmd_complete; scalar_t__ use_dma; TYPE_2__* msg; int use_alt_cmd; TYPE_1__* pdata; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int has_unre_flag; int has_alt_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (struct at91_twi_dev*) ;
 int FUNC_3 (struct at91_twi_dev*) ;
 unsigned int FUNC_4 (struct at91_twi_dev*,int ) ;
 int FUNC_5 (struct at91_twi_dev*) ;
 int FUNC_6 (struct at91_twi_dev*,int ,int) ;
 int FUNC_7 (struct at91_twi_dev*) ;
 int FUNC_8 (struct at91_twi_dev*) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct at91_twi_dev *VAR_27)
{
 int VAR_28;
 unsigned long VAR_29;
 bool VAR_30 = VAR_27->pdata->has_unre_flag;
 bool VAR_31 = VAR_27->pdata->has_alt_cmd;
 FUNC_9(VAR_27->dev, "transfer: %s %zu bytes.\n",
  (VAR_27->msg->flags & VAR_25) ? "read" : "write", VAR_27->buf_len);

 FUNC_11(&VAR_27->cmd_complete);
 VAR_27->transfer_status = 0;


 FUNC_4(VAR_27, VAR_14);

 if (VAR_27->fifo_size) {
  unsigned VAR_32 = FUNC_4(VAR_27, VAR_2);


  VAR_32 &= ~(VAR_4 |
        VAR_3);
  VAR_32 |= FUNC_1(VAR_9);
  VAR_32 |= FUNC_0(VAR_9);
  FUNC_6(VAR_27, VAR_2, VAR_32);


  FUNC_6(VAR_27, VAR_1,
          VAR_17 | VAR_12);
 }

 if (!VAR_27->buf_len) {
  FUNC_6(VAR_27, VAR_1, VAR_11);
  FUNC_6(VAR_27, VAR_5, VAR_18);
 } else if (VAR_27->msg->flags & VAR_25) {
  unsigned VAR_33 = VAR_15;


  if (!VAR_27->use_alt_cmd && VAR_27->buf_len <= 1 &&
      !(VAR_27->msg->flags & VAR_26))
   VAR_33 |= VAR_16;
  FUNC_6(VAR_27, VAR_1, VAR_33);
  if (VAR_27->use_dma && (VAR_27->buf_len > VAR_0)) {
   FUNC_6(VAR_27, VAR_5, VAR_8);
   FUNC_5(VAR_27);
  } else {
   FUNC_6(VAR_27, VAR_5,
           VAR_18 |
           VAR_8 |
           VAR_13);
  }
 } else {
  if (VAR_27->use_dma && (VAR_27->buf_len > VAR_0)) {
   FUNC_6(VAR_27, VAR_5, VAR_8);
   FUNC_7(VAR_27);
  } else {
   FUNC_8(VAR_27);
   FUNC_6(VAR_27, VAR_5,
           VAR_18 | VAR_8 |
           (VAR_27->buf_len ? VAR_19 : 0));
  }
 }

 VAR_29 = FUNC_12(&VAR_27->cmd_complete,
           VAR_27->adapter.timeout);
 if (VAR_29 == 0) {
  VAR_27->transfer_status |= FUNC_4(VAR_27, VAR_14);
  FUNC_10(VAR_27->dev, "controller timed out\n");
  FUNC_2(VAR_27);
  VAR_28 = -VAR_24;
  goto error;
 }
 if (VAR_27->transfer_status & VAR_8) {
  FUNC_9(VAR_27->dev, "received nack\n");
  VAR_28 = -VAR_23;
  goto error;
 }
 if (VAR_27->transfer_status & VAR_10) {
  FUNC_10(VAR_27->dev, "overrun while reading\n");
  VAR_28 = -VAR_21;
  goto error;
 }
 if (VAR_30 && VAR_27->transfer_status & VAR_20) {
  FUNC_10(VAR_27->dev, "underrun while writing\n");
  VAR_28 = -VAR_21;
  goto error;
 }
 if ((VAR_31 || VAR_27->fifo_size) &&
     (VAR_27->transfer_status & VAR_6)) {
  FUNC_10(VAR_27->dev, "tx locked\n");
  VAR_28 = -VAR_21;
  goto error;
 }
 if (VAR_27->recv_len_abort) {
  FUNC_10(VAR_27->dev, "invalid smbus block length recvd\n");
  VAR_28 = -VAR_22;
  goto error;
 }

 FUNC_9(VAR_27->dev, "transfer complete\n");

 return 0;

error:

 FUNC_3(VAR_27);

 if ((VAR_31 || VAR_27->fifo_size) &&
     (VAR_27->transfer_status & VAR_6)) {
  FUNC_9(VAR_27->dev, "unlock tx\n");
  FUNC_6(VAR_27, VAR_1,
          VAR_17 | VAR_7);
 }
 return VAR_28;
}
