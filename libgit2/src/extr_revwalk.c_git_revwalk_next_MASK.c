
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* get_next ) (TYPE_2__**,TYPE_1__*) ;int walking; } ;
typedef TYPE_1__ git_revwalk ;
typedef int git_oid ;
struct TYPE_9__ {int oid; } ;
typedef TYPE_2__ git_commit_list_node ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__**,TYPE_1__*) ;

int FUNC_6(git_oid *VAR_1, git_revwalk *VAR_2)
{
 int VAR_3;
 git_commit_list_node *VAR_4;

 FUNC_0(VAR_2 && VAR_1);

 if (!VAR_2->walking) {
  if ((VAR_3 = FUNC_4(VAR_2)) < 0)
   return VAR_3;
 }

 VAR_3 = VAR_2->get_next(&VAR_4, VAR_2);

 if (VAR_3 == VAR_0) {
  FUNC_3(VAR_2);
  FUNC_1();
  return VAR_0;
 }

 if (!VAR_3)
  FUNC_2(VAR_1, &VAR_4->oid);

 return VAR_3;
}
