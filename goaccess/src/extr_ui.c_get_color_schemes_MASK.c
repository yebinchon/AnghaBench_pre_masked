
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int color_idx; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 char** FUNC_2 (int) ;

__attribute__((used)) static const char **
FUNC_3 (size_t * VAR_2)
{
  const char *VAR_3[] = {
    "Monokai",
    "Monochrome",
    "Green",
    "Custom Scheme"
  };
  int VAR_4, VAR_5, VAR_6 = FUNC_0 (VAR_3);
  const char **VAR_7 = FUNC_2 (sizeof (char *) * VAR_6);

  for (VAR_4 = 0, VAR_5 = 0; VAR_4 < VAR_6; ++VAR_4) {
    if (!VAR_1.color_idx && !FUNC_1 ("Custom Scheme", VAR_3[VAR_4]))
      continue;
    if (VAR_0 < 256 && !FUNC_1 ("Monokai", VAR_3[VAR_4]))
      continue;
    VAR_7[VAR_5++] = VAR_3[VAR_4];
  }
  *VAR_2 = VAR_5;

  return VAR_7;
}
