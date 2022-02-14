
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* payload; int * certificate_check; int credentials; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
struct TYPE_7__ {TYPE_2__ fetch_opts; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,char*,TYPE_3__*) ;

void FUNC_3(void)
{
 int VAR_5;


 FUNC_1();

 VAR_3.fetch_opts.callbacks.credentials = VAR_2;
 VAR_3.fetch_opts.callbacks.payload = &VAR_5;
 VAR_3.fetch_opts.callbacks.certificate_check = ((void*)0);

 VAR_5 = 0;
 FUNC_0(VAR_0,
  FUNC_2(&VAR_4, VAR_1, "./foo", &VAR_3));

 VAR_5 = 1;
 FUNC_0(VAR_0,
  FUNC_2(&VAR_4, "ssh://git@github.com/libgit2/TestGitRepository", "./foo", &VAR_3));
}
