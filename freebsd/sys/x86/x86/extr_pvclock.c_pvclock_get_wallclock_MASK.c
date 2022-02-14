
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct timespec {void* tv_nsec; void* tv_sec; } ;
struct pvclock_wall_clock {int dummy; } ;


 int FUNC_0 (struct pvclock_wall_clock*,void**,void**) ;

void
FUNC_1(struct pvclock_wall_clock *VAR_0, struct timespec *VAR_1)
{
 uint32_t VAR_2, VAR_3;

 FUNC_0(VAR_0, &VAR_2, &VAR_3);
 VAR_1->tv_sec = VAR_2;
 VAR_1->tv_nsec = VAR_3;
}
