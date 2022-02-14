
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GModule ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;

int
FUNC_1 (GModule VAR_2)
{
  int VAR_3;
  int VAR_4 = FUNC_0 (VAR_2) - 1;

  if (VAR_4 >= 0 && VAR_1[VAR_4] != -1)
    return VAR_1[VAR_4];

  for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--) {
    if (VAR_1[VAR_3] != -1) {
      return VAR_1[VAR_3];
    }
  }

  return 0;
}
