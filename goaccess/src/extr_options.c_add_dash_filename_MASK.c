
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filenames_idx; char** filenames; int read_stdin; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void
FUNC_0 (void)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1.filenames_idx; ++VAR_2) {
    if (VAR_1.filenames[VAR_2][0] == '-' && VAR_1.filenames[VAR_2][1] == '\0')
      return;
  }

  if (VAR_1.filenames_idx < VAR_0 && !VAR_1.read_stdin) {
    VAR_1.read_stdin = 1;
    VAR_1.filenames[VAR_1.filenames_idx++] = "-";
  }
}
