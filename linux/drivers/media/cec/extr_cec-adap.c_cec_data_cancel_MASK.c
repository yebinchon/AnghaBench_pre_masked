
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int tx_status; int tx_error_cnt; void* tx_ts; int rx_status; void* rx_ts; } ;
struct cec_data {TYPE_2__ msg; TYPE_1__* adap; scalar_t__ attempts; int list; } ;
struct TYPE_3__ {int transmit_queue_sz; struct cec_data* transmitting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cec_data*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*,int) ;
 void* FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cec_data *VAR_3, u8 VAR_4)
{




 if (VAR_3->adap->transmitting == VAR_3) {
  VAR_3->adap->transmitting = ((void*)0);
 } else {
  FUNC_3(&VAR_3->list);
  if (!(VAR_3->msg.tx_status & VAR_2))
   VAR_3->adap->transmit_queue_sz--;
 }

 if (VAR_3->msg.tx_status & VAR_2) {
  VAR_3->msg.rx_ts = FUNC_2();
  VAR_3->msg.rx_status = VAR_0;
 } else {
  VAR_3->msg.tx_ts = FUNC_2();
  VAR_3->msg.tx_status |= VAR_4 |
           VAR_1;
  VAR_3->msg.tx_error_cnt++;
  VAR_3->attempts = 0;
 }


 FUNC_1(VAR_3->adap, &VAR_3->msg, 1);

 FUNC_0(VAR_3);
}
