
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;
struct TYPE_6__ {TYPE_2__* notify_payload; int notify_cb; int notify_flags; int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int ct ;
struct TYPE_7__ {int n_updates; int n_conflicts; } ;
typedef TYPE_2__ checkout_counts ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int **,int ) ;
 int FUNC_13 (int ,int *,int ,int *) ;
 int FUNC_14 (TYPE_2__*,int ,int) ;
 int FUNC_15 (char*) ;

void FUNC_16(void)
{
 git_checkout_options VAR_6 = VAR_1;
 git_oid VAR_7, VAR_8;
 git_commit *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 git_index *VAR_11 = ((void*)0);
 checkout_counts VAR_12;

 VAR_6.checkout_strategy = VAR_2;

 FUNC_14(&VAR_12, 0, sizeof(VAR_12));
 VAR_6.notify_flags = VAR_0;
 VAR_6.notify_cb = VAR_4;
 VAR_6.notify_payload = &VAR_12;

 FUNC_3(FUNC_12(&VAR_11, VAR_5));

 FUNC_3(FUNC_10(&VAR_7, "be3563ae3f795b2b4353bcce3a527ad0a4f7f644"));
 FUNC_3(FUNC_6(&VAR_9, VAR_5, &VAR_7));
 FUNC_3(FUNC_13(VAR_5, (git_object *)VAR_9, VAR_3, ((void*)0)));

 FUNC_3(FUNC_15("testrepo/branch_file.txt"));
 FUNC_3(FUNC_8(VAR_11 ,"branch_file.txt"));
 FUNC_3(FUNC_9(VAR_11));

 FUNC_0(!FUNC_11("testrepo/branch_file.txt"));

 FUNC_3(FUNC_10(&VAR_8, "099fabac3a9ea935598528c27f866e34089c2eff"));
 FUNC_3(FUNC_6(&VAR_10, VAR_5, &VAR_8));


 FUNC_2(FUNC_4(VAR_5, (git_object *)VAR_10, &VAR_6));

 FUNC_1(1, VAR_12.n_conflicts);
 FUNC_1(1, VAR_12.n_updates);

 FUNC_5(VAR_9);
 FUNC_5(VAR_10);
 FUNC_7(VAR_11);
}
