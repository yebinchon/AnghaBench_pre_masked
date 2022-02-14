
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct timespec {int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timespec*,int ,int) ;

void
FUNC_2(struct timeval *VAR_1)
{
 struct timespec VAR_2;
 FUNC_1(&VAR_2, 0, sizeof(struct timespec));
 FUNC_0(VAR_0, &VAR_2);

 VAR_1->tv_sec = VAR_2.tv_sec;
 VAR_1->tv_usec = 0;
}
