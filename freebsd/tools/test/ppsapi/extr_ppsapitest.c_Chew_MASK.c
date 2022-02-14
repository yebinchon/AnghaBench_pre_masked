
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int intmax_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct timespec *VAR_2, struct timespec *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
 FUNC_1("%jd .%09ld %u", (intmax_t)VAR_2->tv_sec, VAR_2->tv_nsec, VAR_4);
 FUNC_1(" %jd .%09ld %u\n", (intmax_t)VAR_3->tv_sec, VAR_3->tv_nsec, VAR_5);
 if (VAR_1)
  FUNC_0(VAR_0);
}
