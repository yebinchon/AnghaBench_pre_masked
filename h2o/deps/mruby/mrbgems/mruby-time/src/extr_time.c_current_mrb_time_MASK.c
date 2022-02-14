
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct mrb_time {scalar_t__ sec; int usec; int timezone; } ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int *,struct mrb_time*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,char*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mrb_time*) ;
 scalar_t__ FUNC_6 (struct timespec*,int ) ;

__attribute__((used)) static struct mrb_time*
FUNC_7(mrb_state *VAR_3)
{
  struct mrb_time *VAR_4;

  VAR_4 = (struct mrb_time *)FUNC_2(VAR_3, sizeof(*VAR_4));
  {
    struct timeval VAR_5;

    FUNC_0(&VAR_5, ((void*)0));
    VAR_4->sec = VAR_5.tv_sec;
    VAR_4->usec = VAR_5.tv_usec;
  }

  VAR_4->timezone = VAR_1;
  FUNC_5(VAR_3, VAR_4);

  return VAR_4;
}
