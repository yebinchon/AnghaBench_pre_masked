
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {int dummy; } ;
struct TYPE_2__ {struct commit_list* next; } ;


 TYPE_1__* FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (char*,int ) ;
 struct commit* FUNC_2 (struct repository*,struct object_id const*) ;
 int FUNC_3 (struct object_id const*) ;

__attribute__((used)) static struct commit_list **FUNC_4(struct repository *VAR_0,
       struct commit_list **VAR_1,
       const struct object_id *VAR_2)
{
 struct commit *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (!VAR_3)
  FUNC_1("no such commit %s", FUNC_3(VAR_2));
 return &FUNC_0(VAR_3, VAR_1)->next;
}
