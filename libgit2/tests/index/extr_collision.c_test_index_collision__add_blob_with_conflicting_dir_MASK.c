
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree_entry ;
typedef int git_tree ;
typedef int git_oid ;
struct TYPE_7__ {int seconds; } ;
struct TYPE_6__ {int seconds; } ;
struct TYPE_8__ {int mode; char* path; int id; scalar_t__ file_size; TYPE_2__ mtime; TYPE_1__ ctime; } ;
typedef TYPE_3__ git_index_entry ;
typedef int entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

void FUNC_10(void)
{
 git_index_entry VAR_3;
 git_tree_entry *VAR_4;
 git_oid VAR_5;
 git_tree *VAR_6;

 FUNC_9(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.ctime.seconds = 12346789;
 VAR_3.mtime.seconds = 12346789;
 VAR_3.mode = 0100644;
 VAR_3.file_size = 0;
 FUNC_4(&VAR_3.id, &VAR_0);

 VAR_3.path = "a/b/c";
 FUNC_1(FUNC_2(VAR_1, &VAR_3));


 FUNC_1(FUNC_3(&VAR_5, VAR_1));
 FUNC_1(FUNC_8(&VAR_6, VAR_2, &VAR_5));
 FUNC_1(FUNC_5(&VAR_4, VAR_6, "a/b/c"));
 FUNC_6(VAR_4);
 FUNC_7(VAR_6);


 VAR_3.path = "a/b";
 FUNC_1(FUNC_2(VAR_1, &VAR_3));


 FUNC_1(FUNC_3(&VAR_5, VAR_1));
 FUNC_1(FUNC_8(&VAR_6, VAR_2, &VAR_5));
 FUNC_1(FUNC_5(&VAR_4, VAR_6, "a/b"));
 FUNC_0(FUNC_5(&VAR_4, VAR_6, "a/b/c"));
 FUNC_6(VAR_4);
 FUNC_7(VAR_6);
}
