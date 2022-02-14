
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int static_file_max_len; int static_file_idx; char** static_files; scalar_t__ all_static_files; } ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_1)
{
  const char *VAR_2 = VAR_1 + FUNC_1 (VAR_1);
  const char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
  int VAR_5 = 0, VAR_6;

  if (FUNC_1 (VAR_1) < VAR_0.static_file_max_len)
    return 0;

  for (VAR_6 = 0; VAR_6 < VAR_0.static_file_idx; ++VAR_6) {
    VAR_3 = VAR_0.static_files[VAR_6];
    if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
      continue;

    VAR_5 = FUNC_1 (VAR_3);
    if (VAR_0.all_static_files && (VAR_4 = FUNC_0 (VAR_1, '?')) != ((void*)0) &&
        VAR_4 - VAR_1 > VAR_5) {
      VAR_4 -= VAR_5;
      if (0 == FUNC_2 (VAR_3, VAR_4, VAR_5))
        return 1;
      continue;
    }

    if (!FUNC_2 (VAR_2 - VAR_5, VAR_3, VAR_5))
      return 1;
  }

  return 0;
}
