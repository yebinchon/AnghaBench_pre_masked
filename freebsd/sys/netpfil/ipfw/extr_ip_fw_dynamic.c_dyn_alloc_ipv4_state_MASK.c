
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ipfw_flow_id {int dst_ip; int src_ip; int dst_port; int src_port; int proto; } ;
struct dyn_ipv4_state {int dst; int src; int dport; int sport; int proto; int kidx; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dyn_ipv4_state* FUNC_0 (int ,int) ;

__attribute__((used)) static struct dyn_ipv4_state *
FUNC_1(const struct ipfw_flow_id *VAR_3, uint16_t VAR_4,
    uint8_t VAR_5)
{
 struct dyn_ipv4_state *VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0 | VAR_1);
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_6->type = VAR_5;
 VAR_6->kidx = VAR_4;
 VAR_6->proto = VAR_3->proto;
 VAR_6->sport = VAR_3->src_port;
 VAR_6->dport = VAR_3->dst_port;
 VAR_6->src = VAR_3->src_ip;
 VAR_6->dst = VAR_3->dst_ip;
 return (VAR_6);
}
