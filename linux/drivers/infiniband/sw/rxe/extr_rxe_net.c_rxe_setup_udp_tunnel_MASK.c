
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_tunnel_sock_cfg {int encap_type; int encap_rcv; } ;
struct udp_port_cfg {int ipv6_v6only; int local_udp_port; int family; } ;
struct socket {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket* FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct net*,struct socket*,struct udp_tunnel_sock_cfg*) ;
 int FUNC_3 (struct net*,struct udp_port_cfg*,struct socket**) ;

__attribute__((used)) static struct socket *FUNC_4(struct net *VAR_3, __be16 VAR_4,
        bool VAR_5)
{
 int VAR_6;
 struct socket *VAR_7;
 struct udp_port_cfg VAR_8 = { };
 struct udp_tunnel_sock_cfg VAR_9 = { };

 if (VAR_5) {
  VAR_8.family = VAR_1;
  VAR_8.ipv6_v6only = 1;
 } else {
  VAR_8.family = VAR_0;
 }

 VAR_8.local_udp_port = VAR_4;


 VAR_6 = FUNC_3(VAR_3, &VAR_8, &VAR_7);
 if (VAR_6 < 0) {
  FUNC_1("failed to create udp socket. err = %d\n", VAR_6);
  return FUNC_0(VAR_6);
 }

 VAR_9.encap_type = 1;
 VAR_9.encap_rcv = VAR_2;


 FUNC_2(VAR_3, VAR_7, &VAR_9);

 return VAR_7;
}
