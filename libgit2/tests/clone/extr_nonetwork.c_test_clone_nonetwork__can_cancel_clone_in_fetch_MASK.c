
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int transfer_progress; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
struct TYPE_7__ {char* checkout_branch; TYPE_2__ fetch_opts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,char*,TYPE_3__*) ;
 int FUNC_4 (char*) ;

void FUNC_5(void)
{
 VAR_1.checkout_branch = "test";

 VAR_1.fetch_opts.callbacks.transfer_progress =
  VAR_0;

 FUNC_1(FUNC_3(
  &VAR_2, FUNC_2("testrepo.git"), "./foo", &VAR_1),
  -54321);

 FUNC_0(!VAR_2);
 FUNC_0(!FUNC_4("foo/readme.txt"));
}
