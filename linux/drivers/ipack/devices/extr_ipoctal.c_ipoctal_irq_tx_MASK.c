
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int tx; } ;
struct TYPE_5__ {unsigned char* xmit_buf; } ;
struct ipoctal_channel {unsigned int pointer_write; scalar_t__ nb_bytes; int lock; TYPE_4__ stats; TYPE_3__* regs; TYPE_1__ tty_port; } ;
struct TYPE_6__ {int thr; } ;
struct TYPE_7__ {TYPE_2__ w; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned char,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ipoctal_channel *VAR_1)
{
 unsigned char VAR_2;
 unsigned int *VAR_3 = &VAR_1->pointer_write;

 if (VAR_1->nb_bytes == 0)
  return;

 FUNC_1(&VAR_1->lock);
 VAR_2 = VAR_1->tty_port.xmit_buf[*VAR_3];
 FUNC_0(VAR_2, &VAR_1->regs->w.thr);
 VAR_1->stats.tx++;
 (*VAR_3)++;
 *VAR_3 = *VAR_3 % VAR_0;
 VAR_1->nb_bytes--;
 FUNC_2(&VAR_1->lock);
}
