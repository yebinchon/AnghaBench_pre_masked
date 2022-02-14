
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int workspace_auto_back_and_forth; } ;
typedef int Con ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_2 () ;

__attribute__((used)) static Con *FUNC_3(Con *VAR_2) {
    Con *VAR_3, *VAR_4;

    if (!VAR_0.workspace_auto_back_and_forth)
        return VAR_2;

    VAR_3 = FUNC_1(VAR_1);

    if (VAR_3 == VAR_2) {
        VAR_4 = FUNC_2();
        if (VAR_4 != ((void*)0)) {
            FUNC_0("Substituting workspace with back_and_forth, as it is focused.\n");
            return VAR_4;
        }
    }

    return VAR_2;
}
