
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_status_list ;
typedef int git_reference ;
struct TYPE_10__ {int inmemory; } ;
typedef TYPE_2__ git_rebase_options ;
struct TYPE_11__ {int id; int type; } ;
typedef TYPE_3__ git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
struct TYPE_9__ {int member_0; } ;
struct TYPE_12__ {char* path; int id; int mode; TYPE_1__ member_0; } ;
typedef TYPE_4__ git_index_entry ;
typedef int git_index ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,int *,int *,int *,TYPE_2__*) ;
 int FUNC_15 (int **,int *) ;
 int FUNC_16 (TYPE_3__**,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **,int ,char*) ;
 int FUNC_19 (int **,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int **,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_23(void)
{
 git_rebase *VAR_6;
 git_reference *VAR_7, *VAR_8;
 git_annotated_commit *VAR_9, *VAR_10;
 git_rebase_operation *VAR_11;
 git_status_list *VAR_12;
 git_oid VAR_13, VAR_14, VAR_15;
 git_index *VAR_16, *VAR_17;
 git_index_entry VAR_18 = {0};
 git_rebase_options VAR_19 = VAR_3;

 VAR_19.inmemory = 1;

 FUNC_4(FUNC_18(&VAR_7, VAR_4, "refs/heads/asparagus"));
 FUNC_4(FUNC_18(&VAR_8, VAR_4, "refs/heads/master"));

 FUNC_4(FUNC_6(&VAR_9, VAR_4, VAR_7));
 FUNC_4(FUNC_6(&VAR_10, VAR_4, VAR_8));

 FUNC_4(FUNC_14(&VAR_6, VAR_4, VAR_9, VAR_10, ((void*)0), &VAR_19));

 FUNC_4(FUNC_16(&VAR_11, VAR_6));

 FUNC_11(&VAR_13, "33f915f9e4dbd9f4b24430e48731a59b45b15500");

 FUNC_1(VAR_2, VAR_11->type);
 FUNC_2(&VAR_13, &VAR_11->id);


 FUNC_4(FUNC_19(&VAR_17, VAR_4));
 FUNC_0(!FUNC_10(VAR_17));

 FUNC_4(FUNC_22(&VAR_12, VAR_4, ((void*)0)));
 FUNC_1(0, FUNC_20(VAR_12));


 FUNC_4(FUNC_15(&VAR_16, VAR_6));
 FUNC_0(FUNC_10(VAR_16));

 FUNC_3(VAR_0, FUNC_12(&VAR_14, VAR_6, ((void*)0), VAR_5, ((void*)0), ((void*)0)));


 VAR_18.path = "asparagus.txt";
 VAR_18.mode = VAR_1;
 FUNC_11(&VAR_18.id, "414dfc71ead79c07acd4ea47fecf91f289afc4b9");
 FUNC_4(FUNC_8(VAR_16, "asparagus.txt"));
 FUNC_4(FUNC_7(VAR_16, &VAR_18));


 FUNC_4(FUNC_12(&VAR_14, VAR_6, ((void*)0), VAR_5, ((void*)0), ((void*)0)));

 FUNC_4(FUNC_11(&VAR_15, "db7af47222181e548810da2ab5fec0e9357c5637"));
 FUNC_2(&VAR_14, &VAR_15);

 FUNC_21(VAR_12);
 FUNC_5(VAR_9);
 FUNC_5(VAR_10);
 FUNC_17(VAR_7);
 FUNC_17(VAR_8);
 FUNC_9(VAR_17);
 FUNC_9(VAR_16);
 FUNC_13(VAR_6);
}
