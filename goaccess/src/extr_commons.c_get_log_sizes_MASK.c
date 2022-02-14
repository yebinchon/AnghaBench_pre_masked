
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int off_t ;
typedef int intmax_t ;
struct TYPE_2__ {scalar_t__ log_size; int filenames_idx; char** filenames; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;

intmax_t
FUNC_1 (void)
{
  int VAR_1;
  off_t VAR_2 = 0;


  if (VAR_0.log_size > 0)
    return (intmax_t) VAR_0.log_size;

  for (VAR_1 = 0; VAR_1 < VAR_0.filenames_idx; ++VAR_1) {
    if (VAR_0.filenames[VAR_1][0] == '-' && VAR_0.filenames[VAR_1][1] == '\0')
      VAR_2 += 0;
    else
      VAR_2 += FUNC_0 (VAR_0.filenames[VAR_1]);
  }

  return (intmax_t) VAR_2;
}
