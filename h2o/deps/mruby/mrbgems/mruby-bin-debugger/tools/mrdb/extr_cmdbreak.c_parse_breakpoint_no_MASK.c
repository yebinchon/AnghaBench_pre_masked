
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int32_t
FUNC_5(char* VAR_1)
{
  char* VAR_2 = VAR_1;
  uint32_t VAR_3;

  if ((*VAR_2 == '0')||(FUNC_4(VAR_2) >= VAR_0)) {
    return 0;
  }

  while (!(FUNC_0(*VAR_2)||FUNC_1(*VAR_2))) {
    if (!FUNC_2(*VAR_2)) {
      return 0;
    }
    VAR_2++;
  }

  FUNC_3(VAR_3, VAR_1);
  return VAR_3;
}
