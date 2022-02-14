
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_moptions {int im6o_head; int im6o_multicast_loop; int im6o_multicast_hlim; int * im6o_multicast_ifp; } ;
struct inpcb {struct ip6_moptions* in6p_moptions; } ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct ip6_moptions*,int ) ;
 int VAR_3 ;
 struct ip6_moptions* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static struct ip6_moptions *
FUNC_5(struct inpcb *VAR_4)
{
 struct ip6_moptions *VAR_5;

 FUNC_0(VAR_4);
 if (VAR_4->in6p_moptions != ((void*)0))
  return (VAR_4->in6p_moptions);

 FUNC_1(VAR_4);

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_0, VAR_1);

 VAR_5->im6o_multicast_ifp = ((void*)0);
 VAR_5->im6o_multicast_hlim = VAR_2;
 VAR_5->im6o_multicast_loop = VAR_3;
 FUNC_2(&VAR_5->im6o_head);

 FUNC_0(VAR_4);
 if (VAR_4->in6p_moptions != ((void*)0)) {
  FUNC_3(VAR_5, VAR_0);
  return (VAR_4->in6p_moptions);
 }
 VAR_4->in6p_moptions = VAR_5;
 return (VAR_5);
}
