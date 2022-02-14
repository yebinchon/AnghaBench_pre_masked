
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int item; } ;
typedef TYPE_1__ GColors ;
typedef int GColorPair ;


 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 size_t FUNC_5 (char*,char*) ;
 size_t FUNC_6 (char*) ;
 size_t FUNC_7 (char*,char*) ;

__attribute__((used)) static void
FUNC_8 (GColorPair * VAR_0, GColors * VAR_1, char *VAR_2)
{
  char *VAR_3;
  int VAR_4 = 0;
  size_t VAR_5;


  VAR_5 = FUNC_5 (VAR_2, " \t");
  if (FUNC_6 (VAR_2) == VAR_5)
    FUNC_0 ("Malformed color key at line: %s", VAR_2);

  VAR_2[VAR_5] = '\0';
  if ((VAR_4 = FUNC_1 (VAR_2)) == -1)
    FUNC_0 ("Unable to find color key: %s", VAR_2);


  VAR_3 = VAR_2 + (VAR_5 + 1);
  VAR_5 = FUNC_7 (VAR_3, " \t");
  if (FUNC_6 (VAR_3) == VAR_5)
    FUNC_0 ("Malformed color value at line: %s", VAR_2);
  VAR_3 = VAR_3 + VAR_5;


  if (FUNC_3 (VAR_0, VAR_3) == 1)
    FUNC_0 ("Invalid bg/fg color pairs at: %s %s", VAR_2, VAR_3);

  if (FUNC_2 (VAR_1, VAR_3) == 1)
    FUNC_0 ("Invalid color attrs at: %s %s", VAR_2, VAR_3);

  if (FUNC_4 (VAR_1, VAR_3) == 1)
    FUNC_0 ("Invalid color module at: %s %s", VAR_2, VAR_3);

  VAR_1->item = VAR_4;
}
