
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_object ;
struct TYPE_4__ {size_t* notify_payload; int checkout_strategy; int notify_cb; int notify_flags; } ;
typedef TYPE_1__ git_checkout_options ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int,size_t) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int ,int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int *,int ) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (char*) ;

void FUNC_13(void)
{
 git_checkout_options VAR_8 = VAR_2;
 git_reference *VAR_9;
 git_object *VAR_10;
 size_t VAR_11 = 0;

 FUNC_0(VAR_7, "master");

 FUNC_4(FUNC_10(&VAR_9, VAR_7));
 FUNC_4(FUNC_9(&VAR_10, VAR_9, VAR_4));

 FUNC_4(FUNC_11(VAR_7, VAR_10, VAR_5, ((void*)0)));

 FUNC_5(FUNC_12("testrepo/.git/index"));




 VAR_8.checkout_strategy &= ~VAR_0;
 VAR_8.notify_flags = VAR_1;
 VAR_8.notify_cb = VAR_6;
 VAR_8.notify_payload = &VAR_11;

 FUNC_3(VAR_3, FUNC_6(VAR_7, VAR_10, &VAR_8));
 FUNC_2(4, VAR_11);


 VAR_8.checkout_strategy |= VAR_0;
 FUNC_4(FUNC_6(VAR_7, VAR_10, &VAR_8));

 FUNC_1(VAR_7, 0);

 FUNC_7(VAR_10);
 FUNC_8(VAR_9);
}
