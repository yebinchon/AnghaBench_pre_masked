
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct Startup_Sequence {scalar_t__ delete_at; } ;


 struct Startup_Sequence* FUNC_0 (int *) ;
 struct Startup_Sequence* FUNC_1 (int *) ;
 struct Startup_Sequence* FUNC_2 (struct Startup_Sequence*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct Startup_Sequence*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(void) {
    time_t VAR_2 = FUNC_4(((void*)0));
    int VAR_3 = 0;



    struct Startup_Sequence *VAR_4, *VAR_5;
    for (VAR_5 = FUNC_1(&VAR_1);
         VAR_5 != FUNC_0(&VAR_1);) {
        VAR_4 = VAR_5;
        VAR_5 = FUNC_2(VAR_5, VAR_0);

        if (VAR_4->delete_at == 0) {
            VAR_3++;
            continue;
        }

        if (VAR_2 <= VAR_4->delete_at)
            continue;

        FUNC_3(VAR_4);
    }

    return VAR_3;
}
