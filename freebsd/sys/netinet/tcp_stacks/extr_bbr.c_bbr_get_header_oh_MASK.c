
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tcphdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ rc_inc_enet_oh; scalar_t__ rc_inc_ip_oh; scalar_t__ rc_inc_tcp_oh; } ;
struct tcp_bbr {int rc_last_options; TYPE_1__ r_ctl; scalar_t__ r_is_v6; } ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
struct ether_header {int dummy; } ;



__attribute__((used)) static uint32_t
FUNC_0(struct tcp_bbr *VAR_0)
{
 int VAR_1;

 VAR_1 = 0;
 if (VAR_0->r_ctl.rc_inc_tcp_oh) {

  VAR_1 = (VAR_0->rc_last_options + sizeof(struct tcphdr));
 }
 if (VAR_0->r_ctl.rc_inc_ip_oh) {
 }
 if (VAR_0->r_ctl.rc_inc_enet_oh) {

  VAR_1 += sizeof(struct ether_header);
 }
 return(VAR_1);
}
