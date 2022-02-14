
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filenames_idx; char** filenames; } ;


 int FUNC_0 (char**,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;

char *
FUNC_3 (int VAR_1)
{
  char *VAR_2 = FUNC_2 ("");
  int VAR_3, VAR_4 = 0;

  for (VAR_3 = 0; VAR_3 < VAR_0.filenames_idx; ++VAR_3) {
    if (VAR_0.filenames[VAR_3][0] == '-' && VAR_0.filenames[VAR_3][1] == '\0')
      FUNC_0 (&VAR_2, "STDIN");
    else
      FUNC_0 (&VAR_2, VAR_0.filenames[VAR_3]);
    if (VAR_3 != VAR_0.filenames_idx - 1)
      FUNC_0 (&VAR_2, "; ");
  }

  VAR_4 = FUNC_1 (VAR_2);
  if (VAR_1 > 0 && VAR_4 > 0 && VAR_4 > VAR_1) {
    VAR_2[VAR_1 - 3] = 0;
    FUNC_0 (&VAR_2, "...");
  }

  return VAR_2;
}
