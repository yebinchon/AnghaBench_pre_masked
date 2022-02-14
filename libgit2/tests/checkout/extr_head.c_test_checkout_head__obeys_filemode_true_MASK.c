
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_object ;
struct TYPE_3__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int **,int ,char*) ;
 int FUNC_8 (char*,int) ;

void FUNC_9(void)
{
 git_checkout_options VAR_6 = VAR_1;
 git_object *VAR_7, *VAR_8;

 VAR_6.checkout_strategy = VAR_0;


 FUNC_1(FUNC_7(&VAR_7, VAR_5, "f9ed4af42472941da45a3c"));
 FUNC_1(FUNC_6(VAR_5, VAR_7, VAR_4, ((void*)0)));

 FUNC_3(VAR_5, "core.filemode", 1);
 FUNC_2(FUNC_8("testrepo/README", 0644));





 FUNC_1(FUNC_7(&VAR_8, VAR_5, "099fabac3a9ea935598528c27f866e34089c2eff"));

 VAR_6.checkout_strategy &= ~VAR_0;
 VAR_6.checkout_strategy |= VAR_2;
 FUNC_0(VAR_3, FUNC_4(VAR_5, VAR_8, ((void*)0)));

 FUNC_5(VAR_8);
 FUNC_5(VAR_7);
}
