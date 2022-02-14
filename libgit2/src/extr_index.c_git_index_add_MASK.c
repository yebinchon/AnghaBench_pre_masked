
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ path; int mode; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_11__ {int tree; } ;
typedef TYPE_2__ git_index ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__**,TYPE_2__*,TYPE_1__ const*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__**,int,int,int,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(git_index *VAR_1, const git_index_entry *VAR_2)
{
 git_index_entry *VAR_3 = ((void*)0);
 int VAR_4;

 FUNC_0(VAR_1 && VAR_2 && VAR_2->path);

 if (!FUNC_5(VAR_2->mode)) {
  FUNC_1(VAR_0, "invalid entry mode");
  return -1;
 }

 if ((VAR_4 = FUNC_3(&VAR_3, VAR_1, VAR_2)) < 0 ||
  (VAR_4 = FUNC_4(VAR_1, &VAR_3, 1, 1, 1, 0)) < 0)
  return VAR_4;

 FUNC_2(VAR_1->tree, VAR_3->path);
 return 0;
}
