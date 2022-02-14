
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int certificate_check; } ;
struct TYPE_7__ {TYPE_1__ callbacks; } ;
struct TYPE_8__ {TYPE_2__ fetch_opts; } ;
typedef TYPE_3__ git_clone_options ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,char*,TYPE_3__*) ;

void FUNC_3(void)
{
 git_clone_options VAR_5 = VAR_0;
 VAR_5.fetch_opts.callbacks.certificate_check = VAR_2;

 if (!VAR_3)
  FUNC_1();

 FUNC_0(VAR_1,
    FUNC_2(&VAR_4, "https://self-signed.badssl.com/fake.git", "./fake", ((void*)0)));
 FUNC_0(VAR_1,
    FUNC_2(&VAR_4, "https://self-signed.badssl.com/fake.git", "./fake", &VAR_5));
}
