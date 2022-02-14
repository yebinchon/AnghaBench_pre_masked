
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr_dl {int sdl_type; } ;
struct sockaddr {int sa_family; } ;
struct in_ifaddr {int dummy; } ;
struct in6_ifaddr {int dummy; } ;
struct ifnethead {int dummy; } ;
struct ifnet {char* if_xname; int ifa_refcnt; scalar_t__ ifa_addr; struct ifnethead if_addrhead; } ;
struct ifaddr {char* if_xname; int ifa_refcnt; scalar_t__ ifa_addr; struct ifnethead if_addrhead; } ;
struct ether_addr {int dummy; } ;
typedef int kvm_t ;
typedef int ifnethead ;
typedef int ifnet ;
typedef int ifaddr ;
typedef int addr ;
struct TYPE_3__ {scalar_t__ n_type; scalar_t__ n_value; } ;
 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ifnethead*) ;
 scalar_t__ FUNC_2 (struct ifnet*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct ether_addr*,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int const,int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__*) ;
 int * FUNC_10 (int *,int *,int *,int ,char*) ;
 TYPE_1__* VAR_6 ;
 int FUNC_11 (char*,char*,...) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,...) ;

int
FUNC_15(void)
{
 kvm_t *VAR_7;
 char VAR_8[VAR_3];
 u_long VAR_9, VAR_10;
 u_long VAR_11, VAR_12;
        struct ifnet VAR_13;
        struct ifnethead VAR_14;
        union {
  struct ifaddr ifa;
  struct in_ifaddr in;
  struct in6_ifaddr in6;
        } VAR_15;
 union {
  struct sockaddr *sa;
  struct sockaddr_dl *sal;
  struct sockaddr_in *sa4;
  struct sockaddr_in6 *sa6;
 } VAR_16;
 char VAR_17[VAR_0];

 VAR_7 = FUNC_10(((void*)0), ((void*)0), ((void*)0), VAR_2, VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_14("kvm_openfiles: %s", VAR_8);
  FUNC_4(0);
 }

 if (FUNC_9(VAR_7, VAR_6) < 0) {
                FUNC_14("kvm_nlist: %s", FUNC_8(VAR_7));
                goto out;
        }

 if (VAR_6[VAR_1].n_type == 0) {
  FUNC_14("kvm_nlist: no namelist");
  goto out;
 }

 if (FUNC_6(VAR_7, VAR_6[VAR_1].n_value,
    (char *) &VAR_14, sizeof(VAR_14)) != 0)
  goto out;

 for (VAR_9 = (u_long) FUNC_1(&VAR_14);
      VAR_9 != 0;
      VAR_9 = VAR_10) {
  if (FUNC_6(VAR_7, VAR_9, (char *) &VAR_13, sizeof(VAR_13)) != 0)
   goto out;
  VAR_10 = (u_long) FUNC_2(&VAR_13, VAR_4);

  FUNC_11("%s\n", VAR_13.if_xname);

  for (VAR_11 = (u_long) FUNC_1(&VAR_13.if_addrhead);
       VAR_11 != 0;
       VAR_11 = VAR_12) {
   if (FUNC_6(VAR_7, VAR_11,
      (char *) &VAR_15, sizeof(VAR_15)) != 0)
    goto out;

   VAR_12 = (u_long)
    FUNC_2(&VAR_15.ifa, VAR_5);

   VAR_16.sa = (struct sockaddr *)(
    (unsigned char *) VAR_15.ifa.ifa_addr -
    (unsigned char *) VAR_11 +
    (unsigned char *) &VAR_15);

   switch (VAR_16.sa->sa_family) {
   case 131:
    switch (VAR_16.sal->sdl_type) {
    case 130:
    case 129:
          FUNC_3((struct ether_addr * )
      FUNC_0(VAR_16.sal), VAR_17);
     break;

    case 128:
     FUNC_13(VAR_17, "loopback");
     break;

    default:
     FUNC_12(VAR_17, sizeof(VAR_17),
       "<Link type %#x>",
      VAR_16.sal->sdl_type);
     break;
    }
    break;

   case 133:
    FUNC_5(133, &VAR_16.sa4->sin_addr,
     VAR_17, sizeof(VAR_17));
    break;

   case 132:
    FUNC_5(132, &VAR_16.sa6->sin6_addr,
     VAR_17, sizeof(VAR_17));
    break;

   default:
    FUNC_12(VAR_17, sizeof(VAR_17), "family=%d",
     VAR_16.sa->sa_family);
    break;
   }

   FUNC_11("\t%s ifa_refcnt=%u\n",
    VAR_17, VAR_15.ifa.ifa_refcnt);
  }
 }
out:
 FUNC_7(VAR_7);

 return (0);
}
