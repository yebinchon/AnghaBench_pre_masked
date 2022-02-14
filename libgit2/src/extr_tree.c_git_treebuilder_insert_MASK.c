
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int map; int repo; } ;
typedef TYPE_1__ git_treebuilder ;
struct TYPE_11__ {int attr; int filename; scalar_t__ oid; } ;
typedef TYPE_2__ git_tree_entry ;
typedef int git_oid ;
typedef int git_filemode_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (char const*,int ,int const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char const*,int const*,int ) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (int *,int const*) ;
 TYPE_2__* FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (char const*) ;

int FUNC_10(
 const git_tree_entry **VAR_1,
 git_treebuilder *VAR_2,
 const char *VAR_3,
 const git_oid *VAR_4,
 git_filemode_t VAR_5)
{
 git_tree_entry *VAR_6;
 int VAR_7;

 FUNC_2(VAR_2 && VAR_4 && VAR_3);

 if ((VAR_7 = FUNC_3(VAR_2->repo, VAR_3, VAR_4, VAR_5)) < 0)
  return VAR_7;

 if ((VAR_6 = FUNC_6(VAR_2->map, VAR_3)) != ((void*)0)) {
  FUNC_5((git_oid *) VAR_6->oid, VAR_4);
 } else {
  VAR_6 = FUNC_1(VAR_3, FUNC_9(VAR_3), VAR_4);
  FUNC_0(VAR_6);

  if ((VAR_7 = FUNC_7(VAR_2->map, VAR_6->filename, VAR_6)) < 0) {
   FUNC_8(VAR_6);
   FUNC_4(VAR_0, "failed to insert %s", VAR_3);
   return -1;
  }
 }

 VAR_6->attr = VAR_5;

 if (VAR_1)
  *VAR_1 = VAR_6;

 return 0;
}
