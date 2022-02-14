
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_len; int sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct rtentry {int dummy; } ;
struct nd_defrouter {int installed; TYPE_1__* ifp; int rtaddr; } ;
typedef int mask ;
typedef int gate ;
typedef int def ;
struct TYPE_2__ {int if_fib; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sockaddr_in6*,int) ;
 int FUNC_2 (int ,struct sockaddr*,struct sockaddr*,struct sockaddr*,int ,struct rtentry**,int ) ;
 int FUNC_3 (int ,struct rtentry*) ;

__attribute__((used)) static void
FUNC_4(struct nd_defrouter *VAR_3)
{
 struct sockaddr_in6 VAR_4, VAR_5, VAR_6;
 struct rtentry *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_1(&VAR_4, sizeof(VAR_4));
 FUNC_1(&VAR_5, sizeof(VAR_5));
 FUNC_1(&VAR_6, sizeof(VAR_6));

 VAR_4.sin6_len = VAR_5.sin6_len = VAR_6.sin6_len =
     sizeof(struct sockaddr_in6);
 VAR_4.sin6_family = VAR_6.sin6_family = VAR_0;
 VAR_6.sin6_addr = VAR_3->rtaddr;

 VAR_8 = FUNC_2(VAR_2, (struct sockaddr *)&VAR_4,
     (struct sockaddr *)&VAR_6, (struct sockaddr *)&VAR_5,
     VAR_1, &VAR_7, VAR_3->ifp->if_fib);
 if (VAR_7) {
  FUNC_3(VAR_2, VAR_7);
  FUNC_0(VAR_7);
 }
 if (VAR_8 == 0)
  VAR_3->installed = 1;
}
