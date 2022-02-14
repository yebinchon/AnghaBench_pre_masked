
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_config ;
typedef int git_commit ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (int ,struct merge_index_entry*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_14(void)
{
 git_buf VAR_4 = VAR_0;
 git_config *VAR_5;
 git_oid VAR_6, VAR_7;
 git_commit *VAR_8, *VAR_9;

 struct merge_index_entry VAR_10[] = {
  { 0100644, "a8c86221b400b836010567cc3593db6e96c1a83a", 1, "file.txt" },
  { 0100644, "46ff0854663aeb2182b9838c8da68e33ac23bc1e", 2, "file.txt" },
  { 0100644, "21a96a98ed84d45866e1de6e266fd3a61a4ae9dc", 3, "file.txt" },
 };

 FUNC_2(FUNC_10(&VAR_5, VAR_2));
 FUNC_2(FUNC_7(VAR_5, "core.autocrlf", 0));

 FUNC_2(FUNC_9(&VAR_6, "75ec9929465623f17ff3ad68c0438ea56faba815"));
 FUNC_2(FUNC_5(&VAR_8, VAR_2, &VAR_6));
 FUNC_2(FUNC_11(VAR_2, (git_object *)VAR_8, VAR_1, ((void*)0)));

 FUNC_2(FUNC_9(&VAR_7, "97e52d5e81f541080cd6b92829fb85bc4d81d90b"));
 FUNC_2(FUNC_5(&VAR_9, VAR_2, &VAR_7));

 FUNC_2(FUNC_12(VAR_2, VAR_9, ((void*)0)));

 FUNC_0(FUNC_13(VAR_3, VAR_10, 3));

 FUNC_2(FUNC_8(&VAR_4, "revert/file.txt"));
 FUNC_1(
   "a\n" "<<<<<<< HEAD\n" "=======\n" "a\n" ">>>>>>> parent of 97e52d5... Revert me\n" "a\n" "a\n" "a\n" "a\n" "ab",
  VAR_4.ptr);

 FUNC_4(VAR_9);
 FUNC_4(VAR_8);
 FUNC_6(VAR_5);
 FUNC_3(&VAR_4);
}
