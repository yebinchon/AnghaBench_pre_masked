
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rfd; scalar_t__ opened; } ;
struct fifo {int size; } ;
struct uart_softc {int mev; TYPE_1__ tty; struct fifo rxfifo; } ;
typedef int ssize_t ;
typedef int flushbuf ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct fifo*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_4(struct uart_softc *VAR_0, int VAR_1)
{
 char VAR_2[32];
 struct fifo *VAR_3;
 ssize_t VAR_4;
 int VAR_5;

 VAR_3 = &VAR_0->rxfifo;
 FUNC_1(VAR_3, sizeof(struct fifo));
 VAR_3->size = VAR_1;

 if (VAR_0->tty.opened) {



  while (1) {
   VAR_4 = FUNC_3(VAR_0->tty.rfd, VAR_2, sizeof(VAR_2));
   if (VAR_4 != sizeof(VAR_2))
    break;
  }





  VAR_5 = FUNC_2(VAR_0->mev);
  FUNC_0(VAR_5 == 0);
 }
}
