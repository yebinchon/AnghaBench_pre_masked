
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct ip_moptions {int imo_multicast_vif; int imo_head; int imo_multicast_loop; int imo_multicast_ttl; TYPE_1__ imo_multicast_addr; int * imo_multicast_ifp; } ;
struct inpcb {struct ip_moptions* inp_moptions; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ip_moptions*,int ) ;
 int VAR_4 ;
 struct ip_moptions* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static struct ip_moptions *
FUNC_5(struct inpcb *VAR_5)
{
 struct ip_moptions *VAR_6;

 FUNC_0(VAR_5);
 if (VAR_5->inp_moptions != ((void*)0))
  return (VAR_5->inp_moptions);

 FUNC_1(VAR_5);

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2, VAR_3);

 VAR_6->imo_multicast_ifp = ((void*)0);
 VAR_6->imo_multicast_addr.s_addr = VAR_0;
 VAR_6->imo_multicast_vif = -1;
 VAR_6->imo_multicast_ttl = VAR_1;
 VAR_6->imo_multicast_loop = VAR_4;
 FUNC_2(&VAR_6->imo_head);

 FUNC_0(VAR_5);
 if (VAR_5->inp_moptions != ((void*)0)) {
  FUNC_3(VAR_6, VAR_2);
  return (VAR_5->inp_moptions);
 }
 VAR_5->inp_moptions = VAR_6;
 return (VAR_6);
}
