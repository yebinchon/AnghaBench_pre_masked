
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipoctal_stats {scalar_t__ parity_err; scalar_t__ overrun_err; scalar_t__ framing_err; scalar_t__ rcv_break; scalar_t__ rx; scalar_t__ tx; } ;



__attribute__((used)) static void FUNC_0(struct ipoctal_stats *VAR_0)
{
 VAR_0->tx = 0;
 VAR_0->rx = 0;
 VAR_0->rcv_break = 0;
 VAR_0->framing_err = 0;
 VAR_0->overrun_err = 0;
 VAR_0->parity_err = 0;
}
