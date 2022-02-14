
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {long tv_sec; int tv_nsec; } ;
struct cpu_state {int eax; int edx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;

void FUNC_1(struct cpu_state *VAR_1) {
    struct timespec VAR_2;
    FUNC_0(VAR_0, &VAR_2);
    uint64_t VAR_3 = VAR_2.tv_sec * 1000000000l + VAR_2.tv_nsec;
    VAR_1->eax = VAR_3 & 0xffffffff;
    VAR_1->edx = VAR_3 >> 32;
}
