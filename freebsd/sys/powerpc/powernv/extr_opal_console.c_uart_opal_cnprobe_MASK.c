
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_opal_softc {int node; int sc_mtx; } ;
struct consdev {int cn_pri; struct uart_opal_softc* cn_arg; } ;
typedef int phandle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,char*,int) ;
 struct uart_opal_softc* VAR_5 ;
 int FUNC_2 (int *,char*,int *,int) ;
 scalar_t__ FUNC_3 () ;
 struct consdev* VAR_6 ;
 scalar_t__ FUNC_4 (struct uart_opal_softc*) ;

__attribute__((used)) static void
FUNC_5(struct consdev *VAR_7)
{
 char VAR_8[64];
 phandle_t VAR_9, VAR_10;
 static struct uart_opal_softc VAR_11;

 if (FUNC_3() != 0)
  goto fail;

 if ((VAR_10 = FUNC_0("/chosen")) == -1)
  goto fail;


 if (FUNC_1(VAR_10, "linux,stdout-path", VAR_8, sizeof(VAR_8)) <= 0)
  goto fail;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9 == -1)
  goto fail;

 VAR_11.node = VAR_9;
 if (FUNC_4(&VAR_11) != 0)
  goto fail;
 FUNC_2(&VAR_11.sc_mtx, "uart_opal", ((void*)0), VAR_4 | VAR_3 |
     VAR_2);

 VAR_7->cn_pri = VAR_1;
 VAR_5 = &VAR_11;
 VAR_7->cn_arg = VAR_5;
 VAR_6 = VAR_7;
 return;

fail:
 VAR_7->cn_pri = VAR_0;
 return;
}
