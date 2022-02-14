
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rfd; } ;
struct uart_softc {int * mev; TYPE_1__ tty; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ,int ,struct uart_softc*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct uart_softc *VAR_2)
{

 FUNC_2(&VAR_2->tty);
 VAR_2->mev = FUNC_1(VAR_2->tty.rfd, VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_2->mev != ((void*)0));
}
