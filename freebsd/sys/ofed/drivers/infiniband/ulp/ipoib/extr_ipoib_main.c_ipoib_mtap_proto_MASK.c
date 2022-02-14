
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mbuf {int dummy; } ;
struct ifnet {int if_bpf; } ;
struct ether_header {int ether_dhost; int ether_shost; int ether_type; } ;
typedef int eh ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ether_header*,int,struct mbuf*) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct ifnet *VAR_1, struct mbuf *VAR_2, uint16_t VAR_3)
{
 struct ether_header VAR_4;

 VAR_4.ether_type = VAR_3;
 FUNC_1(&VAR_4.ether_shost, VAR_0);
 FUNC_1(&VAR_4.ether_dhost, VAR_0);
 FUNC_0(VAR_1->if_bpf, &VAR_4, sizeof(VAR_4), VAR_2);
}
