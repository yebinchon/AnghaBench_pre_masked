
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int dummy; } ;
struct lpc_uart_softc {char* opts; int enabled; int iobase; int uart_softc; int irq; } ;
struct inout_port {char const* name; struct lpc_uart_softc* arg; int handler; int flags; int size; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vmctx*,int *) ;
 int FUNC_2 (struct inout_port*,int) ;
 int FUNC_3 (int ,char*,char const*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 struct lpc_uart_softc* VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inout_port*) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,struct lpc_uart_softc*) ;
 scalar_t__ FUNC_7 (int,int *,int *) ;
 scalar_t__ FUNC_8 (int ,char*) ;

__attribute__((used)) static int
FUNC_9(struct vmctx *VAR_10)
{
 struct lpc_uart_softc *VAR_11;
 struct inout_port VAR_12;
 const char *VAR_13;
 int VAR_14, VAR_15;

 if (VAR_8 != ((void*)0)) {
  VAR_15 = FUNC_1(VAR_10, VAR_8);
  if (VAR_15)
   return (VAR_15);
 }


 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  VAR_11 = &VAR_7[VAR_14];
  VAR_13 = VAR_6[VAR_14];

  if (FUNC_7(VAR_14, &VAR_11->iobase, &VAR_11->irq) != 0) {
   FUNC_3(VAR_9, "Unable to allocate resources for "
       "LPC device %s\n", VAR_13);
   return (-1);
  }
  FUNC_4(VAR_11->irq);

  VAR_11->uart_softc = FUNC_6(VAR_3,
        VAR_4, VAR_11);

  if (FUNC_8(VAR_11->uart_softc, VAR_11->opts) != 0) {
   FUNC_3(VAR_9, "Unable to initialize backend '%s' "
       "for LPC device %s\n", VAR_11->opts, VAR_13);
   return (-1);
  }

  FUNC_2(&VAR_12, sizeof(struct inout_port));
  VAR_12.name = VAR_13;
  VAR_12.port = VAR_11->iobase;
  VAR_12.size = VAR_2;
  VAR_12.flags = VAR_0;
  VAR_12.handler = VAR_5;
  VAR_12.arg = VAR_11;

  VAR_15 = FUNC_5(&VAR_12);
  FUNC_0(VAR_15 == 0);
  VAR_11->enabled = 1;
 }

 return (0);
}
