
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sighand {scalar_t__ refcount; } ;


 int FUNC_0 (struct sighand*) ;

void FUNC_1(struct sighand *VAR_0) {
    if (--VAR_0->refcount == 0) {
        FUNC_0(VAR_0);
    }
}
