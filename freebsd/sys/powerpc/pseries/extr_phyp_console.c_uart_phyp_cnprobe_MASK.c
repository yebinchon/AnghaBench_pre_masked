
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_phyp_softc {int node; int sc_mtx; } ;
struct consdev {int cn_pri; } ;
typedef int stdout ;
typedef int phandle_t ;
typedef scalar_t__ ihandle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,scalar_t__*,int) ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 struct uart_phyp_softc* VAR_5 ;
 int FUNC_4 (int *,char*,int *,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (struct uart_phyp_softc*) ;

__attribute__((used)) static void
FUNC_7(struct consdev *VAR_6)
{
 char VAR_7[64];
 ihandle_t VAR_8;
 phandle_t VAR_9, VAR_10;
 static struct uart_phyp_softc VAR_11;

 if ((VAR_10 = FUNC_0("/chosen")) == -1)
  goto fail;


 VAR_9 = -1;
 if (FUNC_1(VAR_10, "stdout", &VAR_8,
     sizeof(VAR_8)) == sizeof(VAR_8) && VAR_8 != 0)
  VAR_9 = FUNC_3(VAR_8);
 if (VAR_9 == -1)
  goto fail;

 if (FUNC_2(VAR_9, "device_type", VAR_7, sizeof(VAR_7)) == -1)
  goto fail;
 if (FUNC_5(VAR_7, "serial") != 0)
  goto fail;

 VAR_11.node = VAR_9;
 if (FUNC_6(&VAR_11) != 0)
  goto fail;
 FUNC_4(&VAR_11.sc_mtx, "uart_phyp", ((void*)0), VAR_4 | VAR_3 |
     VAR_2);

 VAR_6->cn_pri = VAR_1;
 VAR_5 = &VAR_11;
 return;

fail:
 VAR_6->cn_pri = VAR_0;
 return;
}
