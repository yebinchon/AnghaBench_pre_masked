
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval_ {int usec; scalar_t__ sec; } ;



__attribute__((used)) static void FUNC_0(struct timeval_ *VAR_0, struct timeval_ *VAR_1) {
    VAR_0->sec += VAR_1->sec;
    VAR_0->usec += VAR_1->usec;
    if (VAR_0->usec >= 1000000) {
        VAR_0->usec -= 1000000;
        VAR_0->sec++;
    }
}
