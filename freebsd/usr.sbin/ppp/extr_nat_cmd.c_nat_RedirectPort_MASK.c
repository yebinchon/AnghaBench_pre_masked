
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct in_addr {void* s_addr; } ;
struct cmdargs {int argc; int argn; char** argv; int prompt; TYPE_1__* bundle; } ;
struct alias_link {int dummy; } ;
struct TYPE_2__ {int NatEnabled; } ;


 void* VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 struct alias_link* FUNC_0 (int ,struct in_addr,int ,struct in_addr,int ,struct in_addr,int ,char) ;
 int FUNC_1 (char*,struct in_addr*,scalar_t__*,scalar_t__*,char const*) ;
 int FUNC_2 (char*,scalar_t__*,scalar_t__*,char const*) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

int
FUNC_7(struct cmdargs const *VAR_4)
{
  if (!VAR_4->bundle->NatEnabled) {
    FUNC_5(VAR_4->prompt, "Alias not enabled\n");
    return 1;
  } else if (VAR_4->argc == VAR_4->argn + 3 || VAR_4->argc == VAR_4->argn + 4) {
    char VAR_5;
    const char *VAR_6;
    struct in_addr VAR_7;
    u_short VAR_8, VAR_9;
    struct in_addr VAR_10;
    u_short VAR_11, VAR_12;
    struct in_addr VAR_13;
    u_short VAR_14, VAR_15;
    struct alias_link *VAR_16;
    int VAR_17;

    VAR_6 = VAR_4->argv[VAR_4->argn];
    if (FUNC_6(VAR_6, "tcp") == 0) {
      VAR_5 = VAR_1;
    } else if (FUNC_6(VAR_6, "udp") == 0) {
      VAR_5 = VAR_2;
    } else {
      FUNC_5(VAR_4->prompt, "port redirect: protocol must be"
                    " tcp or udp\n");
      return -1;
    }

    VAR_17 = FUNC_1(VAR_4->argv[VAR_4->argn+1], &VAR_7, &VAR_9,
                             &VAR_8, VAR_6);
    if (VAR_17) {
      FUNC_5(VAR_4->prompt, "nat port: error reading localaddr:port\n");
      return -1;
    }

    VAR_17 = FUNC_2(VAR_4->argv[VAR_4->argn+2], &VAR_12, &VAR_11,
                           VAR_6);
    if (VAR_17) {
      FUNC_5(VAR_4->prompt, "nat port: error reading alias port\n");
      return -1;
    }
    VAR_10.s_addr = VAR_0;

    if (VAR_4->argc == VAR_4->argn + 4) {
      VAR_17 = FUNC_1(VAR_4->argv[VAR_4->argn+3], &VAR_13,
                               &VAR_15, &VAR_14, VAR_6);
      if (VAR_17) {
        FUNC_5(VAR_4->prompt, "nat port: error reading "
                      "remoteaddr:port\n");
        return -1;
      }
    } else {
      VAR_13.s_addr = VAR_0;
      VAR_15 = VAR_14 = 0;
    }

    FUNC_4(&VAR_9, &VAR_8);
    FUNC_4(&VAR_12, &VAR_11);
    FUNC_4(&VAR_15, &VAR_14);

    if (VAR_11 - VAR_12 != VAR_8 - VAR_9) {
      FUNC_5(VAR_4->prompt, "nat port: local & alias port ranges "
                    "are not equal\n");
      return -1;
    }

    if (VAR_14 && VAR_14 - VAR_15 != VAR_8 - VAR_9) {
      FUNC_5(VAR_4->prompt, "nat port: local & remote port ranges "
                    "are not equal\n");
      return -1;
    }

    do {
      VAR_16 = FUNC_0(VAR_3, VAR_7, FUNC_3(VAR_9),
         VAR_13, FUNC_3(VAR_15),
                                     VAR_10, FUNC_3(VAR_12),
         VAR_5);

      if (VAR_16 == ((void*)0)) {
        FUNC_5(VAR_4->prompt, "nat port: %d: error %d\n", VAR_12,
                      VAR_17);
        return 1;
      }
      VAR_9++;
      if (VAR_14)
        VAR_15++;
    } while (VAR_12++ < VAR_11);

    return 0;
  }

  return -1;
}
