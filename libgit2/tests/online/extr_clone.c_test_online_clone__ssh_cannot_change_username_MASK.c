
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int credentials; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
struct TYPE_7__ {TYPE_2__ fetch_opts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*,char*,TYPE_3__*) ;

void FUNC_3(void)
{

 FUNC_1();

 VAR_1.fetch_opts.callbacks.credentials = VAR_0;

 FUNC_0(FUNC_2(&VAR_2, "ssh://git@github.com/libgit2/TestGitRepository", "./foo", &VAR_1));
}
