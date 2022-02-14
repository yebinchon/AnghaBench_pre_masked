
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
struct TYPE_8__ {int flags; int id_abbrev; } ;
typedef TYPE_1__ git_diff_options ;
typedef int git_diff ;
typedef int git_commit ;
struct TYPE_9__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_9 (int **,int ,int *,int *,TYPE_1__*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;

void FUNC_12(void)
{
 git_diff_options VAR_8 = VAR_3;
 git_oid VAR_9;
 git_commit *VAR_10;
 git_tree *VAR_11;
 git_diff *VAR_12;
 git_buf VAR_13 = VAR_0;

 VAR_8.flags = VAR_4 | VAR_1;
 VAR_8.id_abbrev = VAR_5;

 VAR_7 = FUNC_2("renames");

 FUNC_1(FUNC_10(&VAR_9, "19dd32dfb1520a64e5bbaae8dce6ef423dfa2f13"));
 FUNC_1(FUNC_5(&VAR_10, VAR_7, &VAR_9));
 FUNC_1(FUNC_6(&VAR_11, VAR_10));

 FUNC_1(FUNC_9(&VAR_12, VAR_7, VAR_11, VAR_11, &VAR_8));
 FUNC_1(FUNC_8(VAR_12, VAR_2, VAR_6, &VAR_13));

 FUNC_0("", VAR_13.ptr);

 FUNC_3(&VAR_13);
 FUNC_7(VAR_12);
 FUNC_4(VAR_10);
 FUNC_11(VAR_11);
}
