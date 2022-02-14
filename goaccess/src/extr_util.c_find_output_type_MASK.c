
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_format_idx; char const** output_formats; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char) ;
 char* FUNC_2 (char const*) ;

int
FUNC_3 (char **VAR_1, const char *VAR_2, int VAR_3)
{
  int VAR_4;
  const char *VAR_5 = ((void*)0);

  for (VAR_4 = 0; VAR_4 < VAR_0.output_format_idx; ++VAR_4) {

    if (FUNC_0 (VAR_0.output_formats[VAR_4], VAR_2) == 0)
      return 0;

    if ((VAR_5 = FUNC_1 (VAR_0.output_formats[VAR_4], '.')) != ((void*)0) &&
        FUNC_0 (VAR_5 + 1, VAR_2) == 0) {
      if (VAR_3)
        *VAR_1 = FUNC_2 (VAR_0.output_formats[VAR_4]);
      return 0;
    }
  }

  return 1;
}
