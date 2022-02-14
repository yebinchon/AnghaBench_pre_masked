
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ypldap_addr_list {int dummy; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct ypldap_addr {TYPE_2__ ss; } ;
struct sockaddr_in6 {int sin6_len; int sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; } ;
struct in6_addr {int dummy; } ;
struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_socktype; } ;
typedef int hints ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ypldap_addr_list*,struct ypldap_addr*,int ) ;
 struct ypldap_addr* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct addrinfo*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int *,struct addrinfo*,struct addrinfo**) ;
 int FUNC_6 (char*,char const*,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (struct addrinfo*,int ,int) ;
 int VAR_7 ;

int
FUNC_9(const char *VAR_8, struct ypldap_addr_list *VAR_9)
{
 struct addrinfo VAR_10, *VAR_11, *VAR_12;
 int VAR_13, VAR_14 = 0;
 struct sockaddr_in *VAR_15;
 struct sockaddr_in6 *VAR_16;
 struct ypldap_addr *VAR_17;

 FUNC_8(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.ai_family = VAR_5;
 VAR_10.ai_socktype = VAR_6;
 VAR_13 = FUNC_5(VAR_8, ((void*)0), &VAR_10, &VAR_11);
 if (VAR_13 == VAR_2 || VAR_13 == VAR_3)
   return (0);
 if (VAR_13) {
  FUNC_6("could not parse \"%s\": %s", VAR_8,
      FUNC_4(VAR_13));
  return (-1);
 }

 for (VAR_12 = VAR_11; VAR_12 && VAR_14 < VAR_4; VAR_12 = VAR_12->ai_next) {
  if (VAR_12->ai_family != VAR_0 &&
      VAR_12->ai_family != VAR_1)
   continue;
  if ((VAR_17 = FUNC_1(1, sizeof(struct ypldap_addr))) == ((void*)0))
   FUNC_2(((void*)0));
  VAR_17->ss.ss_family = VAR_12->ai_family;
  if (VAR_12->ai_family == VAR_0) {
   VAR_15 = (struct sockaddr_in *)&VAR_17->ss;
   VAR_15->sin_len = sizeof(struct sockaddr_in);
   VAR_15->sin_addr.s_addr = ((struct sockaddr_in *)
       VAR_12->ai_addr)->sin_addr.s_addr;
  } else {
   VAR_16 = (struct sockaddr_in6 *)&VAR_17->ss;
   VAR_16->sin6_len = sizeof(struct sockaddr_in6);
   FUNC_7(&VAR_16->sin6_addr, &((struct sockaddr_in6 *)
       VAR_12->ai_addr)->sin6_addr, sizeof(struct in6_addr));
  }

  FUNC_0(VAR_9, VAR_17, VAR_7);
  VAR_14++;
 }
 FUNC_3(VAR_11);
 return (VAR_14);
}
