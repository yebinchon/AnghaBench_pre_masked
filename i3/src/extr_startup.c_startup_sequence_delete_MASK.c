
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Startup_Sequence {int workspace; int id; int context; scalar_t__ delete_at; } ;


 int FUNC_0 (char*,int ,long long,long long) ;
 int FUNC_1 (struct Startup_Sequence*) ;
 int FUNC_2 (int *,struct Startup_Sequence*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int *) ;

void FUNC_7(struct Startup_Sequence *VAR_2) {
    FUNC_3(VAR_2 != ((void*)0));
    FUNC_0("Deleting startup sequence %s, delete_at = %lld, current_time = %lld\n",
         VAR_2->id, (long long)VAR_2->delete_at, (long long)FUNC_6(((void*)0)));


    FUNC_5(VAR_2->context);


    FUNC_2(&VAR_1, VAR_2, VAR_0);

    FUNC_4(VAR_2->id);
    FUNC_4(VAR_2->workspace);
    FUNC_1(VAR_2);
}
