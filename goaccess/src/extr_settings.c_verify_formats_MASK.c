
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* time_format; char* date_format; char* log_format; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 char const* VAR_2 ;
 TYPE_1__ VAR_3 ;

const char *
FUNC_0 (void)
{
  if (VAR_3.time_format == ((void*)0) || *VAR_3.time_format == '\0')
    return VAR_2;

  if (VAR_3.date_format == ((void*)0) || *VAR_3.date_format == '\0')
    return VAR_0;

  if (VAR_3.log_format == ((void*)0) || *VAR_3.log_format == '\0')
    return VAR_1;

  return ((void*)0);
}
