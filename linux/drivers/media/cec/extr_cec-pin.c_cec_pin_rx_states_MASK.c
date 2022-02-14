
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* msg; int len; void* rx_ts; } ;
struct cec_pin {int state; void* ts; int tx_generated_poll; int rx_eom; int rx_bit; int la_mask; int kthread_waitq; TYPE_1__ work_rx_msg; TYPE_1__ rx_msg; int rx_low_drive_cnt; void* rx_data_bit_too_short_delta; void* rx_data_bit_too_short_ts; int rx_data_bit_too_short_cnt; int rx_data_bit_too_long_cnt; void* rx_start_bit_too_short_delta; void* rx_start_bit_too_short_ts; int rx_start_bit_too_short_cnt; int rx_start_bit_too_long_cnt; int tx_extra_bytes; int tx_msg; void* rx_start_bit_low_too_short_delta; void* rx_start_bit_low_too_short_ts; int rx_start_bit_low_too_short_cnt; } ;
typedef void* s32 ;
typedef void* ktime_t ;



 int VAR_0 ;
 int VAR_1 ;







 void* VAR_2 ;


 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;

 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct cec_pin*) ;
 int FUNC_3 (struct cec_pin*) ;
 int FUNC_4 (struct cec_pin*) ;
 int FUNC_5 (struct cec_pin*) ;
 void* FUNC_6 (void*) ;
 void* FUNC_7 (void*,void*) ;
 int FUNC_8 (struct cec_pin*,int*) ;
 int FUNC_9 (struct cec_pin*) ;
 int FUNC_10 (struct cec_pin*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct cec_pin *VAR_10, ktime_t VAR_11)
{
 s32 VAR_12;
 bool VAR_13;
 bool VAR_14;
 bool VAR_15, VAR_16;
 u8 VAR_17;
 u8 VAR_18;

 switch (VAR_10->state) {

 case 129:
  VAR_13 = FUNC_4(VAR_10);
  if (!VAR_13)
   break;
  VAR_10->state = 130;
  VAR_12 = FUNC_7(VAR_11, VAR_10->ts);

  if (VAR_12 < VAR_7 - VAR_6) {
   if (!VAR_10->rx_start_bit_low_too_short_cnt++) {
    VAR_10->rx_start_bit_low_too_short_ts = FUNC_6(VAR_10->ts);
    VAR_10->rx_start_bit_low_too_short_delta = VAR_12;
   }
   FUNC_5(VAR_10);
   break;
  }
  if (FUNC_8(VAR_10, &VAR_18)) {
   FUNC_1(&VAR_10->tx_msg, VAR_18 >> 4, VAR_18 & 0xf);
   VAR_10->tx_generated_poll = 1;
   VAR_10->tx_extra_bytes = 0;
   VAR_10->state = VAR_3;
   VAR_10->ts = VAR_11;
  }
  break;

 case 130:
  VAR_13 = FUNC_4(VAR_10);
  VAR_12 = FUNC_7(VAR_11, VAR_10->ts);




  if (VAR_13 && VAR_12 > VAR_8) {
   VAR_10->rx_start_bit_too_long_cnt++;
   FUNC_5(VAR_10);
   break;
  }
  if (VAR_13)
   break;

  if (VAR_12 < VAR_9 - VAR_6) {
   if (!VAR_10->rx_start_bit_too_short_cnt++) {
    VAR_10->rx_start_bit_too_short_ts = FUNC_6(VAR_10->ts);
    VAR_10->rx_start_bit_too_short_delta = VAR_12;
   }
   FUNC_5(VAR_10);
   break;
  }
  if (FUNC_9(VAR_10)) {

   FUNC_3(VAR_10);
   VAR_10->state = VAR_2;
   VAR_10->rx_low_drive_cnt++;
   break;
  }
  VAR_10->state = 132;
  VAR_10->ts = VAR_11;
  VAR_10->rx_eom = 0;
  break;

 case 132:
  VAR_13 = FUNC_4(VAR_10);
  VAR_10->state = 133;
  switch (VAR_10->rx_bit % 10) {
  default:
   if (VAR_10->rx_bit / 10 < VAR_1)
    VAR_10->rx_msg.msg[VAR_10->rx_bit / 10] |=
     VAR_13 << (7 - (VAR_10->rx_bit % 10));
   break;
  case 128:
   VAR_10->rx_eom = VAR_13;
   VAR_10->rx_msg.len = VAR_10->rx_bit / 10 + 1;
   break;
  case 138:
   break;
  }
  VAR_10->rx_bit++;
  break;

 case 133:
  VAR_10->state = 131;
  break;

 case 131:
  VAR_13 = FUNC_4(VAR_10);
  VAR_12 = FUNC_7(VAR_11, VAR_10->ts);




  if (VAR_13 && VAR_12 > VAR_4) {
   VAR_10->rx_data_bit_too_long_cnt++;
   FUNC_5(VAR_10);
   break;
  }
  if (VAR_13)
   break;

  if (FUNC_9(VAR_10)) {

   FUNC_3(VAR_10);
   VAR_10->state = VAR_2;
   VAR_10->rx_low_drive_cnt++;
   break;
  }





  if (VAR_12 < VAR_5) {
   if (!VAR_10->rx_data_bit_too_short_cnt++) {
    VAR_10->rx_data_bit_too_short_ts = FUNC_6(VAR_10->ts);
    VAR_10->rx_data_bit_too_short_delta = VAR_12;
   }
   FUNC_3(VAR_10);
   VAR_10->state = VAR_2;
   VAR_10->rx_low_drive_cnt++;
   break;
  }
  VAR_10->ts = VAR_11;
  if (VAR_10->rx_bit % 10 != 9) {
   VAR_10->state = 132;
   break;
  }

  VAR_17 = FUNC_0(&VAR_10->rx_msg);
  VAR_15 = VAR_17 == VAR_0;

  VAR_16 = VAR_15 || (VAR_10->la_mask & (1 << VAR_17));

  VAR_14 = VAR_15 ? 1 : !VAR_16;

  if (VAR_16 && FUNC_10(VAR_10)) {

   VAR_14 = !VAR_14;
  }

  if (VAR_14) {

   VAR_10->state = 136;
   break;
  }
  FUNC_3(VAR_10);
  VAR_10->state = 135;
  break;

 case 135:
  FUNC_2(VAR_10);
  VAR_10->state = 134;
  break;

 case 134:
 case 136:
  VAR_13 = FUNC_4(VAR_10);
  if (VAR_13 && VAR_10->rx_eom) {
   VAR_10->work_rx_msg = VAR_10->rx_msg;
   VAR_10->work_rx_msg.rx_ts = FUNC_6(VAR_11);
   FUNC_11(&VAR_10->kthread_waitq);
   VAR_10->ts = VAR_11;
   VAR_10->state = 137;
   break;
  }
  VAR_10->rx_bit++;
  VAR_10->state = 131;
  break;

 case 137:
  FUNC_5(VAR_10);
  break;

 default:
  break;
 }
}
