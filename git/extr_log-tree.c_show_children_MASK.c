
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int file; } ;
struct rev_info {TYPE_3__ diffopt; int children; } ;
struct commit_list {TYPE_2__* item; struct commit_list* next; } ;
struct commit {int object; } ;
struct TYPE_4__ {int oid; } ;
struct TYPE_5__ {TYPE_1__ object; } ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,char*) ;
 struct commit_list* FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct rev_info *VAR_0, struct commit *VAR_1, int VAR_2)
{
 struct commit_list *VAR_3 = FUNC_2(&VAR_0->children, &VAR_1->object);
 for ( ; VAR_3; VAR_3 = VAR_3->next) {
  FUNC_1(VAR_0->diffopt.file, " %s", FUNC_0(&VAR_3->item->object.oid, VAR_2));
 }
}
