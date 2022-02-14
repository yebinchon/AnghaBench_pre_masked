
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex {scalar_t__ refcount; int chain; int cond; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct futex*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct futex *VAR_1) {
    if (--VAR_1->refcount == 0) {
        FUNC_0(&VAR_1->cond);
        FUNC_2(&VAR_1->chain);
        FUNC_1(VAR_1);
    }
    FUNC_3(&VAR_0);
}
