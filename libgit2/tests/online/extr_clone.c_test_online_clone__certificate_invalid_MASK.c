
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


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,char*,TYPE_3__*) ;

void FUNC_2(void)
{
 VAR_2.fetch_opts.callbacks.certificate_check = VAR_1;

 FUNC_0(FUNC_1(&VAR_3, "https://github.com/libgit2/TestGitRepository", "./foo", &VAR_2),
  VAR_0);





}
