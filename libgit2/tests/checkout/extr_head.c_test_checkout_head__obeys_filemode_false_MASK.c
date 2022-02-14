
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int **,int ,char*) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(void)
{
 git_checkout_options VAR_5 = VAR_1;
 git_object *VAR_6, *VAR_7;

 VAR_5.checkout_strategy = VAR_0;


 FUNC_0(FUNC_6(&VAR_6, VAR_4, "f9ed4af42472941da45a3c"));
 FUNC_0(FUNC_5(VAR_4, VAR_6, VAR_3, ((void*)0)));

 FUNC_2(VAR_4, "core.filemode", 0);
 FUNC_1(FUNC_7("testrepo/README", 0644));





 FUNC_0(FUNC_6(&VAR_7, VAR_4, "099fabac3a9ea935598528c27f866e34089c2eff"));

 VAR_5.checkout_strategy &= ~VAR_0;
 VAR_5.checkout_strategy |= VAR_2;
 FUNC_0(FUNC_3(VAR_4, VAR_7, ((void*)0)));

 FUNC_4(VAR_7);
 FUNC_4(VAR_6);
}
