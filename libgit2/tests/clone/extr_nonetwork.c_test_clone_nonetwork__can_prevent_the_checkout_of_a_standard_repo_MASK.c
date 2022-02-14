
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_buf ;
struct TYPE_4__ {scalar_t__ checkout_strategy; } ;
struct TYPE_5__ {TYPE_1__ checkout_opts; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,int ,char*,TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(void)
{
 git_buf VAR_3 = VAR_0;

 VAR_1.checkout_opts.checkout_strategy = 0;
 FUNC_2(FUNC_6(&VAR_2, FUNC_1("testrepo.git"), "./foo", &VAR_1));

 FUNC_2(FUNC_5(&VAR_3, FUNC_8(VAR_2), "master.txt"));
 FUNC_0(0, FUNC_7(FUNC_3(&VAR_3)));

 FUNC_4(&VAR_3);
}
