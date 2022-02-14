
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsm_decode {scalar_t__ rejend; scalar_t__ rej; scalar_t__ nakend; scalar_t__ nak; int ack; int ackend; } ;



void
FUNC_0(struct fsm_decode *VAR_0)
{
  if (VAR_0->rejend != VAR_0->rej) {

    VAR_0->ackend = VAR_0->ack;
    VAR_0->nakend = VAR_0->nak;
  } else if (VAR_0->nakend != VAR_0->nak)

    VAR_0->ackend = VAR_0->ack;
}
