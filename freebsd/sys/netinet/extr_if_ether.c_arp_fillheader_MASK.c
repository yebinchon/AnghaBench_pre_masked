
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_encap_req {size_t bufsize; int flags; struct if_encap_req* hdata; int lladdr; int family; int rtype; struct if_encap_req* buf; } ;
typedef struct if_encap_req u_char ;
struct ifnet {int (* if_requestencap ) (struct ifnet*,struct if_encap_req*) ;} ;
struct arphdr {int dummy; } ;
typedef int ereq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct arphdr*) ;
 int FUNC_1 (struct if_encap_req*,int) ;
 int FUNC_2 (struct ifnet*,struct if_encap_req*) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_3, struct arphdr *VAR_4, int VAR_5, u_char *VAR_6,
    size_t *VAR_7)
{
 struct if_encap_req VAR_8;
 int VAR_9;

 FUNC_1(VAR_6, *VAR_7);
 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.buf = VAR_6;
 VAR_8.bufsize = *VAR_7;
 VAR_8.rtype = VAR_2;
 VAR_8.family = VAR_0;
 VAR_8.lladdr = FUNC_0(VAR_4);
 VAR_8.hdata = (u_char *)VAR_4;
 if (VAR_5)
  VAR_8.flags = VAR_1;
 VAR_9 = VAR_3->if_requestencap(VAR_3, &VAR_8);
 if (VAR_9 == 0)
  *VAR_7 = VAR_8.bufsize;

 return (VAR_9);
}
