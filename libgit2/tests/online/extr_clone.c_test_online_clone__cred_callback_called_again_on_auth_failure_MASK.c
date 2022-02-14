
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t* payload; int credentials; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
struct TYPE_7__ {TYPE_2__ fetch_opts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,size_t) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,char*,TYPE_3__*) ;

void FUNC_5(void)
{
 size_t VAR_6 = 0;

 FUNC_2(VAR_1);
 FUNC_2(VAR_2);

 VAR_1 = FUNC_3("https://gitlab.com/libgit2/non-existent");
 VAR_2 = FUNC_3("libgit2test");

 VAR_4.fetch_opts.callbacks.credentials = VAR_3;
 VAR_4.fetch_opts.callbacks.payload = &VAR_6;

 FUNC_1(VAR_0, FUNC_4(&VAR_5, VAR_1, "./foo", &VAR_4));
 FUNC_0(3, VAR_6);
}
