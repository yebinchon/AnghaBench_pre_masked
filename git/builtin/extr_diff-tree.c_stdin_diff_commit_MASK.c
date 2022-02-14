
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct commit_list {int dummy; } ;
struct commit {struct commit_list* parents; } ;
struct TYPE_2__ {struct commit_list* next; } ;


 TYPE_1__* FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit_list*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,struct commit*) ;
 int VAR_0 ;
 struct commit* FUNC_4 (int ,struct object_id*) ;
 int FUNC_5 (char const*,struct object_id*,char const**) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct commit *VAR_2, const char *VAR_3)
{
 struct object_id VAR_4;
 struct commit_list **VAR_5 = ((void*)0);


 while (FUNC_2(*VAR_3++) && !FUNC_5(VAR_3, &VAR_4, &VAR_3)) {
  struct commit *VAR_6 = FUNC_4(VAR_1, &VAR_4);
  if (!VAR_5) {

   FUNC_1(VAR_2->parents);
   VAR_2->parents = ((void*)0);
   VAR_5 = &(VAR_2->parents);
  }
  if (VAR_6) {
   VAR_5 = &FUNC_0(VAR_6, VAR_5)->next;
  }
 }
 return FUNC_3(&VAR_0, VAR_2);
}
