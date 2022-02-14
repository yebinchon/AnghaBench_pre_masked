
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct ipoib_dev_priv {int dummy; } ;


 int FUNC_0 (struct mbuf*,unsigned int) ;

void
FUNC_1(struct ipoib_dev_priv *VAR_0, struct mbuf *VAR_1, unsigned int VAR_2)
{

 FUNC_0(VAR_1, -(VAR_1->m_pkthdr.len - VAR_2));
}
