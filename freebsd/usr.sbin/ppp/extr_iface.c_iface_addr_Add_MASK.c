
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
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
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char const*,char*,...) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (struct sockaddr_in*,struct sockaddr_storage*,int) ;
 int FUNC_5 (struct in6_aliasreq*,char,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sockaddr_storage*) ;
 char* FUNC_8 (int *) ;
 int const FUNC_9 (int *) ;
 int FUNC_10 (int *,struct sockaddr_storage*,struct sockaddr_storage*) ;
 char* FUNC_11 (int *) ;
 int FUNC_12 (char*,int,char*,char*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_15(const char *VAR_10, struct iface_addr *VAR_11, int VAR_12)
{
  struct ifaliasreq VAR_13;

  struct in6_aliasreq VAR_14;

  struct sockaddr_in *VAR_15, *VAR_16, *VAR_17;
  struct sockaddr_storage VAR_18, VAR_19, VAR_20;
  int VAR_21, VAR_22;

  FUNC_10(&VAR_11->ifa, &VAR_18, &VAR_20);
  FUNC_7(&VAR_11->peer, &VAR_19);
  VAR_21 = 0;

  switch (FUNC_9(&VAR_11->ifa)) {
  case 129:
    FUNC_5(&VAR_13, '\0', sizeof VAR_13);
    FUNC_14(VAR_13.ifra_name, VAR_10, sizeof VAR_13.ifra_name - 1);

    VAR_15 = (struct sockaddr_in *)&VAR_13.ifra_addr;
    FUNC_4(VAR_15, &VAR_18, sizeof *VAR_15);

    VAR_16 = (struct sockaddr_in *)&VAR_13.ifra_mask;
    FUNC_4(VAR_16, &VAR_20, sizeof *VAR_16);

    VAR_17 = (struct sockaddr_in *)&VAR_13.ifra_broadaddr;
    if (FUNC_6(&VAR_11->peer) == VAR_0) {
      VAR_17->sin_family = 129;
      VAR_17->sin_len = sizeof(*VAR_17);
      VAR_17->sin_addr.s_addr = VAR_1;
    } else
      FUNC_4(VAR_17, &VAR_19, sizeof *VAR_17);

    VAR_21 = FUNC_0(VAR_12, VAR_6, &VAR_13);
    VAR_22 = VAR_8;
    if (FUNC_1(VAR_2)) {
      char VAR_23[VAR_4];

      FUNC_12(VAR_23, sizeof VAR_23, "%s", FUNC_11(&VAR_11->ifa));
      FUNC_2(VAR_3, "%s: AIFADDR %s -> %s returns %d\n",
                 VAR_13.ifra_name, VAR_23, FUNC_8(&VAR_11->peer), VAR_21);
    }
    break;


  case 128:
    FUNC_5(&VAR_14, '\0', sizeof VAR_14);
    FUNC_14(VAR_14, VAR_10, sizeof VAR_14 - 1);

    FUNC_4(&VAR_14, &VAR_18, sizeof VAR_14);
    FUNC_4(&VAR_14, &VAR_20, sizeof VAR_14);
    if (FUNC_6(&VAR_11->peer) == VAR_0)
      VAR_14 = VAR_0;
    else if (FUNC_3(&((struct sockaddr_in6 *)&VAR_20)->sin6_addr, &VAR_9,
      sizeof VAR_9) == 0)
      FUNC_4(&VAR_14, &VAR_19, sizeof VAR_14);
    VAR_14 = VAR_5;
    VAR_14 = VAR_5;

    VAR_21 = FUNC_0(VAR_12, VAR_7, &VAR_14);
    VAR_22 = VAR_8;
    break;

  }

  if (VAR_21 == -1) {
    char VAR_24[VAR_4];
    const char *VAR_25 =

      FUNC_9(&VAR_11->ifa) == 128 ? "_IN6" :

      "";

    if (FUNC_6(&VAR_11->peer) == VAR_0)
      FUNC_2(VAR_3, "iface add: ioctl(SIOCAIFADDR%s, %s): %s\n",
                 VAR_25, FUNC_11(&VAR_11->ifa), FUNC_13(VAR_22));
    else {
      FUNC_12(VAR_24, sizeof VAR_24, "%s", FUNC_8(&VAR_11->peer));
      FUNC_2(VAR_3, "iface add: ioctl(SIOCAIFADDR%s, %s -> %s): %s\n",
                 VAR_25, FUNC_11(&VAR_11->ifa), VAR_24, FUNC_13(VAR_22));
    }
  }

  return VAR_21 != -1;
}
