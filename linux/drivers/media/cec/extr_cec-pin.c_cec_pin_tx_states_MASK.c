
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {unsigned int len; int* msg; } ;
struct TYPE_3__ {int* msg; int len; } ;
struct cec_pin {int state; int tx_nacked; int tx_bit; int tx_extra_bytes; int tx_post_eom; int rx_bit; TYPE_2__ tx_msg; int tx_ignore_nack_until_eom; int ts; TYPE_1__ rx_msg; int kthread_waitq; void* work_tx_status; void* work_tx_ts; int tx_generated_poll; int tx_low_drive_cnt; } ;
typedef void* ktime_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;

 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct cec_pin*) ;
 int FUNC_2 (struct cec_pin*) ;
 int FUNC_3 (struct cec_pin*) ;
 int FUNC_4 (struct cec_pin*) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (struct cec_pin*) ;
 int FUNC_8 (struct cec_pin*) ;
 int FUNC_9 (struct cec_pin*) ;
 int FUNC_10 (struct cec_pin*) ;
 int FUNC_11 (struct cec_pin*) ;
 int FUNC_12 (struct cec_pin*) ;
 int FUNC_13 (struct cec_pin*) ;
 int FUNC_14 (struct cec_pin*) ;
 int FUNC_15 (struct cec_pin*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct cec_pin *VAR_7, ktime_t VAR_8)
{
 bool VAR_9;
 bool VAR_10, VAR_11;

 switch (VAR_7->state) {
 case 129:
  if (FUNC_3(VAR_7))
   FUNC_4(VAR_7);
  break;

 case 131:
  if (FUNC_15(VAR_7)) {




   VAR_7->state = 132;
  } else if (FUNC_11(VAR_7)) {




   VAR_7->state = 133;
  } else {
   VAR_7->state = 135;
  }

  FUNC_1(VAR_7);
  break;

 case 130:
  VAR_7->state = 134;

  FUNC_1(VAR_7);
  break;

 case 145:
 case 143:
 case 144:
  if (VAR_7->tx_nacked) {
   FUNC_4(VAR_7);
   VAR_7->tx_msg.len = 0;
   if (VAR_7->tx_generated_poll)
    break;
   VAR_7->work_tx_ts = VAR_8;
   VAR_7->work_tx_status = VAR_5;
   FUNC_16(&VAR_7->kthread_waitq);
   break;
  }

 case 151:
 case 149:
 case 150:
 case 147:
 case 141:
 case 146:
  if (!FUNC_3(VAR_7) && !VAR_7->tx_generated_poll) {




   VAR_7->tx_msg.len = 0;
   VAR_7->state = 129;
   VAR_7->work_tx_ts = VAR_8;
   VAR_7->work_tx_status = VAR_4;
   VAR_7->tx_low_drive_cnt++;
   FUNC_16(&VAR_7->kthread_waitq);
   break;
  }

 case 139:
  if (FUNC_9(VAR_7)) {

   FUNC_4(VAR_7);
   VAR_7->tx_msg.len = 0;
   if (VAR_7->tx_generated_poll)
    break;
   VAR_7->work_tx_ts = VAR_8;
   VAR_7->work_tx_status = VAR_6;
   FUNC_16(&VAR_7->kthread_waitq);
   break;
  }
  VAR_7->tx_bit++;

 case 135:
 case 132:
 case 133:
 case 134:
  if (FUNC_12(VAR_7)) {

   FUNC_2(VAR_7);
   VAR_7->state = VAR_1;
   VAR_7->tx_msg.len = 0;
   if (VAR_7->tx_generated_poll)
    break;
   VAR_7->work_tx_ts = VAR_8;
   VAR_7->work_tx_status = VAR_4;
   VAR_7->tx_low_drive_cnt++;
   FUNC_16(&VAR_7->kthread_waitq);
   break;
  }
  if (VAR_7->tx_bit / 10 >= VAR_7->tx_msg.len + VAR_7->tx_extra_bytes) {
   FUNC_4(VAR_7);
   VAR_7->tx_msg.len = 0;
   if (VAR_7->tx_generated_poll)
    break;
   VAR_7->work_tx_ts = VAR_8;
   VAR_7->work_tx_status = VAR_6;
   FUNC_16(&VAR_7->kthread_waitq);
   break;
  }

  switch (VAR_7->tx_bit % 10) {
  default: {






   unsigned int VAR_12 = (VAR_7->tx_bit / 10);
   u8 VAR_13 = VAR_12;

   if (VAR_12 < VAR_7->tx_msg.len)
    VAR_13 = VAR_7->tx_msg.msg[VAR_12];
   VAR_9 = VAR_13 & (1 << (7 - (VAR_7->tx_bit % 10)));

   VAR_7->state = VAR_9 ? 140 :
      148;
   break;
  }
  case 128: {
   unsigned int VAR_14 = VAR_7->tx_msg.len +
            VAR_7->tx_extra_bytes;
   unsigned int VAR_15 = VAR_7->tx_bit / 10;

   VAR_9 = !VAR_7->tx_post_eom && VAR_15 == VAR_14 - 1;
   if (VAR_14 > 1 && VAR_15 == VAR_14 - 2 &&
       FUNC_8(VAR_7)) {

    VAR_9 = 1;
    VAR_7->tx_post_eom = 1;
   } else if (VAR_9 && FUNC_13(VAR_7)) {

    VAR_9 = 0;
   }
   VAR_7->state = VAR_9 ? 140 :
      148;
   break;
  }
  case 152:
   VAR_7->state = 140;
   break;
  }
  if (FUNC_7(VAR_7))
   VAR_7->state = 138;
  FUNC_2(VAR_7);
  break;

 case 148:
 case 140:
  VAR_9 = VAR_7->state == 140;
  VAR_10 = VAR_7->tx_bit % 10 == 152;
  if (VAR_9 && (VAR_7->tx_bit < 4 || VAR_10)) {
   VAR_7->state = 142;
  } else if (!VAR_10 && FUNC_14(VAR_7)) {

   VAR_7->state = VAR_9 ? 141 :
      149;
  } else if (!VAR_10 && FUNC_10(VAR_7)) {

   VAR_7->state = VAR_9 ? 146 :
      150;
  } else {
   VAR_7->state = VAR_9 ? 147 :
      151;
  }
  FUNC_1(VAR_7);
  break;

 case 138:
  VAR_7->state = 139;
  FUNC_1(VAR_7);
  break;

 case 142:

  VAR_9 = FUNC_3(VAR_7);
  VAR_10 = VAR_7->tx_bit % 10 == 152;
  if (!VAR_9 && !VAR_10 && !VAR_7->tx_generated_poll) {
   VAR_7->tx_msg.len = 0;
   VAR_7->work_tx_ts = VAR_8;
   VAR_7->work_tx_status = VAR_3;
   FUNC_16(&VAR_7->kthread_waitq);
   VAR_7->rx_bit = VAR_7->tx_bit;
   VAR_7->tx_bit = 0;
   FUNC_6(VAR_7->rx_msg.msg, 0, sizeof(VAR_7->rx_msg.msg));
   VAR_7->rx_msg.msg[0] = VAR_7->tx_msg.msg[0];
   VAR_7->rx_msg.msg[0] &= (0xff << (8 - VAR_7->rx_bit));
   VAR_7->rx_msg.len = 0;
   VAR_7->ts = FUNC_5(VAR_8, VAR_2);
   VAR_7->state = VAR_0;
   VAR_7->rx_bit++;
   break;
  }
  VAR_7->state = 145;
  if (!VAR_10 && FUNC_14(VAR_7)) {

   VAR_7->state = 143;
  } else if (!VAR_10 && FUNC_10(VAR_7)) {

   VAR_7->state = 144;
  }
  if (!VAR_10)
   break;

  VAR_11 = FUNC_0(&VAR_7->tx_msg) ? VAR_9 : !VAR_9;
  if (!VAR_11 && (!VAR_7->tx_ignore_nack_until_eom ||
      VAR_7->tx_bit / 10 == VAR_7->tx_msg.len - 1) &&
      !VAR_7->tx_post_eom) {
   VAR_7->tx_nacked = 1;
  }
  break;

 case 136:
  FUNC_1(VAR_7);
  VAR_7->state = 137;
  break;

 case 137:
  FUNC_4(VAR_7);
  break;

 default:
  break;
 }
}
