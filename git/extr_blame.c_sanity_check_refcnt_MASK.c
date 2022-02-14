
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct blame_scoreboard {int (* on_sanity_fail ) (struct blame_scoreboard*,int) ;struct blame_entry* ent; } ;
struct blame_entry {TYPE_3__* suspect; struct blame_entry* next; } ;
struct TYPE_6__ {scalar_t__ refcnt; char* path; TYPE_2__* commit; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 int FUNC_0 (int ,char*,char*,char*,scalar_t__) ;
 char* FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct blame_scoreboard*,int) ;

__attribute__((used)) static void FUNC_3(struct blame_scoreboard *VAR_1)
{
 int VAR_2 = 0;
 struct blame_entry *VAR_3;

 for (VAR_3 = VAR_1->ent; VAR_3; VAR_3 = VAR_3->next) {

  if (VAR_3->suspect->refcnt <= 0) {
   FUNC_0(VAR_0, "%s in %s has negative refcnt %ld\n",
    VAR_3->suspect->path,
    FUNC_1(&VAR_3->suspect->commit->object.oid),
    VAR_3->suspect->refcnt);
   VAR_2 = 1;
  }
 }
 if (VAR_2)
  VAR_1->on_sanity_fail(VAR_1, VAR_2);
}
