
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int u_int16_t ;
struct tcphdr {int dummy; } ;
struct pf_addr {int v6; int v4; } ;
struct nhop6_basic {int nh_mtu; } ;
struct nhop4_basic {int nh_mtu; } ;
struct ip6_hdr {int dummy; } ;
struct ip {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int sa_family_t ;




 int VAR_0 ;
 int FUNC_0 (int,int ,int ,int ,struct nhop4_basic*) ;
 int FUNC_1 (int,struct in6_addr*,int ,int ,int ,struct nhop6_basic*) ;
 int FUNC_2 (int *,struct in6_addr*,int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static u_int16_t
FUNC_5(struct pf_addr *VAR_1, sa_family_t VAR_2, int VAR_3, u_int16_t VAR_4)
{
 int VAR_5 = 0;
 uint16_t VAR_6 = 0;

 switch (VAR_2) {
 }

 VAR_6 = FUNC_3(VAR_0, VAR_6);
 VAR_6 = FUNC_4(VAR_6, VAR_4);
 VAR_6 = FUNC_3(VAR_6, 64);
 return (VAR_6);
}
