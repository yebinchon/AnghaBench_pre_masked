
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* dns; scalar_t__ resolv_nons; } ;
struct ipcp {TYPE_1__ ns; } ;
typedef int mode_t ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (scalar_t__,int *) ;
 char* FUNC_4 (TYPE_2__) ;
 int FUNC_5 (int ,char*,char const*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;

int
FUNC_8(struct ipcp *VAR_7)
{
  const char *VAR_8;
  mode_t VAR_9;
  FILE *VAR_10;

  if (VAR_7->ns.dns[0].s_addr == VAR_1 &&
      VAR_7->ns.dns[1].s_addr == VAR_1) {
    FUNC_5(VAR_4, "%s not modified: All nameservers NAKd\n",
              VAR_5);
    return 0;
  }

  if (VAR_7->ns.dns[0].s_addr == VAR_1) {
    VAR_7->ns.dns[0].s_addr = VAR_7->ns.dns[1].s_addr;
    VAR_7->ns.dns[1].s_addr = VAR_1;
  }

  VAR_9 = FUNC_7(022);
  if ((VAR_10 = FUNC_0(VAR_5, "w")) != ((void*)0)) {
    FUNC_7(VAR_9);
    if (VAR_7->ns.resolv_nons)
      FUNC_3(VAR_7->ns.resolv_nons, VAR_10);
    VAR_8 = FUNC_4(VAR_7->ns.dns[0]);
    FUNC_5(VAR_4, "Primary nameserver set to %s\n", VAR_8);
    FUNC_2(VAR_10, "\nnameserver %s\n", VAR_8);
    if (VAR_7->ns.dns[1].s_addr != VAR_1 &&
        VAR_7->ns.dns[1].s_addr != VAR_2 &&
        VAR_7->ns.dns[1].s_addr != VAR_7->ns.dns[0].s_addr) {
      VAR_8 = FUNC_4(VAR_7->ns.dns[1]);
      FUNC_5(VAR_4, "Secondary nameserver set to %s\n", VAR_8);
      FUNC_2(VAR_10, "nameserver %s\n", VAR_8);
    }
    if (FUNC_1(VAR_10) == VAR_0) {
      FUNC_5(VAR_3, "write(): Failed updating %s: %s\n", VAR_5,
                 FUNC_6(VAR_6));
      return 0;
    }
  } else {
    FUNC_7(VAR_9);
    FUNC_5(VAR_3,"fopen(\"%s\", \"w\") failed: %s\n", VAR_5,
                 FUNC_6(VAR_6));
  }

  return 1;
}
