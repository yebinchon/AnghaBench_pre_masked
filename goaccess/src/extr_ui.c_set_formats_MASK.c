
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* log_format; void* date_format; void* time_format; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 () ;
 void* FUNC_2 (char*) ;

__attribute__((used)) static const char *
FUNC_3 (char *VAR_4, char *VAR_5, char *VAR_6)
{

  if (!VAR_6 && !VAR_3.time_format)
    return VAR_2;
  if (!VAR_4 && !VAR_3.date_format)
    return VAR_0;
  if (!VAR_5 && !VAR_3.log_format)
    return VAR_1;

  if (VAR_6) {
    FUNC_0 (VAR_3.time_format);
    VAR_3.time_format = FUNC_2 (VAR_6);
  }

  if (VAR_4) {
    FUNC_0 (VAR_3.date_format);
    VAR_3.date_format = FUNC_2 (VAR_4);
  }

  if (VAR_5) {
    FUNC_0 (VAR_3.log_format);
    VAR_3.log_format = FUNC_2 (VAR_5);
  }

  FUNC_1 ();

  return ((void*)0);
}
