
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long tv_sec; unsigned long long tv_nsec; } ;
struct TYPE_3__ {unsigned long long tv_sec; unsigned long long tv_nsec; } ;
struct itimerspec {TYPE_2__ it_interval; TYPE_1__ it_value; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct itimerspec*,int *) ;

int FUNC_1(unsigned long long VAR_3)
{
 struct itimerspec VAR_4;

 VAR_4.it_value.tv_sec = VAR_3 / VAR_0;
 VAR_4.it_value.tv_nsec = VAR_3 % VAR_0;

 VAR_4.it_interval.tv_sec = VAR_3 / VAR_0;
 VAR_4.it_interval.tv_nsec = VAR_3 % VAR_0;

 if (FUNC_0(VAR_2, 0, &VAR_4, ((void*)0)) == -1)
  return -VAR_1;

 return 0;
}
