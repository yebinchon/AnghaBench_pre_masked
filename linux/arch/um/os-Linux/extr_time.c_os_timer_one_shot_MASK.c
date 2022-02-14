
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tv_nsec; int tv_sec; } ;
struct TYPE_3__ {unsigned long long tv_sec; unsigned long long tv_nsec; } ;
struct itimerspec {TYPE_2__ it_interval; TYPE_1__ it_value; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct itimerspec*,int *) ;

int FUNC_1(unsigned long long VAR_2)
{
 struct itimerspec VAR_3 = {
  .it_value.tv_sec = VAR_2 / VAR_0,
  .it_value.tv_nsec = VAR_2 % VAR_0,

  .it_interval.tv_sec = 0,
  .it_interval.tv_nsec = 0,
 };

 FUNC_0(VAR_1, 0, &VAR_3, ((void*)0));
 return 0;
}
