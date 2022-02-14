
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flowid; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct inpcbinfo {int dummy; } ;
struct inpcbgroup {int dummy; } ;


 int FUNC_0 (struct mbuf*) ;
 struct inpcbgroup* FUNC_1 (struct inpcbinfo*,int ,int ) ;

__attribute__((used)) static struct inpcbgroup *
FUNC_2(struct inpcbinfo *VAR_0, struct mbuf *VAR_1)
{

 return (FUNC_1(VAR_0, FUNC_0(VAR_1),
     VAR_1->m_pkthdr.flowid));
}
