
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct notify_data {char* file; char* sha; } ;
struct TYPE_4__ {int checkout_strategy; struct notify_data* notify_payload; int notify_cb; int notify_flags; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int VAR_6 ;

void FUNC_3(void)
{
 git_checkout_options VAR_7 = VAR_2;
 struct notify_data VAR_8;

 FUNC_0("./testrepo/new.txt", "This isn't what's stored!");







 VAR_8.file = "new.txt";
 VAR_8.sha = "a71586c1dfe8a71c6cbf6c129f404c5642ff31bd";

 VAR_7.checkout_strategy = VAR_4 |
  VAR_3 |
  VAR_0;
 VAR_7.notify_flags = VAR_1;
 VAR_7.notify_cb = VAR_6;
 VAR_7.notify_payload = &VAR_8;

 FUNC_1(FUNC_2(VAR_5, ((void*)0), &VAR_7));
}
