
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int odb; } ;
typedef TYPE_2__ git_revwalk ;
struct TYPE_12__ {scalar_t__ type; } ;
struct TYPE_14__ {TYPE_1__ cached; } ;
typedef TYPE_3__ git_odb_object ;
struct TYPE_15__ {int oid; scalar_t__ parsed; } ;
typedef TYPE_4__ git_commit_list_node ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__**,int ,int *) ;

int FUNC_4(git_revwalk *VAR_2, git_commit_list_node *VAR_3)
{
 git_odb_object *VAR_4;
 int VAR_5;

 if (VAR_3->parsed)
  return 0;

 if ((VAR_5 = FUNC_3(&VAR_4, VAR_2->odb, &VAR_3->oid)) < 0)
  return VAR_5;

 if (VAR_4->cached.type != VAR_1) {
  FUNC_1(VAR_0, "object is no commit object");
  VAR_5 = -1;
 } else
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);

 FUNC_2(VAR_4);
 return VAR_5;
}
