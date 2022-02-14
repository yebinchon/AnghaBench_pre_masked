
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_socketpool_target_vector_t ;
typedef int h2o_balancer_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int) ;
 size_t FUNC_5 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    h2o_socketpool_target_vector_t VAR_0 = FUNC_2(10);
    char VAR_1[10] = {0};
    size_t VAR_2;
    size_t VAR_3;
    h2o_balancer_t *VAR_4;

    VAR_4 = FUNC_3();

    for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
        VAR_3 = FUNC_5(VAR_4, &VAR_0, VAR_1);
        FUNC_4(VAR_3 >= 0 && VAR_3 < 10);
        FUNC_4(!VAR_1[VAR_3]);
        VAR_1[VAR_3] = 1;
    }

    FUNC_0(VAR_4);

    FUNC_1(&VAR_0);
}
