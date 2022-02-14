
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ opened; } ;
struct fifo {scalar_t__ num; int* buf; size_t rindex; int size; } ;
struct uart_softc {int mev; TYPE_1__ tty; struct fifo rxfifo; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct uart_softc*) ;

__attribute__((used)) static int
FUNC_3(struct uart_softc *VAR_0)
{
 struct fifo *VAR_1;
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = 0;
 VAR_1 = &VAR_0->rxfifo;
 if (VAR_1->num > 0) {
  if (!FUNC_2(VAR_0))
   VAR_4 = 1;
  VAR_2 = VAR_1->buf[VAR_1->rindex];
  VAR_1->rindex = (VAR_1->rindex + 1) % VAR_1->size;
  VAR_1->num--;
  if (VAR_4) {
   if (VAR_0->tty.opened) {
    VAR_3 = FUNC_1(VAR_0->mev);
    FUNC_0(VAR_3 == 0);
   }
  }
  return (VAR_2);
 } else
  return (-1);
}
