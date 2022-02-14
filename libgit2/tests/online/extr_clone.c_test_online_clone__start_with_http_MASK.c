
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int certificate_check; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
struct TYPE_7__ {TYPE_2__ fetch_opts; } ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char*,TYPE_3__*) ;
 int VAR_2 ;

void FUNC_2(void)
{
 VAR_0.fetch_opts.callbacks.certificate_check = VAR_2;

 FUNC_0(FUNC_1(&VAR_1, "http://github.com/libgit2/TestGitRepository", "./foo", &VAR_0));
}
