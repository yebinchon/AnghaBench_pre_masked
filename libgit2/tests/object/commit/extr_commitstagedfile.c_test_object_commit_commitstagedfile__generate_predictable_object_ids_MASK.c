
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stat {scalar_t__ st_size; scalar_t__ st_uid; scalar_t__ st_gid; } ;
typedef int git_tree ;
typedef int git_signature ;
typedef int git_oid ;
struct TYPE_7__ {scalar_t__ file_size; scalar_t__ uid; scalar_t__ gid; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,char*,int *,int *,int *,int ,int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_2__*,char*,int ,char) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int **,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,char*,char*,int,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int ,int *) ;
 int FUNC_18 (TYPE_2__*,int ,int) ;
 int FUNC_19 (char*,struct stat*) ;
 int VAR_0 ;

void FUNC_20(void)
{
 git_index *VAR_1;
 const git_index_entry *VAR_2;
 git_oid VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 git_signature *VAR_8;
 git_tree *VAR_9;
 git_buf VAR_10;
 FUNC_2(FUNC_12(&VAR_7, "1fe3126578fc4eca68c193e4a3a0a14a0704624d"));
 FUNC_2(FUNC_12(&VAR_5, "2b297e643c551e76cfa1f93810c50811382f9117"));
 FUNC_2(FUNC_12(&VAR_3, "9daeafb9864cf43055ae93beb0afd6c7d144bfa4"));




 FUNC_1("treebuilder/test.txt", "test\n");
 FUNC_2(FUNC_13(&VAR_1, VAR_0));
 FUNC_2(FUNC_6(VAR_1, "test.txt"));

 VAR_2 = FUNC_8(VAR_1, 0);

 FUNC_0(FUNC_11(&VAR_3, &VAR_2->id) == 0);




 {
  struct stat VAR_11;
  FUNC_3(FUNC_19("treebuilder/test.txt", &VAR_11));
  FUNC_0(VAR_2->file_size == VAR_11.st_size);







  FUNC_0(VAR_2->uid == VAR_11.st_uid);
  FUNC_0(VAR_2->gid == VAR_11.st_gid);

 }




 FUNC_2(FUNC_9(&VAR_4, VAR_1));

 FUNC_0(FUNC_11(&VAR_5, &VAR_4) == 0);




 FUNC_2(FUNC_15(&VAR_8, "nulltoken", "emeric.fermas@gmail.com", 1323847743, 60));
 FUNC_2(FUNC_17(&VAR_9, VAR_0, &VAR_4));

 FUNC_18(&VAR_10, 0, sizeof(git_buf));
 FUNC_2(FUNC_10(&VAR_10, "Initial commit", 0, '#'));

 FUNC_2(FUNC_5(
  &VAR_6,
  VAR_0,
  "HEAD",
  VAR_8,
  VAR_8,
  ((void*)0),
  VAR_10.ptr,
  VAR_9,
  0));

 FUNC_0(FUNC_11(&VAR_7, &VAR_6) == 0);

 FUNC_4(&VAR_10);
 FUNC_14(VAR_8);
 FUNC_16(VAR_9);
 FUNC_7(VAR_1);
}
