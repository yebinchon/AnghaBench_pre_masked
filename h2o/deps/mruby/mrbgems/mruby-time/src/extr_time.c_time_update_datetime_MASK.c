
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int dummy; } ;
struct mrb_time {scalar_t__ timezone; struct tm datetime; scalar_t__ sec; } ;
typedef int mrb_state ;
typedef int mrb_float ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tm* FUNC_0 (scalar_t__*,struct tm*) ;
 struct tm* FUNC_1 (scalar_t__*,struct tm*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,char*,int ) ;

__attribute__((used)) static struct mrb_time*
FUNC_4(mrb_state *VAR_2, struct mrb_time *VAR_3)
{
  struct tm *VAR_4;

  if (VAR_3->timezone == VAR_1) {
    VAR_4 = FUNC_0(&VAR_3->sec, &VAR_3->datetime);
  }
  else {
    VAR_4 = FUNC_1(&VAR_3->sec, &VAR_3->datetime);
  }
  if (!VAR_4) {
    FUNC_3(VAR_2, VAR_0, "%S out of Time range", FUNC_2(VAR_2, (mrb_float)VAR_3->sec));

    return ((void*)0);
  }




  return VAR_3;
}
