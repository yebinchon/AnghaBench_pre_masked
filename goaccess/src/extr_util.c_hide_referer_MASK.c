
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hide_referer_idx; char** hide_referers; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*) ;

int
FUNC_3 (const char *VAR_1)
{
  char *VAR_2 = ((void*)0);
  int VAR_3, VAR_4 = 0;

  if (VAR_0.hide_referer_idx == 0)
    return 0;
  if (VAR_1 == ((void*)0) || *VAR_1 == '\0')
    return 0;

  VAR_2 = FUNC_2 (VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_0.hide_referer_idx; ++VAR_3) {
    if (VAR_0.hide_referers[VAR_3] == ((void*)0) || *VAR_0.hide_referers[VAR_3] == '\0')
      continue;

    if (FUNC_1 (VAR_0.hide_referers[VAR_3], VAR_2)) {
      VAR_4 = 1;
      goto out;
    }
  }
out:
  FUNC_0 (VAR_2);

  return VAR_4;
}
