
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct ipoctal_channel* driver_data; } ;
struct serial_icounter_struct {int brk; int parity; int frame; int tx; int rx; scalar_t__ dcd; scalar_t__ rng; scalar_t__ dsr; scalar_t__ cts; } ;
struct TYPE_2__ {int rcv_break; int parity_err; int framing_err; int tx; int rx; } ;
struct ipoctal_channel {TYPE_1__ stats; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0,
         struct serial_icounter_struct *VAR_1)
{
 struct ipoctal_channel *VAR_2 = VAR_0->driver_data;

 VAR_1->cts = 0;
 VAR_1->dsr = 0;
 VAR_1->rng = 0;
 VAR_1->dcd = 0;
 VAR_1->rx = VAR_2->stats.rx;
 VAR_1->tx = VAR_2->stats.tx;
 VAR_1->frame = VAR_2->stats.framing_err;
 VAR_1->parity = VAR_2->stats.parity_err;
 VAR_1->brk = VAR_2->stats.rcv_break;
 return 0;
}
