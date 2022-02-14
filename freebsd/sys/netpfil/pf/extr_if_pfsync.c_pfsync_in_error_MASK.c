
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pfsync_pkt {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int pfsyncs_badact; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct mbuf*) ;

__attribute__((used)) static int
FUNC_1(struct pfsync_pkt *VAR_1, struct mbuf *VAR_2, int VAR_3, int VAR_4)
{
 VAR_0.pfsyncs_badact++;

 FUNC_0(VAR_2);
 return (-1);
}
