
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct cec_pin {size_t state; int tx_bit; int rx_bit; int work_pin_events_dropped_cnt; int enable_irq_failed; int timer_100ms_overruns; int timer_max_overrun; int timer_sum_overrun; int rx_start_bit_low_too_short_cnt; int rx_start_bit_too_short_cnt; int rx_start_bit_too_long_cnt; int rx_data_bit_too_short_cnt; int rx_data_bit_too_long_cnt; int rx_low_drive_cnt; int tx_low_drive_cnt; TYPE_1__* ops; scalar_t__ timer_300ms_overruns; scalar_t__ timer_cnt; int rx_data_bit_too_short_ts; int rx_data_bit_too_short_delta; int rx_start_bit_too_short_ts; int rx_start_bit_too_short_delta; int rx_start_bit_low_too_short_ts; int rx_start_bit_low_too_short_delta; } ;
struct cec_adapter {struct cec_pin* pin; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int (* read ) (struct cec_adapter*) ;int (* status ) (struct cec_adapter*,struct seq_file*) ;} ;


 int FUNC_0 (struct seq_file*,char*,int,...) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (struct cec_adapter*) ;
 int FUNC_2 (struct cec_adapter*,struct seq_file*) ;

__attribute__((used)) static void FUNC_3(struct cec_adapter *VAR_1,
           struct seq_file *VAR_2)
{
 struct cec_pin *VAR_3 = VAR_1->pin;

 FUNC_0(VAR_2, "state: %s\n", VAR_0[VAR_3->state].name);
 FUNC_0(VAR_2, "tx_bit: %d\n", VAR_3->tx_bit);
 FUNC_0(VAR_2, "rx_bit: %d\n", VAR_3->rx_bit);
 FUNC_0(VAR_2, "cec pin: %d\n", VAR_3->ops->read(VAR_1));
 FUNC_0(VAR_2, "cec pin events dropped: %u\n",
     VAR_3->work_pin_events_dropped_cnt);
 FUNC_0(VAR_2, "irq failed: %d\n", VAR_3->enable_irq_failed);
 if (VAR_3->timer_100ms_overruns) {
  FUNC_0(VAR_2, "timer overruns > 100ms: %u of %u\n",
      VAR_3->timer_100ms_overruns, VAR_3->timer_cnt);
  FUNC_0(VAR_2, "timer overruns > 300ms: %u of %u\n",
      VAR_3->timer_300ms_overruns, VAR_3->timer_cnt);
  FUNC_0(VAR_2, "max timer overrun: %u usecs\n",
      VAR_3->timer_max_overrun);
  FUNC_0(VAR_2, "avg timer overrun: %u usecs\n",
      VAR_3->timer_sum_overrun / VAR_3->timer_100ms_overruns);
 }
 if (VAR_3->rx_start_bit_low_too_short_cnt)
  FUNC_0(VAR_2,
      "rx start bit low too short: %u (delta %u, ts %llu)\n",
      VAR_3->rx_start_bit_low_too_short_cnt,
      VAR_3->rx_start_bit_low_too_short_delta,
      VAR_3->rx_start_bit_low_too_short_ts);
 if (VAR_3->rx_start_bit_too_short_cnt)
  FUNC_0(VAR_2,
      "rx start bit too short: %u (delta %u, ts %llu)\n",
      VAR_3->rx_start_bit_too_short_cnt,
      VAR_3->rx_start_bit_too_short_delta,
      VAR_3->rx_start_bit_too_short_ts);
 if (VAR_3->rx_start_bit_too_long_cnt)
  FUNC_0(VAR_2, "rx start bit too long: %u\n",
      VAR_3->rx_start_bit_too_long_cnt);
 if (VAR_3->rx_data_bit_too_short_cnt)
  FUNC_0(VAR_2,
      "rx data bit too short: %u (delta %u, ts %llu)\n",
      VAR_3->rx_data_bit_too_short_cnt,
      VAR_3->rx_data_bit_too_short_delta,
      VAR_3->rx_data_bit_too_short_ts);
 if (VAR_3->rx_data_bit_too_long_cnt)
  FUNC_0(VAR_2, "rx data bit too long: %u\n",
      VAR_3->rx_data_bit_too_long_cnt);
 FUNC_0(VAR_2, "rx initiated low drive: %u\n", VAR_3->rx_low_drive_cnt);
 FUNC_0(VAR_2, "tx detected low drive: %u\n", VAR_3->tx_low_drive_cnt);
 VAR_3->work_pin_events_dropped_cnt = 0;
 VAR_3->timer_cnt = 0;
 VAR_3->timer_100ms_overruns = 0;
 VAR_3->timer_300ms_overruns = 0;
 VAR_3->timer_max_overrun = 0;
 VAR_3->timer_sum_overrun = 0;
 VAR_3->rx_start_bit_low_too_short_cnt = 0;
 VAR_3->rx_start_bit_too_short_cnt = 0;
 VAR_3->rx_start_bit_too_long_cnt = 0;
 VAR_3->rx_data_bit_too_short_cnt = 0;
 VAR_3->rx_data_bit_too_long_cnt = 0;
 VAR_3->rx_low_drive_cnt = 0;
 VAR_3->tx_low_drive_cnt = 0;
 if (VAR_3->ops->status)
  VAR_3->ops->status(VAR_1, VAR_2);
}
