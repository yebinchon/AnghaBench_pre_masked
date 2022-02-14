
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* payload; int update_tips; } ;
struct TYPE_6__ {TYPE_1__ callbacks; } ;
struct TYPE_7__ {TYPE_2__ fetch_opts; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,char*,TYPE_3__*) ;
 int VAR_3 ;

void FUNC_3(void)
{
 int VAR_4 = 0;

 VAR_1.fetch_opts.callbacks.update_tips = VAR_3;
 VAR_1.fetch_opts.callbacks.payload = &VAR_4;

 FUNC_1(FUNC_2(&VAR_2, VAR_0, "./foo", &VAR_1));
 FUNC_0(VAR_4 > 0);
}
