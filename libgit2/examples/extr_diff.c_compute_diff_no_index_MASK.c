
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct opts {int diffopts; int * treeish2; int * treeish1; } ;
typedef int git_patch ;
typedef int git_diff ;
struct TYPE_4__ {int size; int ptr; int member_0; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*,int ,int *,char*,int ,int *,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int *) ;

__attribute__((used)) static void FUNC_10(git_diff **VAR_0, struct opts *VAR_1) {
 git_patch *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 git_buf VAR_5 = {0};

 if (!VAR_1->treeish1 || !VAR_1->treeish2) {
  FUNC_9("two files should be provided as arguments", ((void*)0));
 }
 VAR_3 = FUNC_7(VAR_1->treeish1);
 if (VAR_3 == ((void*)0)) {
  FUNC_9("file cannot be read", VAR_1->treeish1);
 }
 VAR_4 = FUNC_7(VAR_1->treeish2);
 if (VAR_4 == ((void*)0)) {
  FUNC_9("file cannot be read", VAR_1->treeish2);
 }
 FUNC_0(
  FUNC_5(&VAR_2, VAR_3, FUNC_8(VAR_3), VAR_1->treeish1, VAR_4, FUNC_8(VAR_4), VAR_1->treeish2, &VAR_1->diffopts),
  "patch buffers", ((void*)0));
 FUNC_0(
  FUNC_6(&VAR_5, VAR_2),
  "patch to buf", ((void*)0));
 FUNC_0(
  FUNC_3(VAR_0, VAR_5.ptr, VAR_5.size),
  "diff from patch", ((void*)0));
 FUNC_4(VAR_2);
 FUNC_2(&VAR_5);
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
}
