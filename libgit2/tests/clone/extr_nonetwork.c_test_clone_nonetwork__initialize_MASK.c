
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_fetch_options ;
typedef int git_clone_options ;
struct TYPE_5__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
struct TYPE_6__ {int fetch_opts; TYPE_1__ checkout_opts; int version; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1(void)
{
 git_checkout_options VAR_6 = VAR_0;
 git_fetch_options VAR_7 = VAR_3;

 VAR_5 = ((void*)0);

 FUNC_0(&VAR_4, 0, sizeof(git_clone_options));
 VAR_4.version = VAR_2;
 VAR_4.checkout_opts = VAR_6;
 VAR_4.checkout_opts.checkout_strategy = VAR_1;
 VAR_4.fetch_opts = VAR_7;
}
