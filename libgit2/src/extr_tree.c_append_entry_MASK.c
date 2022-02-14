
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_8__ {int map; int repo; } ;
typedef TYPE_1__ git_treebuilder ;
struct TYPE_9__ {int filename; scalar_t__ attr; } ;
typedef TYPE_2__ git_tree_entry ;
typedef int git_oid ;
typedef scalar_t__ git_filemode_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (char const*,int ,int const*) ;
 int FUNC_2 (int ,char const*,int const*,scalar_t__) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
 git_treebuilder *VAR_1,
 const char *VAR_2,
 const git_oid *VAR_3,
 git_filemode_t VAR_4,
 bool VAR_5)
{
 git_tree_entry *VAR_6;
 int VAR_7 = 0;

 if (VAR_5 && ((VAR_7 = FUNC_2(VAR_1->repo, VAR_2, VAR_3, VAR_4)) < 0))
  return VAR_7;

 VAR_6 = FUNC_1(VAR_2, FUNC_6(VAR_2), VAR_3);
 FUNC_0(VAR_6);

 VAR_6->attr = (uint16_t)VAR_4;

 if ((VAR_7 = FUNC_4(VAR_1->map, VAR_6->filename, VAR_6)) < 0) {
  FUNC_5(VAR_6);
  FUNC_3(VAR_0, "failed to append entry %s to the tree builder", VAR_2);
  return -1;
 }

 return 0;
}
