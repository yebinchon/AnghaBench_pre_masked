
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int u_int16_t ;
struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct ngpppoe_sts {char* hook; } ;
struct TYPE_2__ {scalar_t__ version; scalar_t__ typecookie; int cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; } ;
struct etherdevice {scalar_t__ cs; int connected; int slot; } ;
typedef int fd_set ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 scalar_t__ VAR_6 ;







 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__,struct ng_mesg*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 int * FUNC_4 () ;
 int FUNC_5 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (char*,char**,int) ;
 int FUNC_9 (int ,char*,char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct etherdevice *VAR_8)
{
  char VAR_9[sizeof(struct ng_mesg) + sizeof(struct ngpppoe_sts)];
  struct ng_mesg *VAR_10 = (struct ng_mesg *)VAR_9;
  struct ngpppoe_sts *VAR_11 = (struct ngpppoe_sts *)(VAR_9 + sizeof *VAR_10);
  char *VAR_12, VAR_13[14], VAR_14[5];
  const char *VAR_15;
  struct timeval VAR_16;
  fd_set *VAR_17;
  u_long VAR_18;
  int VAR_19, VAR_20;

  if (VAR_8->cs < 0)
    return;

  if ((VAR_17 = FUNC_4()) == ((void*)0)) {
    FUNC_3(VAR_3, "DoLoop: Cannot create fd_set\n");
    return;
  }

  while (1) {
    FUNC_10(VAR_17);
    FUNC_0(VAR_8->cs, VAR_17);
    VAR_16.tv_sec = VAR_16.tv_usec = 0;
    VAR_20 = FUNC_5(VAR_8->cs + 1, VAR_17, ((void*)0), ((void*)0), &VAR_16);

    if (VAR_20 <= 0)
      break;

    if (FUNC_1(VAR_8->cs, VAR_10, sizeof VAR_9, ((void*)0)) <= 0)
      break;

    if (VAR_10->header.version != VAR_7) {
      FUNC_3(VAR_5, "%ld: Unexpected netgraph version, expected %ld\n",
                 (long)VAR_10->header.version, (long)VAR_7);
      break;
    }

    if (VAR_10->header.typecookie != VAR_6) {
      FUNC_3(VAR_5, "%ld: Unexpected netgraph cookie, expected %ld\n",
                 (long)VAR_10->header.typecookie, (long)VAR_6);
      break;
    }

    VAR_19 = 0;
    switch (VAR_10->header.cmd) {
      case 129: VAR_15 = "SET_FLAG"; break;
      case 135: VAR_15 = "CONNECT"; break;
      case 132: VAR_15 = "LISTEN"; break;
      case 131: VAR_15 = "OFFER"; break;
      case 128: VAR_15 = "SUCCESS"; break;
      case 134: VAR_15 = "FAIL"; break;
      case 136: VAR_15 = "CLOSE"; break;
      case 133: VAR_15 = "GET_STATUS"; break;
      case 137:
        VAR_15 = "ACNAME";
        if (FUNC_6("ACNAME", VAR_11->hook, 1) != 0)
          FUNC_3(VAR_5, "setenv: cannot set ACNAME=%s: %m", VAR_11->hook);
        VAR_19 = VAR_10->header.arglen;
        break;
      case 130:
        VAR_15 = "SESSIONID";
        FUNC_7(VAR_14, sizeof VAR_14, "%04x", *(u_int16_t *)VAR_11);
        if (FUNC_6("SESSIONID", VAR_14, 1) != 0)
          FUNC_9(VAR_2, "setenv: cannot set SESSIONID=%s: %m",
                 VAR_14);

        VAR_18 = FUNC_8(VAR_14, &VAR_12, 16);
        if (VAR_12 != VAR_14 && *VAR_12 == '\0')
            VAR_8->slot = VAR_18;
        break;
      default:
        FUNC_7(VAR_13, sizeof VAR_13, "<%d>", (int)VAR_10->header.cmd);
        VAR_15 = VAR_13;
        break;
    }

    if (VAR_19)
      FUNC_3(VAR_4, "Received NGM_PPPOE_%s (hook \"%.*s\")\n",
                 VAR_15, VAR_19, VAR_11->hook);
    else
      FUNC_3(VAR_4, "Received NGM_PPPOE_%s\n", VAR_15);

    switch (VAR_10->header.cmd) {
      case 128:
        VAR_8->connected = VAR_1;
        break;
      case 134:
      case 136:
        VAR_8->connected = VAR_0;
        break;
    }
  }
  FUNC_2(VAR_17);
}
