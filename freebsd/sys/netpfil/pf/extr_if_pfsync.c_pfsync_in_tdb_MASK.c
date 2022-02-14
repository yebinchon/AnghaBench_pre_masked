
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_tdb {int dummy; } ;
struct pfsync_pkt {int dummy; } ;
struct mbuf {scalar_t__ m_data; } ;
struct TYPE_2__ {int pfsyncs_badlen; } ;


 TYPE_1__ VAR_0 ;
 struct mbuf* FUNC_0 (struct mbuf*,int,int,int*) ;
 int FUNC_1 (struct pfsync_tdb*) ;

__attribute__((used)) static int
FUNC_2(struct pfsync_pkt *VAR_1, struct mbuf *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 * sizeof(struct pfsync_tdb);
 return (VAR_5);
}
