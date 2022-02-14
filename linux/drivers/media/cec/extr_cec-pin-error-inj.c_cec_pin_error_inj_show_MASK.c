
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct seq_file {int dummy; } ;
struct cec_pin {unsigned int* error_inj; scalar_t__** error_inj_args; scalar_t__ tx_custom_low_usecs; scalar_t__ tx_custom_high_usecs; scalar_t__ tx_custom_pulse; scalar_t__ tx_ignore_nack_until_eom; } ;
struct cec_adapter {struct cec_pin* pin; } ;
struct TYPE_2__ {char* cmd; unsigned int mode_offset; int arg_idx; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct seq_file*,unsigned int,unsigned int) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__) ;
 int FUNC_3 (struct seq_file*,char const*) ;

int FUNC_4(struct cec_adapter *VAR_3, struct seq_file *VAR_4)
{
 struct cec_pin *VAR_5 = VAR_3->pin;
 unsigned int VAR_6, VAR_7;

 FUNC_3(VAR_4, "# Clear error injections:\n");
 FUNC_3(VAR_4, "#   clear          clear all rx and tx error injections\n");
 FUNC_3(VAR_4, "#   rx-clear       clear all rx error injections\n");
 FUNC_3(VAR_4, "#   tx-clear       clear all tx error injections\n");
 FUNC_3(VAR_4, "#   <op> clear     clear all rx and tx error injections for <op>\n");
 FUNC_3(VAR_4, "#   <op> rx-clear  clear all rx error injections for <op>\n");
 FUNC_3(VAR_4, "#   <op> tx-clear  clear all tx error injections for <op>\n");
 FUNC_3(VAR_4, "#\n");
 FUNC_3(VAR_4, "# RX error injection:\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] rx-nack              NACK the message instead of sending an ACK\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] rx-low-drive <bit>   force a low-drive condition at this bit position\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] rx-add-byte          add a spurious byte to the received CEC message\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] rx-remove-byte       remove the last byte from the received CEC message\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] rx-arb-lost <poll>   generate a POLL message to trigger an arbitration lost\n");
 FUNC_3(VAR_4, "#\n");
 FUNC_3(VAR_4, "# TX error injection settings:\n");
 FUNC_3(VAR_4, "#   tx-ignore-nack-until-eom           ignore early NACKs until EOM\n");
 FUNC_3(VAR_4, "#   tx-custom-low-usecs <usecs>        define the 'low' time for the custom pulse\n");
 FUNC_3(VAR_4, "#   tx-custom-high-usecs <usecs>       define the 'high' time for the custom pulse\n");
 FUNC_3(VAR_4, "#   tx-custom-pulse                    transmit the custom pulse once the bus is idle\n");
 FUNC_3(VAR_4, "#\n");
 FUNC_3(VAR_4, "# TX error injection:\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-no-eom            don't set the EOM bit\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-early-eom         set the EOM bit one byte too soon\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-add-bytes <num>   append <num> (1-255) spurious bytes to the message\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-remove-byte       drop the last byte from the message\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-short-bit <bit>   make this bit shorter than allowed\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-long-bit <bit>    make this bit longer than allowed\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-custom-bit <bit>  send the custom pulse instead of this bit\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-short-start       send a start pulse that's too short\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-long-start        send a start pulse that's too long\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-custom-start      send the custom pulse instead of the start pulse\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-last-bit <bit>    stop sending after this bit\n");
 FUNC_3(VAR_4, "#   <op>[,<mode>] tx-low-drive <bit>   force a low-drive condition at this bit position\n");
 FUNC_3(VAR_4, "#\n");
 FUNC_3(VAR_4, "# <op>       CEC message opcode (0-255) or 'any'\n");
 FUNC_3(VAR_4, "# <mode>     'once' (default), 'always', 'toggle' or 'off'\n");
 FUNC_3(VAR_4, "# <bit>      CEC message bit (0-159)\n");
 FUNC_3(VAR_4, "#            10 bits per 'byte': bits 0-7: data, bit 8: EOM, bit 9: ACK\n");
 FUNC_3(VAR_4, "# <poll>     CEC poll message used to test arbitration lost (0x00-0xff, default 0x0f)\n");
 FUNC_3(VAR_4, "# <usecs>    microseconds (0-10000000, default 1000)\n");

 FUNC_3(VAR_4, "\nclear\n");

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5->error_inj); VAR_6++) {
  u64 VAR_8 = VAR_5->error_inj[VAR_6];

  for (VAR_7 = 0; VAR_2[VAR_7].cmd; VAR_7++) {
   const char *VAR_9 = VAR_2[VAR_7].cmd;
   unsigned int VAR_10;
   unsigned int VAR_11;
   int VAR_12;

   VAR_11 = VAR_2[VAR_7].mode_offset;
   VAR_12 = VAR_2[VAR_7].arg_idx;
   VAR_10 = (VAR_8 >> VAR_11) & VAR_0;
   if (!VAR_10)
    continue;
   FUNC_1(VAR_4, VAR_6, VAR_10);
   FUNC_3(VAR_4, VAR_9);
   if (VAR_12 >= 0)
    FUNC_2(VAR_4, " %u",
        VAR_5->error_inj_args[VAR_6][VAR_12]);
   FUNC_3(VAR_4, "\n");
  }
 }

 if (VAR_5->tx_ignore_nack_until_eom)
  FUNC_3(VAR_4, "tx-ignore-nack-until-eom\n");
 if (VAR_5->tx_custom_pulse)
  FUNC_3(VAR_4, "tx-custom-pulse\n");
 if (VAR_5->tx_custom_low_usecs != VAR_1)
  FUNC_2(VAR_4, "tx-custom-low-usecs %u\n",
      VAR_5->tx_custom_low_usecs);
 if (VAR_5->tx_custom_high_usecs != VAR_1)
  FUNC_2(VAR_4, "tx-custom-high-usecs %u\n",
      VAR_5->tx_custom_high_usecs);
 return 0;
}
