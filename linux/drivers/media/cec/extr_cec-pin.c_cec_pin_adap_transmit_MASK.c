
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct cec_msg {int len; } ;
struct cec_pin {scalar_t__ state; scalar_t__ tx_bit; scalar_t__ work_tx_status; struct cec_msg tx_msg; scalar_t__ tx_extra_bytes; scalar_t__ tx_signal_free_time; } ;
struct cec_adapter {struct cec_pin* pin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cec_pin*) ;
 scalar_t__ FUNC_1 (struct cec_pin*) ;
 scalar_t__ FUNC_2 (struct cec_pin*) ;

__attribute__((used)) static int FUNC_3(struct cec_adapter *VAR_2, u8 VAR_3,
          u32 VAR_4, struct cec_msg *VAR_5)
{
 struct cec_pin *VAR_6 = VAR_2->pin;






 if (VAR_6->state != VAR_1 &&
     VAR_4 > VAR_0)
  VAR_4 = VAR_0;

 VAR_6->tx_signal_free_time = VAR_4;
 VAR_6->tx_extra_bytes = 0;
 VAR_6->tx_msg = *VAR_5;
 if (VAR_5->len > 1) {

  VAR_6->tx_extra_bytes = FUNC_1(VAR_6);
 }
 if (VAR_5->len > 2 && FUNC_2(VAR_6)) {

  VAR_6->tx_msg.len--;
 }
 VAR_6->work_tx_status = 0;
 VAR_6->tx_bit = 0;
 FUNC_0(VAR_6);
 return 0;
}
