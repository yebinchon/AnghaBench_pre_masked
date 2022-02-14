
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rp_generator_t {int sending; int * last_content_before_send; } ;


 int FUNC_0 (struct rp_generator_t*) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct rp_generator_t *VAR_1 = VAR_0;
    FUNC_0(VAR_1);

    if (VAR_1->last_content_before_send != ((void*)0)) {
        FUNC_1(&VAR_1->last_content_before_send);
    }
    FUNC_2(&VAR_1->sending);
}
