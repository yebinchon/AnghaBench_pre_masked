
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ spec_date_time_num_format; scalar_t__ spec_date_time_format; scalar_t__ date_num_format; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5 (void)
{
  if (FUNC_4 ())
    return;

  if (VAR_0.date_num_format)
    FUNC_0 (VAR_0.date_num_format);
  if (VAR_0.spec_date_time_format)
    FUNC_0 (VAR_0.spec_date_time_format);
  if (VAR_0.spec_date_time_num_format)
    FUNC_0 (VAR_0.spec_date_time_num_format);

  if (FUNC_1 () == 0) {
    FUNC_3 ();
    FUNC_2 ();
  }
}
