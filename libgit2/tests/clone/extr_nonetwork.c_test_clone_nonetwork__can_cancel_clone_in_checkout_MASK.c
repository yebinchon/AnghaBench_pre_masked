
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* notify_payload; int notify_cb; int notify_flags; } ;
struct TYPE_5__ {char* checkout_branch; TYPE_1__ checkout_opts; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ,char*,TYPE_2__*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 VAR_2.checkout_branch = "test";

 VAR_2.checkout_opts.notify_flags = VAR_0;
 VAR_2.checkout_opts.notify_cb = VAR_1;
 VAR_2.checkout_opts.notify_payload = "readme.txt";

 FUNC_1(FUNC_3(
  &VAR_3, FUNC_2("testrepo.git"), "./foo", &VAR_2),
  -12345);

 FUNC_0(!VAR_3);
 FUNC_0(!FUNC_4("foo/readme.txt"));
}
