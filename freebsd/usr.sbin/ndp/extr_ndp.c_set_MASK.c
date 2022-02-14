
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct timeval {scalar_t__ tv_sec; } ;
struct sockaddr_in6 {int sin6_addr; int sin6_len; int sin6_scope_id; } ;
struct sockaddr_dl {scalar_t__ sdl_family; int sdl_type; int sdl_index; } ;
struct rt_msghdr {int rtm_flags; } ;
struct addrinfo {scalar_t__ ai_addr; int ai_family; } ;
typedef int hints ;
struct TYPE_6__ {struct rt_msghdr m_rtm; } ;
struct TYPE_5__ {int sdl_alen; int sdl_type; int sdl_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;







 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 struct sockaddr_in6 VAR_7 ;
 int FUNC_3 (struct addrinfo*,int) ;
 int FUNC_4 (int,char*,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int ,char*,...) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_8 () ;
 int FUNC_9 (struct timeval*,int ) ;
 TYPE_2__ VAR_10 ;
 scalar_t__ FUNC_10 (char*,int *) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ) ;
 TYPE_1__ VAR_11 ;
 struct sockaddr_in6 VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_14(int VAR_14, char **VAR_15)
{
 register struct sockaddr_in6 *VAR_16 = &VAR_12;
 register struct sockaddr_dl *VAR_17;
 register struct rt_msghdr *VAR_18 = &(VAR_10.m_rtm);
 struct addrinfo VAR_19, *VAR_20;
 int VAR_21;
 u_char *VAR_22;
 char *VAR_23 = VAR_15[0], *VAR_24 = VAR_15[1];

 FUNC_8();
 VAR_14 -= 2;
 VAR_15 += 2;
 VAR_11 = VAR_6;
 VAR_12 = VAR_7;

 FUNC_3(&VAR_19, sizeof(VAR_19));
 VAR_19.ai_family = VAR_0;
 VAR_21 = FUNC_7(VAR_23, ((void*)0), &VAR_19, &VAR_20);
 if (VAR_21) {
  FUNC_5(VAR_13, "ndp: %s: %s\n", VAR_23,
   FUNC_6(VAR_21));
  return 1;
 }
 VAR_16->sin6_addr = ((struct sockaddr_in6 *)VAR_20->ai_addr)->sin6_addr;
 VAR_16->sin6_scope_id =
     ((struct sockaddr_in6 *)VAR_20->ai_addr)->sin6_scope_id;
 VAR_22 = (u_char *)FUNC_2(&VAR_11);
 if (FUNC_10(VAR_24, VAR_22) == 0)
  VAR_11.sdl_alen = 6;
 VAR_9 = VAR_8 = 0;
 while (VAR_14-- > 0) {
  if (FUNC_13(VAR_15[0], "temp", 4) == 0) {
   struct timeval VAR_25;

   FUNC_9(&VAR_25, 0);
   VAR_8 = VAR_25.tv_sec + 20 * 60;
  } else if (FUNC_13(VAR_15[0], "proxy", 5) == 0)
   VAR_9 |= VAR_2;
  VAR_15++;
 }
 if (FUNC_12(VAR_5) < 0) {
  FUNC_4(1, "RTM_GET(%s) failed", VAR_23);

 }
 VAR_16 = (struct sockaddr_in6 *)(VAR_18 + 1);
 VAR_17 = (struct sockaddr_dl *)(FUNC_0(VAR_16->sin6_len) + (char *)VAR_16);
 if (FUNC_1(&VAR_16->sin6_addr, &VAR_12.sin6_addr)) {
  if (VAR_17->sdl_family == VAR_1 &&
      !(VAR_18->rtm_flags & VAR_3)) {
   switch (VAR_17->sdl_type) {
   case 133: case 132: case 131:
   case 130: case 129:
   case 128: case 134:
    goto overwrite;
   }
  }
  FUNC_5(VAR_13, "set: cannot configure a new entry\n");
  return 1;
 }

overwrite:
 if (VAR_17->sdl_family != VAR_1) {
  FUNC_11("cannot intuit interface index and type for %s\n", VAR_23);
  return (1);
 }
 VAR_11.sdl_type = VAR_17->sdl_type;
 VAR_11.sdl_index = VAR_17->sdl_index;
 return (FUNC_12(VAR_4));
}
