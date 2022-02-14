
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_object ;
typedef int git_index ;
struct TYPE_6__ {int checkout_strategy; char* target_directory; TYPE_2__* notify_payload; int notify_cb; int notify_flags; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int cts ;
struct TYPE_7__ {int n_updates; int n_ignored; int n_untracked; } ;
typedef TYPE_2__ checkout_counts ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int VAR_6 ;
 int FUNC_7 (int ,int *,TYPE_1__*) ;
 int FUNC_8 (char*,int *,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int **,int ,char*) ;
 int FUNC_17 (TYPE_2__*,int ,int) ;

void FUNC_18(void)
{
 git_checkout_options VAR_7 = VAR_1;
 git_index *VAR_8;
 git_object *VAR_9 = ((void*)0);
 checkout_counts VAR_10;
 FUNC_17(&VAR_10, 0, sizeof(VAR_10));

 FUNC_5();
 VAR_6 = FUNC_6("testrepo.git");
 FUNC_1(FUNC_15(VAR_6));

 FUNC_4(FUNC_14(&VAR_8, VAR_6));
 FUNC_4(FUNC_16(&VAR_9, VAR_6, "HEAD^{tree}"));
 FUNC_4(FUNC_10(VAR_8, (const git_tree *)VAR_9));
 FUNC_4(FUNC_11(VAR_8));
 FUNC_9(VAR_8);

 VAR_7.checkout_strategy = VAR_3 |
  VAR_2;

 VAR_7.notify_flags = VAR_0;
 VAR_7.notify_cb = VAR_5;
 VAR_7.notify_payload = &VAR_10;


 FUNC_3(FUNC_7(VAR_6, ((void*)0), &VAR_7));

 VAR_7.target_directory = "alternative";
 FUNC_1(!FUNC_13("alternative"));

 FUNC_4(FUNC_7(VAR_6, ((void*)0), &VAR_7));

 FUNC_2(0, VAR_10.n_untracked);
 FUNC_2(0, VAR_10.n_ignored);
 FUNC_2(3, VAR_10.n_updates);


 FUNC_0("./alternative/README", "hey there\n");
 FUNC_0("./alternative/branch_file.txt", "hi\nbye!\n");
 FUNC_0("./alternative/new.txt", "my new file\n");

 FUNC_4(FUNC_8(
  "alternative", ((void*)0), VAR_4));

 FUNC_12(VAR_9);
}
