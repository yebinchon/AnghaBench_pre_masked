
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg; scalar_t__ len; } ;
struct cec_pin {int tx_generated_poll; int tx_post_eom; scalar_t__ state; int tx_toggle; int rx_toggle; int ts; TYPE_1__ rx_msg; scalar_t__ tx_bit; scalar_t__ rx_bit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cec_pin *VAR_5)
{




 VAR_5->rx_bit = VAR_5->tx_bit = 0;
 VAR_5->rx_msg.len = 0;
 FUNC_0(VAR_5->rx_msg.msg, 0, sizeof(VAR_5->rx_msg.msg));
 VAR_5->ts = FUNC_1(0);
 VAR_5->tx_generated_poll = 0;
 VAR_5->tx_post_eom = 0;
 if (VAR_5->state >= VAR_4 &&
     VAR_5->state <= VAR_3)
  VAR_5->tx_toggle ^= 1;
 if (VAR_5->state >= VAR_2 &&
     VAR_5->state <= VAR_1)
  VAR_5->rx_toggle ^= 1;
 VAR_5->state = VAR_0;
}
