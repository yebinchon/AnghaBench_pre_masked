
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static UINT8 FUNC_2(char *VAR_0, UINT8 VAR_1)
{
oncemore:
  while(FUNC_1(VAR_0[VAR_1]))
    VAR_1++;
  if(VAR_0[VAR_1] == 0) {
    FUNC_0(VAR_0);
    VAR_1 = 0;
    goto oncemore;
  }
  return VAR_1;
}
