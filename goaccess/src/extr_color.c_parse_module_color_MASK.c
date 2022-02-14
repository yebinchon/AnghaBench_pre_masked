
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int module; } ;
typedef TYPE_1__ GColors ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5 (GColors * VAR_0, const char *VAR_1)
{
  char *VAR_2 = FUNC_4 (VAR_1), *VAR_3;

  VAR_3 = FUNC_3 (VAR_2, ' ');
  if (!VAR_3 || !*(VAR_3 + 1)) {
    FUNC_0 (("attempted to parse color module: %s\n", VAR_1));
    goto clean;
  }

  if ((VAR_0->module = FUNC_2 (VAR_3 + 1)) == -1)
    FUNC_0 (("attempted to parse color module: %s\n", VAR_1));

clean:
  FUNC_1 (VAR_2);

  return 0;
}
