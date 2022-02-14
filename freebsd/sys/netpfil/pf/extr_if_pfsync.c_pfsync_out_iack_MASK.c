
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_ins_ack {int creatorid; int id; } ;
struct pf_state {int creatorid; int id; } ;



__attribute__((used)) static void
FUNC_0(struct pf_state *VAR_0, void *VAR_1)
{
 struct pfsync_ins_ack *VAR_2 = VAR_1;

 VAR_2->id = VAR_0->id;
 VAR_2->creatorid = VAR_0->creatorid;
}
