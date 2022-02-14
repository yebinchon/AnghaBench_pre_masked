
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int FUNC_0 (struct timespec*,int *) ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct timespec VAR_0;

 VAR_0.tv_sec = 0;
 VAR_0.tv_nsec = 50 * 1000000;

 FUNC_0(&VAR_0, ((void*)0));
}
