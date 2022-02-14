
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {double tv_usec; double tv_sec; } ;


 int FUNC_0 (struct timeval*,int *) ;

__attribute__((used)) static double FUNC_1(void) {
    struct timeval VAR_0;
    FUNC_0(&VAR_0, ((void*)0));
    return VAR_0.tv_usec * 0.000001 + VAR_0.tv_sec;
}
