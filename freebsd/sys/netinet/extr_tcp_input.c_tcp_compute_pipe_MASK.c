
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sack_bytes_rexmit; int sacked_bytes; } ;
struct tcpcb {int snd_max; int snd_una; TYPE_1__ sackhint; } ;



int
FUNC_0(struct tcpcb *VAR_0)
{
 return (VAR_0->snd_max - VAR_0->snd_una +
  VAR_0->sackhint.sack_bytes_rexmit -
  VAR_0->sackhint.sacked_bytes);
}
