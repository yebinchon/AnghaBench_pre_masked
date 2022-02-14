
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sighand {int action; } ;


 int FUNC_0 (int ,int ,int) ;
 struct sighand* FUNC_1 () ;

struct sighand *FUNC_2(struct sighand *VAR_0) {
    struct sighand *VAR_1 = FUNC_1();
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    FUNC_0(VAR_1->action, VAR_0->action, sizeof(VAR_1->action));
    return VAR_1;
}
