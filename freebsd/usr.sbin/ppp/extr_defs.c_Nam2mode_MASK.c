
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; char* name; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,int) ;

int
FUNC_2(const char *VAR_1)
{
  int VAR_2, VAR_3, VAR_4;

  VAR_4 = FUNC_0(VAR_1);
  VAR_3 = -1;
  for (VAR_2 = 0; VAR_0[VAR_2].mode; VAR_2++)
    if (!FUNC_1(VAR_1, VAR_0[VAR_2].name, VAR_4)) {
      if (VAR_0[VAR_2].name[VAR_4] == '\0')
 return VAR_0[VAR_2].mode;
      if (VAR_3 != -1)
        return 0;
      VAR_3 = VAR_2;
    }

  return VAR_3 == -1 ? 0 : VAR_0[VAR_3].mode;
}
