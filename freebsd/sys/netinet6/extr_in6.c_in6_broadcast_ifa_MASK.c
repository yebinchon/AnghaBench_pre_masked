
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_multi {scalar_t__ in6m_state; int in6m_timer; } ;
struct in6_ifaddr {int ia6_flags; int ia_ifa; } ;
struct in6_aliasreq {int dummy; } ;
struct ifnet {int if_flags; } ;
struct ifaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct in6_ifaddr*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ifnet*,struct in6_aliasreq*,struct in6_ifaddr*,int,struct in6_multi**) ;
 int FUNC_5 (struct in6_ifaddr*) ;
 int FUNC_6 (struct ifaddr*,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_7, struct in6_aliasreq *VAR_8,
    struct in6_ifaddr *VAR_9, int VAR_10)
{
 struct in6_multi *VAR_11;
 int VAR_12 = 0;


 if ((VAR_12 = FUNC_5(VAR_9)) != 0) {
  FUNC_3(&VAR_9->ia_ifa);
  FUNC_1(&VAR_9->ia_ifa);
  return (VAR_12);
 }


 VAR_11 = ((void*)0);
 if ((VAR_7->if_flags & VAR_0) != 0) {
  VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10, &VAR_11);
  if (VAR_12 != 0) {
   FUNC_3(&VAR_9->ia_ifa);
   FUNC_1(&VAR_9->ia_ifa);
   return (VAR_12);
  }
 }


 if ((VAR_9->ia6_flags & VAR_2)) {
  int VAR_13, VAR_14, VAR_15;

  VAR_13 = 0;
  if ((VAR_10 & VAR_1)) {
   VAR_14 = 0;
   if (VAR_11 != ((void*)0) &&
       VAR_11->in6m_state == VAR_4) {
    VAR_14 = VAR_11->in6m_timer;
   }
   VAR_15 = VAR_3 * VAR_6;
   if (VAR_15 - VAR_14 == 0)
    VAR_13 = 0;
   else {
    VAR_13 =
        (FUNC_0() % (VAR_15 - VAR_14)) +
        VAR_14;
   }
  }
  FUNC_6((struct ifaddr *)VAR_9, VAR_13);
 }

 FUNC_2(VAR_9, VAR_5);
 FUNC_1(&VAR_9->ia_ifa);
 return (VAR_12);
}
