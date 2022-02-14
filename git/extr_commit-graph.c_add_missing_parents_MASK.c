
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr; int * list; int alloc; } ;
struct write_commit_graph_context {TYPE_1__ oids; } ;
struct commit_list {TYPE_3__* item; struct commit_list* next; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_5__ {int flags; int oid; } ;
struct TYPE_6__ {TYPE_2__ object; } ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct write_commit_graph_context *VAR_1, struct commit *VAR_2)
{
 struct commit_list *VAR_3;
 for (VAR_3 = VAR_2->parents; VAR_3; VAR_3 = VAR_3->next) {
  if (!(VAR_3->item->object.flags & VAR_0)) {
   FUNC_0(VAR_1->oids.list, VAR_1->oids.nr + 1, VAR_1->oids.alloc);
   FUNC_1(&VAR_1->oids.list[VAR_1->oids.nr], &(VAR_3->item->object.oid));
   VAR_1->oids.nr++;
   VAR_3->item->object.flags |= VAR_0;
  }
 }
}
