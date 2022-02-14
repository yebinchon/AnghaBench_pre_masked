
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seen_paths {int when; int who; int how; int what; int member_0; } ;
struct TYPE_5__ {struct seen_paths* notify_payload; int notify_flags; int notify_cb; } ;
struct TYPE_6__ {TYPE_1__ checkout_options; } ;
typedef TYPE_2__ git_stash_apply_options ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_6(void)
{
 git_stash_apply_options VAR_9 = VAR_1;
 struct seen_paths VAR_10 = {0};

 VAR_9.checkout_options.notify_cb = VAR_6;
 VAR_9.checkout_options.notify_flags = VAR_0;
 VAR_9.checkout_options.notify_payload = &VAR_10;

 FUNC_3(FUNC_5(VAR_7, 0, &VAR_9));

 FUNC_2(FUNC_4(VAR_8), 0);
 FUNC_0(VAR_7, "what", VAR_4);
 FUNC_0(VAR_7, "how", VAR_2);
 FUNC_0(VAR_7, "who", VAR_4);
 FUNC_0(VAR_7, "when", VAR_5);
 FUNC_0(VAR_7, "why", VAR_3);
 FUNC_0(VAR_7, "where", VAR_3);

 FUNC_1(1, VAR_10.what);
 FUNC_1(0, VAR_10.how);
 FUNC_1(1, VAR_10.who);
 FUNC_1(1, VAR_10.when);
}
