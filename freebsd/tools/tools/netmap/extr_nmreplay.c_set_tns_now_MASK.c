
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;

__attribute__((used)) static inline void
FUNC_1(uint64_t *VAR_2, uint64_t VAR_3)
{
    struct timespec VAR_4;

    FUNC_0(VAR_0, &VAR_4);
    *VAR_2 = (uint64_t)(VAR_4.tv_nsec + VAR_1 * VAR_4.tv_sec);
    *VAR_2 -= VAR_3;
}
