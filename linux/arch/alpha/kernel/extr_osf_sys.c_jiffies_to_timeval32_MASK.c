
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval32 {unsigned long tv_usec; unsigned long tv_sec; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(unsigned long VAR_1, struct timeval32 *VAR_2)
{
 VAR_2->tv_usec = (VAR_1 % VAR_0) * (1000000L / VAR_0);
 VAR_2->tv_sec = VAR_1 / VAR_0;
}
