
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int klass; } ;
typedef TYPE_1__ git_error ;
struct TYPE_7__ {int version; } ;
typedef TYPE_2__ git_checkout_options ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,TYPE_2__*) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;

void FUNC_5(void)
{
 git_checkout_options VAR_3 = VAR_0;
 const git_error *VAR_4;

 VAR_3.version = 1024;
 FUNC_1(FUNC_2(VAR_2, ((void*)0), &VAR_3));

 VAR_4 = FUNC_4();
 FUNC_0(VAR_4->klass, VAR_1);

 VAR_3.version = 0;
 FUNC_3();
 FUNC_1(FUNC_2(VAR_2, ((void*)0), &VAR_3));

 VAR_4 = FUNC_4();
 FUNC_0(VAR_4->klass, VAR_1);
}
