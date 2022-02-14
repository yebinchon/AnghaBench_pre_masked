
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** filenames; int filenames_idx; } ;
typedef int GJSON ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_2 (GJSON * VAR_2, int VAR_3, int VAR_4)
{
  FUNC_1 (VAR_2, "%.*s\"", VAR_4, VAR_0);
  if (VAR_1.filenames[VAR_3][0] == '-' && VAR_1.filenames[VAR_3][1] == '\0')
    FUNC_1 (VAR_2, "STDIN");
  else
    FUNC_0 (VAR_2, (char *) VAR_1.filenames[VAR_3]);
  FUNC_1 (VAR_2, VAR_1.filenames_idx - 1 != VAR_3 ? "\",\n" : "\"");
}
