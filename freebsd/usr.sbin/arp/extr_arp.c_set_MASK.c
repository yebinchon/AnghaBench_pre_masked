
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int tv_sec; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_dl {int sdl_len; scalar_t__ sdl_family; int sdl_index; int sdl_type; void* sdl_alen; } ;
struct rt_msghdr {int rtm_flags; } ;
struct ether_addr {int dummy; } ;
typedef int sdl_m ;
typedef int max_age ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (struct sockaddr_dl*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sockaddr_in*) ;
 int FUNC_2 (struct sockaddr_dl*,int) ;
 int FUNC_3 (int ,struct timespec*) ;
 int VAR_9 ;
 struct ether_addr* FUNC_4 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,struct ether_addr*) ;
 struct sockaddr_in* FUNC_6 (char*) ;
 char* FUNC_7 (TYPE_1__) ;
 struct rt_msghdr* FUNC_8 (int ,struct sockaddr_in*,struct sockaddr_dl*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,int*,size_t*,int *,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,char*) ;
 int FUNC_14 (int,char*) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char*,char*) ;

__attribute__((used)) static int
FUNC_17(int VAR_12, char **VAR_13)
{
 struct sockaddr_in *VAR_14;
 struct sockaddr_in *VAR_15;
 struct sockaddr_dl *VAR_16;
 struct rt_msghdr *VAR_17;
 struct ether_addr *VAR_18;
 char *VAR_19 = VAR_13[0], *VAR_20 = VAR_13[1];
 struct sockaddr_dl VAR_21;

 VAR_12 -= 2;
 VAR_13 += 2;

 FUNC_2(&VAR_21, sizeof(VAR_21));
 VAR_21.sdl_len = sizeof(VAR_21);
 VAR_21.sdl_family = VAR_0;

 VAR_15 = FUNC_6(VAR_19);
 if (VAR_15 == ((void*)0))
  return (1);
 VAR_9 = VAR_11 = VAR_10 = 0;
 while (VAR_12-- > 0) {
  if (FUNC_9(VAR_13[0], "temp") == 0) {
   struct timespec VAR_22;
   int VAR_23;
   size_t VAR_24 = sizeof(VAR_23);

   FUNC_3(VAR_1, &VAR_22);
   if (FUNC_10("net.link.ether.inet.max_age",
       &VAR_23, &VAR_24, ((void*)0), 0) != 0)
    FUNC_13(1, "sysctlbyname");
   VAR_10 = VAR_22.tv_sec + VAR_23;
  } else if (FUNC_9(VAR_13[0], "pub") == 0) {
   VAR_11 |= VAR_3;
   VAR_9 = 1;
   if (VAR_12 && FUNC_9(VAR_13[1], "only") == 0) {






    VAR_12--; VAR_13++;
   }
  } else if (FUNC_9(VAR_13[0], "blackhole") == 0) {
   if (VAR_11 & VAR_6) {
    FUNC_14(1, "Choose one of blackhole or reject, "
        "not both.");
   }
   VAR_11 |= VAR_4;
  } else if (FUNC_9(VAR_13[0], "reject") == 0) {
   if (VAR_11 & VAR_4) {
    FUNC_14(1, "Choose one of blackhole or reject, "
        "not both.");
   }
   VAR_11 |= VAR_6;
  } else {
   FUNC_16("Invalid parameter '%s'", VAR_13[0]);
   FUNC_11();
  }
  VAR_13++;
 }
 VAR_18 = (struct ether_addr *)FUNC_0(&VAR_21);
 if (VAR_9 && !FUNC_9(VAR_20, "auto")) {
  if (!FUNC_5(VAR_15->sin_addr.s_addr, VAR_18)) {
   FUNC_16("no interface found for %s",
          FUNC_7(VAR_15->sin_addr));
   return (1);
  }
  VAR_21.sdl_alen = VAR_2;
 } else {
  struct ether_addr *VAR_25 = FUNC_4(VAR_20);

  if (VAR_25 == ((void*)0)) {
   FUNC_16("invalid Ethernet address '%s'", VAR_20);
   return (1);
  } else {
   *VAR_18 = *VAR_25;
   VAR_21.sdl_alen = VAR_2;
  }
 }
 VAR_17 = FUNC_8(VAR_8, VAR_15, ((void*)0));
 if (VAR_17 == ((void*)0)) {
  FUNC_15("%s", VAR_19);
  return (1);
 }
 VAR_14 = (struct sockaddr_in *)(VAR_17 + 1);
 VAR_16 = (struct sockaddr_dl *)(FUNC_1(VAR_14) + (char *)VAR_14);

 if ((VAR_16->sdl_family != VAR_0) ||
     (VAR_17->rtm_flags & VAR_5) ||
     !FUNC_12(VAR_16->sdl_type)) {
  FUNC_16("cannot intuit interface index and type for %s", VAR_19);
  return (1);
 }
 VAR_21.sdl_type = VAR_16->sdl_type;
 VAR_21.sdl_index = VAR_16->sdl_index;
 return (FUNC_8(VAR_7, VAR_15, &VAR_21) == ((void*)0));
}
