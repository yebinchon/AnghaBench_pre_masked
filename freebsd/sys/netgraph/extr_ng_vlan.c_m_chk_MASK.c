
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; } ;
struct mbuf {int m_len; TYPE_1__ m_pkthdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*) ;
 struct mbuf* FUNC_1 (struct mbuf*,int) ;

__attribute__((used)) static __inline int
FUNC_2(struct mbuf **VAR_2, int VAR_3)
{

 if ((*VAR_2)->m_pkthdr.len < VAR_3) {
  FUNC_0((*VAR_2));
  (*VAR_2) = ((void*)0);
  return (VAR_0);
 }
 if ((*VAR_2)->m_len < VAR_3 && ((*VAR_2) = FUNC_1((*VAR_2), VAR_3)) == ((void*)0))
  return (VAR_1);

 return (0);
}
