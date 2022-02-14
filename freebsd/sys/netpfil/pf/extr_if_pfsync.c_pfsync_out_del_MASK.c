
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_del_c {int creatorid; int id; } ;
struct pf_state {int state_flags; int creatorid; int id; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct pf_state *VAR_1, void *VAR_2)
{
 struct pfsync_del_c *VAR_3 = VAR_2;

 VAR_3->id = VAR_1->id;
 VAR_3->creatorid = VAR_1->creatorid;
 VAR_1->state_flags |= VAR_0;
}
