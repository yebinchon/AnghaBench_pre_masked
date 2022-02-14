
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct mrb_time {double sec; long usec; int timezone; } ;
typedef int mrb_state ;
typedef int mrb_float ;
typedef enum mrb_timezone { ____Placeholder_mrb_timezone } mrb_timezone ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (long,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,double) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 int FUNC_6 (int *,struct mrb_time*) ;

__attribute__((used)) static struct mrb_time*
FUNC_7(mrb_state *VAR_7, double VAR_8, double VAR_9, enum mrb_timezone VAR_10)
{
  struct mrb_time *VAR_11;
  time_t VAR_12 = 0;

  FUNC_2(VAR_7, (mrb_float)VAR_8);
  FUNC_2(VAR_7, (mrb_float)VAR_9);

  if (sizeof(time_t) == 4 && (VAR_8 > (double)VAR_1 || (double)VAR_2 > VAR_8)) {
    goto out_of_range;
  }
  if (sizeof(time_t) == 8 && (VAR_8 > (double)VAR_3 || (double)VAR_4 > VAR_8)) {
    goto out_of_range;
  }
  VAR_12 = (time_t)VAR_8;
  if ((VAR_8 > 0 && VAR_12 < 0) || (VAR_8 < 0 && (double)VAR_12 > VAR_8)) {
  out_of_range:
    FUNC_5(VAR_7, VAR_0, "%S out of Time range", FUNC_3(VAR_7, VAR_8));
  }
  VAR_11 = (struct mrb_time *)FUNC_4(VAR_7, sizeof(struct mrb_time));
  VAR_11->sec = VAR_12;
  VAR_11->usec = (time_t)FUNC_1((VAR_8 - VAR_11->sec) * 1.0e6 + VAR_9);
  if (VAR_11->usec < 0) {
    long VAR_13 = (long)FUNC_0(VAR_11->usec,1000000);
    VAR_11->usec -= VAR_13 * 1000000;
    VAR_11->sec += VAR_13;
  }
  else if (VAR_11->usec >= 1000000) {
    long VAR_14 = (long)(VAR_11->usec / 1000000);
    VAR_11->usec -= VAR_14 * 1000000;
    VAR_11->sec += VAR_14;
  }
  VAR_11->timezone = VAR_10;
  FUNC_6(VAR_7, VAR_11);

  return VAR_11;
}
