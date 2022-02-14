
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;
typedef size_t INT8 ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char FUNC_2 (char) ;

__attribute__((used)) static UINT8 FUNC_3(char *VAR_0, UINT8 VAR_1, UINT8 VAR_2, INT8 *VAR_3)
{
  INT8 VAR_4 = 0;
  UINT8 VAR_5, VAR_6 = 0;

  switch(VAR_0[VAR_1])
    {
    case '-':
      VAR_6++;

    case '+':
      ++VAR_1;
      break;
    }
  while(1) {
    if(FUNC_1(VAR_0[VAR_1]))
      VAR_5 = VAR_0[VAR_1] - '0';
    else if(FUNC_0(VAR_0[VAR_1]))
      VAR_5 = FUNC_2(VAR_0[VAR_1]) - 'A' + 10;
    else
      break;
    if(VAR_5 >= VAR_2)
      break;
    VAR_4 = VAR_2 * VAR_4 + VAR_5;
    VAR_1++;
  }
  *VAR_3 = (VAR_6 == 0 ? VAR_4 : -VAR_4);
  return VAR_1;
}
