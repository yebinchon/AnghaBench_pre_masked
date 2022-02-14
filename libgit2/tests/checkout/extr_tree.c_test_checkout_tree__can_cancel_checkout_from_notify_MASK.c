
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct checkout_cancel_at {char* filename; int error; scalar_t__ count; } ;
typedef int git_oid ;
typedef int git_object ;
struct TYPE_4__ {int checkout_strategy; struct checkout_cancel_at* notify_payload; int notify_cb; int notify_flags; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_8 (char*) ;
 int FUNC_9 (int *,int ,char*) ;

void FUNC_10(void)
{
 struct checkout_cancel_at VAR_6;
 git_checkout_options VAR_7 = VAR_2;
 git_oid VAR_8;
 git_object *VAR_9 = ((void*)0);

 FUNC_0(VAR_5, "master");

 FUNC_4(FUNC_9(&VAR_8, VAR_5, "refs/heads/dir"));
 FUNC_4(FUNC_7(&VAR_9, VAR_5, &VAR_8, VAR_3));

 VAR_6.filename = "new.txt";
 VAR_6.error = -5555;
 VAR_6.count = 0;

 VAR_7.notify_flags = VAR_1;
 VAR_7.notify_cb = VAR_4;
 VAR_7.notify_payload = &VAR_6;
 VAR_7.checkout_strategy = VAR_0;

 FUNC_1(!FUNC_8("testrepo/new.txt"));

 FUNC_3(FUNC_5(VAR_5, VAR_9, &VAR_7), -5555);

 FUNC_1(!FUNC_8("testrepo/new.txt"));




 if (FUNC_8("testrepo/.git/CoNfIg"))
  FUNC_2(3, VAR_6.count);
 else
  FUNC_2(4, VAR_6.count);


 VAR_6.filename = "README";
 VAR_6.error = 123;
 VAR_6.count = 0;

 FUNC_3(FUNC_5(VAR_5, VAR_9, &VAR_7), 123);

 FUNC_1(!FUNC_8("testrepo/new.txt"));

 if (FUNC_8("testrepo/.git/CoNfIg"))
  FUNC_2(4, VAR_6.count);
 else
  FUNC_2(1, VAR_6.count);

 FUNC_6(VAR_9);
}
