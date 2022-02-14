
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_odb ;
typedef int git_object ;
struct TYPE_4__ {int member_0; } ;
struct TYPE_5__ {char* path; int mode; int id; TYPE_1__ member_0; } ;
typedef TYPE_2__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int *,int *,int *,int *,char*,int *,int ,int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,char*,int ,int ) ;
 int FUNC_11 (int **,int ) ;
 int FUNC_12 (int ,int *,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,char*,char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int **,int ,int *) ;
 int VAR_4 ;

void FUNC_17(void)
{
 git_index_entry VAR_5 = { 0 };
 git_index *VAR_6;
 git_odb *VAR_7;
 git_object *VAR_8;
 git_tree *VAR_9;
 git_signature *VAR_10;
 git_oid VAR_11, VAR_12;
 git_oid VAR_13, VAR_14;

 FUNC_0(FUNC_11(&VAR_7, VAR_4));
 FUNC_0(FUNC_10(&VAR_5.id, VAR_7, "", 0, VAR_1));
 FUNC_9(VAR_7);

 VAR_5.mode = VAR_0;
 FUNC_0(FUNC_5(&VAR_6));
 FUNC_0(FUNC_14(&VAR_10, "foo", "bar"));


 VAR_5.path = "README";
 FUNC_0(FUNC_2(VAR_6, &VAR_5));
 VAR_5.path = "dir";
 FUNC_0(FUNC_2(VAR_6, &VAR_5));

 FUNC_0(FUNC_6(&VAR_11, VAR_6, VAR_4));
 FUNC_0(FUNC_3(VAR_6));

 FUNC_0(FUNC_16(&VAR_9, VAR_4, &VAR_11));
 FUNC_0(FUNC_1(&VAR_13, VAR_4, ((void*)0), VAR_10, VAR_10, ((void*)0), "foo", VAR_9, 0, ((void*)0)));
 FUNC_15(VAR_9);


 VAR_5.path = "README";
 FUNC_0(FUNC_2(VAR_6, &VAR_5));
 VAR_5.path = "dir/FILE";
 FUNC_0(FUNC_2(VAR_6, &VAR_5));

 FUNC_0(FUNC_6(&VAR_12, VAR_6, VAR_4));
 FUNC_0(FUNC_16(&VAR_9, VAR_4, &VAR_12));
 FUNC_0(FUNC_1(&VAR_14, VAR_4, ((void*)0), VAR_10, VAR_10, ((void*)0), "foo", VAR_9, 0, ((void*)0)));
 FUNC_15(VAR_9);
 FUNC_4(VAR_6);
 FUNC_13(VAR_10);


 FUNC_0(FUNC_8(&VAR_8, VAR_4, &VAR_13, VAR_2));
 FUNC_0(FUNC_12(VAR_4, VAR_8, VAR_3, ((void*)0)));
 FUNC_7(VAR_8);


 FUNC_0(FUNC_8(&VAR_8, VAR_4, &VAR_14, VAR_2));
 FUNC_0(FUNC_12(VAR_4, VAR_8, VAR_3, ((void*)0)));
 FUNC_7(VAR_8);
}
