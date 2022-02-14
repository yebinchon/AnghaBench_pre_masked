
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sighand {int refcount; int lock; } ;


 int FUNC_0 (int *) ;
 struct sighand* FUNC_1 (int) ;
 int FUNC_2 (struct sighand*,int ,int) ;

struct sighand *FUNC_3() {
    struct sighand *VAR_0 = FUNC_1(sizeof(struct sighand));
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    FUNC_2(VAR_0, 0, sizeof(struct sighand));
    VAR_0->refcount = 1;
    FUNC_0(&VAR_0->lock);
    return VAR_0;
}
