
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_treebuilder ;
typedef int git_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* VAR_2 ;
 int FUNC_1 (int ) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,char*,int *,int ) ;
 int FUNC_5 (int **,int ,int *) ;

__attribute__((used)) static void FUNC_6(bool VAR_5)
{
 git_treebuilder *VAR_6;
 git_oid VAR_7, VAR_8, VAR_9, VAR_10;
 FUNC_1(FUNC_2(&VAR_7, VAR_2));
 FUNC_1(FUNC_2(&VAR_8,
  "1234567890123456789012345678901234567890"));
 FUNC_1(FUNC_2(&VAR_9, VAR_3));
 FUNC_1(FUNC_2(&VAR_10,
  "0000000000111111111122222222223333333333"));

 FUNC_1(FUNC_5(&VAR_6, VAR_4, ((void*)0)));


 FUNC_1(FUNC_4(((void*)0), VAR_6, "file.txt", &VAR_7, VAR_0));
 FUNC_1(FUNC_4(((void*)0), VAR_6, "folder", &VAR_9, VAR_1));


 FUNC_0(!((FUNC_4(((void*)0), VAR_6, "file.txt", &VAR_8, VAR_0)) == VAR_5), "/home/carl/AnghaBench/libgit2/tests/object/tree/extr_write.c_test_invalid_objects.c", 55, (VAR_5 ? "Expected function call to succeed: " "git_treebuilder_insert(NULL, builder, \"file.txt\", &invalid_blob_id, GIT_FILEMODE_BLOB)" : "Expected function call to fail: " "git_treebuilder_insert(NULL, builder, \"file.txt\", &invalid_blob_id, GIT_FILEMODE_BLOB)"), ((void*)0), 1);
 FUNC_0(!((FUNC_4(((void*)0), VAR_6, "folder", &VAR_8, VAR_0)) == VAR_5), "/home/carl/AnghaBench/libgit2/tests/object/tree/extr_write.c_test_invalid_objects.c", 56, (VAR_5 ? "Expected function call to succeed: " "git_treebuilder_insert(NULL, builder, \"folder\", &invalid_blob_id, GIT_FILEMODE_BLOB)" : "Expected function call to fail: " "git_treebuilder_insert(NULL, builder, \"folder\", &invalid_blob_id, GIT_FILEMODE_BLOB)"), ((void*)0), 1);


 FUNC_0(!((FUNC_4(((void*)0), VAR_6, "invalid_file.txt", &VAR_8, VAR_0)) == VAR_5), "/home/carl/AnghaBench/libgit2/tests/object/tree/extr_write.c_test_invalid_objects.c", 59, (VAR_5 ? "Expected function call to succeed: " "git_treebuilder_insert(NULL, builder, \"invalid_file.txt\", &invalid_blob_id, GIT_FILEMODE_BLOB)" : "Expected function call to fail: " "git_treebuilder_insert(NULL, builder, \"invalid_file.txt\", &invalid_blob_id, GIT_FILEMODE_BLOB)"), ((void*)0), 1);
 FUNC_0(!((FUNC_4(((void*)0), VAR_6, "invalid_folder", &VAR_8, VAR_0)) == VAR_5), "/home/carl/AnghaBench/libgit2/tests/object/tree/extr_write.c_test_invalid_objects.c", 60, (VAR_5 ? "Expected function call to succeed: " "git_treebuilder_insert(NULL, builder, \"invalid_folder\", &invalid_blob_id, GIT_FILEMODE_BLOB)" : "Expected function call to fail: " "git_treebuilder_insert(NULL, builder, \"invalid_folder\", &invalid_blob_id, GIT_FILEMODE_BLOB)"), ((void*)0), 1);


 FUNC_0(!((FUNC_4(((void*)0), VAR_6, "file_as_folder", &VAR_7, VAR_1)) == VAR_5), "/home/carl/AnghaBench/libgit2/tests/object/tree/extr_write.c_test_invalid_objects.c", 63, (VAR_5 ? "Expected function call to succeed: " "git_treebuilder_insert(NULL, builder, \"file_as_folder\", &valid_blob_id, GIT_FILEMODE_TREE)" : "Expected function call to fail: " "git_treebuilder_insert(NULL, builder, \"file_as_folder\", &valid_blob_id, GIT_FILEMODE_TREE)"), ((void*)0), 1);
 FUNC_0(!((FUNC_4(((void*)0), VAR_6, "folder_as_file.txt", &VAR_9, VAR_0)) == VAR_5), "/home/carl/AnghaBench/libgit2/tests/object/tree/extr_write.c_test_invalid_objects.c", 64, (VAR_5 ? "Expected function call to succeed: " "git_treebuilder_insert(NULL, builder, \"folder_as_file.txt\", &valid_tree_id, GIT_FILEMODE_BLOB)" : "Expected function call to fail: " "git_treebuilder_insert(NULL, builder, \"folder_as_file.txt\", &valid_tree_id, GIT_FILEMODE_BLOB)"), ((void*)0), 1);



 FUNC_3(VAR_6);
}
