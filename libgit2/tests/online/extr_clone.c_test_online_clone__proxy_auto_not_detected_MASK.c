
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_1__ proxy_opts; } ;
struct TYPE_7__ {TYPE_2__ fetch_opts; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char*,TYPE_3__*) ;

void FUNC_2(void)
{
 VAR_1.fetch_opts.proxy_opts.type = VAR_0;

 FUNC_0(FUNC_1(&VAR_2, "http://github.com/libgit2/TestGitRepository", "./foo", &VAR_1));
}
