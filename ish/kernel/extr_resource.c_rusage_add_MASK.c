
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rusage_ {int stime; int utime; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct rusage_ *VAR_0, struct rusage_ *VAR_1) {
    FUNC_0(&VAR_0->utime, &VAR_1->utime);
    FUNC_0(&VAR_0->stime, &VAR_1->stime);
}
