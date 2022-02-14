
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_upd_c {int timeout; int creatorid; int dst; int src; int id; } ;
struct pf_state {int timeout; int creatorid; int dst; int src; int id; } ;


 int FUNC_0 (struct pfsync_upd_c*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct pf_state *VAR_0, void *VAR_1)
{
 struct pfsync_upd_c *VAR_2 = VAR_1;

 FUNC_0(VAR_2, sizeof(*VAR_2));
 VAR_2->id = VAR_0->id;
 FUNC_1(&VAR_0->src, &VAR_2->src);
 FUNC_1(&VAR_0->dst, &VAR_2->dst);
 VAR_2->creatorid = VAR_0->creatorid;
 VAR_2->timeout = VAR_0->timeout;
}
