
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct nhop6_basic {int nh_flags; struct ifnet* nh_ifp; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int if_fib; } ;
struct ifaddr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,struct in6_addr*,int ,int ,int ,struct nhop6_basic*) ;
 struct ifaddr* FUNC_3 (struct sockaddr const*,struct ifnet*) ;
 int FUNC_4 (int *,struct in6_addr*,int *) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_7,
      u_int VAR_8,
      const struct sockaddr *VAR_9)
{
 const struct sockaddr_in6 *VAR_10;
 struct nhop6_basic VAR_11;
 struct in6_addr VAR_12;
 uint32_t VAR_13;
 int VAR_14;
 char VAR_15[VAR_2];
 int VAR_16;

 FUNC_1();
 FUNC_0(VAR_9->sa_family == VAR_0,
     ("sin_family %d", VAR_9->sa_family));

 VAR_10 = (const struct sockaddr_in6 *)VAR_9;
 FUNC_4(&VAR_10->sin6_addr, &VAR_12, &VAR_13);
 VAR_16 = VAR_6 ? VAR_5 : VAR_7->if_fib;
 VAR_14 = FUNC_2(VAR_16, &VAR_12, VAR_13, 0, 0, &VAR_11);
 if (VAR_14 != 0 || (VAR_11 & VAR_4) || VAR_11 != VAR_7) {
  struct ifaddr *VAR_17;




  VAR_17 = FUNC_3(VAR_9, VAR_7);
  if (VAR_17 != ((void*)0)) {
   return 0;
  }
  FUNC_6(VAR_3, "IPv6 address: \"%s\" is not on the network\n",
      FUNC_5(VAR_15, &VAR_10->sin6_addr));
  return VAR_1;
 }
 return 0;
}
