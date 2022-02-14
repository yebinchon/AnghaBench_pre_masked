
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; scalar_t__ sin6_family; TYPE_1__ sin_addr; } ;
struct TYPE_4__ {void* ia6t_pltime; void* ia6t_vltime; } ;
struct in6_aliasreq {char const* ifra_name; TYPE_2__ ifra_lifetime; struct sockaddr_in ifra_dstaddr; struct sockaddr_in ifra_prefixmask; struct sockaddr_in ifra_addr; int ifra_broadaddr; int ifra_mask; } ;
struct ifaliasreq {char const* ifra_name; TYPE_2__ ifra_lifetime; struct sockaddr_in ifra_dstaddr; struct sockaddr_in ifra_prefixmask; struct sockaddr_in ifra_addr; int ifra_broadaddr; int ifra_mask; } ;
struct iface_addr {int ifa; int peer; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ,struct in6_aliasreq*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,char*,...) ;
 int FUNC_3 (struct sockaddr_in*,struct sockaddr_storage*,int) ;
 int FUNC_4 (struct in6_aliasreq*,char,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sockaddr_storage*) ;
 char* FUNC_7 (int *) ;
 int const FUNC_8 (int *) ;
 int FUNC_9 (int *,struct sockaddr_storage*,struct sockaddr_storage*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_9, struct iface_addr *VAR_10, int VAR_11)
{
  struct ifaliasreq VAR_12;

  struct in6_aliasreq VAR_13;

  struct sockaddr_in *VAR_14, *VAR_15, *VAR_16;
  struct sockaddr_storage VAR_17, VAR_18, VAR_19;
  int VAR_20, VAR_21;

  FUNC_9(&VAR_10->ifa, &VAR_17, &VAR_19);
  FUNC_6(&VAR_10->peer, &VAR_18);
  VAR_20 = 0;

  switch (FUNC_8(&VAR_10->ifa)) {
  case 129:
    FUNC_4(&VAR_12, '\0', sizeof VAR_12);
    FUNC_13(VAR_12.ifra_name, VAR_9, sizeof VAR_12.ifra_name - 1);

    VAR_14 = (struct sockaddr_in *)&VAR_12.ifra_addr;
    FUNC_3(VAR_14, &VAR_17, sizeof *VAR_14);

    VAR_15 = (struct sockaddr_in *)&VAR_12.ifra_mask;
    FUNC_3(VAR_15, &VAR_19, sizeof *VAR_15);

    VAR_16 = (struct sockaddr_in *)&VAR_12.ifra_broadaddr;
    if (FUNC_5(&VAR_10->peer) == VAR_0) {
      VAR_16->sin_family = 129;
      VAR_16->sin_len = sizeof(*VAR_16);
      VAR_16->sin_addr.s_addr = VAR_1;
    } else
      FUNC_3(VAR_16, &VAR_18, sizeof *VAR_16);

    VAR_20 = FUNC_0(VAR_11, VAR_6, &VAR_12);
    VAR_21 = VAR_8;
    if (FUNC_1(VAR_2)) {
      char VAR_22[VAR_4];

      FUNC_11(VAR_22, sizeof VAR_22, "%s", FUNC_10(&VAR_10->ifa));
      FUNC_2(VAR_3, "%s: DIFADDR %s -> %s returns %d\n",
                 VAR_12.ifra_name, VAR_22, FUNC_7(&VAR_10->peer), VAR_20);
    }
    break;


  case 128:
    FUNC_4(&VAR_13, '\0', sizeof VAR_13);
    FUNC_13(VAR_13, VAR_9, sizeof VAR_13 - 1);

    FUNC_3(&VAR_13, &VAR_17, sizeof VAR_13);
    FUNC_3(&VAR_13, &VAR_19, sizeof VAR_13);
    VAR_13 = VAR_0;
    if (FUNC_5(&VAR_10->peer) == VAR_0)
      VAR_13 = VAR_0;
    else
      FUNC_3(&VAR_13, &VAR_18, sizeof VAR_13);
    VAR_13 = VAR_5;
    VAR_13 = VAR_5;

    VAR_20 = FUNC_0(VAR_11, VAR_7, &VAR_13);
    VAR_21 = VAR_8;
    break;

  }

  if (VAR_20 == -1) {
    char VAR_23[VAR_4];
    const char *VAR_24 =

      FUNC_8(&VAR_10->ifa) == 128 ? "_IN6" :

      "";

    if (FUNC_5(&VAR_10->peer) == VAR_0)
      FUNC_2(VAR_3, "iface rm: ioctl(SIOCDIFADDR%s, %s): %s\n",
                 VAR_24, FUNC_10(&VAR_10->ifa), FUNC_12(VAR_21));
    else {
      FUNC_11(VAR_23, sizeof VAR_23, "%s", FUNC_7(&VAR_10->peer));
      FUNC_2(VAR_3, "iface rm: ioctl(SIOCDIFADDR%s, %s -> %s): %s\n",
                 VAR_24, FUNC_10(&VAR_10->ifa), VAR_23, FUNC_12(VAR_21));
    }
  }

  return VAR_20 != -1;
}
