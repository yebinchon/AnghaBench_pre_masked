
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct in6_nbrinfo {struct in6_addr addr; int ifname; } ;
typedef int nbi ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct in6_nbrinfo*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static struct in6_nbrinfo *
FUNC_7(struct in6_addr *VAR_3, int VAR_4, int VAR_5)
{
 static struct in6_nbrinfo VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_5(VAR_0, VAR_2, 0)) < 0)
  FUNC_2(1, "socket");

 FUNC_0(&VAR_6, sizeof(VAR_6));
 FUNC_3(VAR_4, VAR_6.ifname);
 VAR_6.addr = *VAR_3;
 if (FUNC_4(VAR_7, VAR_1, (caddr_t)&VAR_6) < 0) {
  if (VAR_5)
   FUNC_6("ioctl(SIOCGNBRINFO_IN6)");
  FUNC_1(VAR_7);
  return(((void*)0));
 }

 FUNC_1(VAR_7);
 return(&VAR_6);
}
