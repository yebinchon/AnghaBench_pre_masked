
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfsync_pkt {int dummy; } ;
struct TYPE_3__ {int len; } ;
struct mbuf {TYPE_1__ m_pkthdr; } ;
struct TYPE_4__ {int pfsyncs_badlen; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_1(struct pfsync_pkt *VAR_1, struct mbuf *VAR_2, int VAR_3, int VAR_4)
{

 if (VAR_3 != VAR_2->m_pkthdr.len)
  VAR_0.pfsyncs_badlen++;


 FUNC_0(VAR_2);
 return (-1);
}
