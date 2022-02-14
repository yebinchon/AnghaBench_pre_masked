
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptr; } ;
struct TYPE_4__ {int flowid; TYPE_1__ PH_loc; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ifnet {int if_index; int if_vnet; } ;



__attribute__((used)) static __inline void
FUNC_0(struct mbuf *VAR_0, struct ifnet *VAR_1)
{




 VAR_0->m_pkthdr.flowid = VAR_1->if_index;
}
