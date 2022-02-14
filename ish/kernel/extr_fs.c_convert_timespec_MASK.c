
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec_ {int nsec; int sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;



__attribute__((used)) static struct timespec FUNC_0(struct timespec_ VAR_0) {
    struct timespec VAR_1;
    VAR_1.tv_sec = VAR_0.sec;
    VAR_1.tv_nsec = VAR_0.nsec;
    return VAR_1;
}
