
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,char*,TYPE_3__*) ;
 int VAR_5 ;

void FUNC_3(void)
{
 VAR_3.fetch_opts.callbacks.certificate_check = VAR_5;

 if (!VAR_1)
  FUNC_1();

 FUNC_0(VAR_0, FUNC_2(&VAR_4, VAR_2, "./foo", &VAR_3));
}
