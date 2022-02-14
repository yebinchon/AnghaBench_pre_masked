
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t GModule ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int* VAR_1 ;

int
FUNC_2 (void)
{
  GModule VAR_2;
  int VAR_3;


  for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
    VAR_1[VAR_2] = -1;

  for (VAR_3 = 0, VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
    if (!FUNC_1 (VAR_2) || FUNC_0 (VAR_2)) {
      VAR_1[VAR_3++] = VAR_2;
    }
  }

  return VAR_1[0] > -1 ? VAR_1[0] : 0;
}
