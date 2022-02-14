
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * udp_tun_icmp_t ;
typedef int * udp_tun_func_t ;
struct udpcb {void* u_tun_ctx; int * u_icmp_func; int * u_tun_func; } ;
struct socket {scalar_t__ so_type; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_1 ;
 struct udpcb* FUNC_3 (struct inpcb*) ;
 struct inpcb* FUNC_4 (struct socket*) ;

int
FUNC_5(struct socket *VAR_2, udp_tun_func_t VAR_3, udp_tun_icmp_t VAR_4, void *VAR_5)
{
 struct inpcb *VAR_6;
 struct udpcb *VAR_7;

 FUNC_2(VAR_2->so_type == VAR_1,
     ("udp_set_kernel_tunneling: !dgram"));
 VAR_6 = FUNC_4(VAR_2);
 FUNC_2(VAR_6 != ((void*)0), ("udp_set_kernel_tunneling: inp == NULL"));
 FUNC_0(VAR_6);
 VAR_7 = FUNC_3(VAR_6);
 if ((VAR_7->u_tun_func != ((void*)0)) ||
     (VAR_7->u_icmp_func != ((void*)0))) {
  FUNC_1(VAR_6);
  return (VAR_0);
 }
 VAR_7->u_tun_func = VAR_3;
 VAR_7->u_icmp_func = VAR_4;
 VAR_7->u_tun_ctx = VAR_5;
 FUNC_1(VAR_6);
 return (0);
}
