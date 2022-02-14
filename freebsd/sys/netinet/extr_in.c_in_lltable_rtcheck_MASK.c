
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_in {scalar_t__ sa_family; int sin_len; int sa_len; int rti_flags; int rti_addrs; int sin_addr; struct ifnet* rti_ifp; int sa_data; struct sockaddr_in** rti_info; } ;
struct sockaddr {scalar_t__ sa_family; int sin_len; int sa_len; int rti_flags; int rti_addrs; int sin_addr; struct ifnet* rti_ifp; int sa_data; struct sockaddr** rti_info; } ;
struct rt_addrinfo {scalar_t__ sa_family; int sin_len; int sa_len; int rti_flags; int rti_addrs; int sin_addr; struct ifnet* rti_ifp; int sa_data; struct rt_addrinfo** rti_info; } ;
struct ifnet {scalar_t__ if_type; int if_flags; int if_fib; } ;
typedef int rt_mask ;
typedef int rt_key ;
typedef int rt_gateway ;
typedef int info ;
typedef int in_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct sockaddr_in*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct sockaddr_in*) ;
 scalar_t__ FUNC_6 (int ,struct sockaddr_in const*,int ,int ,struct sockaddr_in*) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_14, u_int VAR_15, const struct sockaddr *VAR_16)
{
 struct rt_addrinfo VAR_17;
 struct sockaddr_in VAR_18, VAR_19;
 struct sockaddr VAR_20;
 int VAR_21;

 FUNC_0(VAR_16->sa_family == VAR_0,
     ("sin_family %d", VAR_16->sa_family));

 FUNC_1(&VAR_18, sizeof(VAR_18));
 VAR_18.sin_len = sizeof(VAR_18);
 FUNC_1(&VAR_19, sizeof(VAR_19));
 VAR_19.sin_len = sizeof(VAR_19);
 FUNC_1(&VAR_20, sizeof(VAR_20));
 VAR_20.sa_len = sizeof(VAR_20);

 FUNC_1(&VAR_17, sizeof(VAR_17));
 VAR_17.rti_info[VAR_8] = (struct sockaddr *)&VAR_18;
 VAR_17.rti_info[VAR_10] = (struct sockaddr *)&VAR_19;
 VAR_17.rti_info[VAR_9] = (struct sockaddr *)&VAR_20;

 if (FUNC_6(VAR_14->if_fib, VAR_16, VAR_7, 0, &VAR_17) != 0)
  return (VAR_1);

 VAR_21 = VAR_17.rti_flags;







 if (VAR_21 & VAR_12) {
  if (!(VAR_21 & VAR_13) || !VAR_17.rti_ifp ||
      VAR_17.rti_ifp->if_type != VAR_4 ||
      (VAR_17.rti_ifp->if_flags & (VAR_2 | VAR_3)) != 0 ||
      FUNC_4(VAR_20.sa_data, VAR_16->sa_data,
      sizeof(in_addr_t)) != 0) {
   FUNC_5(&VAR_17);
   return (VAR_1);
  }
 }
 FUNC_5(&VAR_17);
 if (!(VAR_21 & VAR_13) && VAR_17.rti_ifp != VAR_14) {
  const char *VAR_22, *VAR_23, *VAR_24, *VAR_25;
  const struct sockaddr_in *VAR_26;

  VAR_23 = (const char *)&VAR_19;




  if ((VAR_17.rti_addrs & VAR_11) == 0)
   return (VAR_1);

  VAR_22 = (const char *)&VAR_18;
  VAR_24 = (const char *)VAR_16;
  VAR_26 = (const struct sockaddr_in *)VAR_16;
  VAR_25 = VAR_24 + VAR_26->sin_len;

  for ( ; VAR_24 < VAR_25; VAR_22++, VAR_23++, VAR_24++) {
   if ((*VAR_22 ^ *VAR_24) & *VAR_23) {







    return (VAR_1);
   }
  }
 }

 return (0);
}
