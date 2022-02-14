
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*,TYPE_3__*) ;

void FUNC_4(void)
{
 FUNC_1(VAR_0);
 FUNC_1(VAR_1);

 VAR_0 = FUNC_2("https://github.com/libgit2/non-existent");
 VAR_1 = FUNC_2("libgit2test");

 VAR_3.fetch_opts.callbacks.credentials = VAR_2;

 FUNC_0(-172, FUNC_3(&VAR_4, VAR_0, "./foo", &VAR_3));
}
