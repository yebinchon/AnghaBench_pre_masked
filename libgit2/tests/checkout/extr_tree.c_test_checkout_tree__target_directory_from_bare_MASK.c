
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
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
 int VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (char*,int *,int ) ;
 int FUNC_8 (int *,int ,int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int FUNC_13 () ;

void FUNC_14(void)
{
 git_checkout_options VAR_9 = VAR_1;
 git_oid VAR_10;
 checkout_counts VAR_11;
 FUNC_12(&VAR_11, 0, sizeof(VAR_11));

 FUNC_13();

 VAR_8 = FUNC_5("testrepo.git");
 FUNC_1(FUNC_11(VAR_8));

 VAR_9.checkout_strategy = VAR_3 |
  VAR_2;

 VAR_9.notify_flags = VAR_0;
 VAR_9.notify_cb = VAR_6;
 VAR_9.notify_payload = &VAR_11;

 FUNC_4(FUNC_10(&VAR_10, VAR_8, "HEAD"));
 FUNC_4(FUNC_8(&VAR_7, VAR_8, &VAR_10, VAR_4));

 FUNC_3(FUNC_6(VAR_8, VAR_7, &VAR_9));

 VAR_9.target_directory = "alternative";
 FUNC_1(!FUNC_9("alternative"));

 FUNC_4(FUNC_6(VAR_8, VAR_7, &VAR_9));

 FUNC_2(0, VAR_11.n_untracked);
 FUNC_2(0, VAR_11.n_ignored);
 FUNC_2(3, VAR_11.n_updates);

 FUNC_0("./alternative/README", "hey there\n");
 FUNC_0("./alternative/branch_file.txt", "hi\nbye!\n");
 FUNC_0("./alternative/new.txt", "my new file\n");

 FUNC_4(FUNC_7(
  "alternative", ((void*)0), VAR_5));
}
