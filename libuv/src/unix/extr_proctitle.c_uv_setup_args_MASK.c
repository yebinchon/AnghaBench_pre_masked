
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* str; int len; } ;


 char** VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,size_t) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char*) ;
 char** FUNC_3 (size_t) ;

char** FUNC_4(int VAR_2, char** VAR_3) {
  char** VAR_4;
  size_t VAR_5;
  char* VAR_6;
  int VAR_7;

  if (VAR_2 <= 0)
    return VAR_3;


  VAR_5 = 0;
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    VAR_5 += FUNC_2(VAR_3[VAR_7]) + 1;






  VAR_1.str = VAR_3[0];
  VAR_1.len = VAR_3[VAR_2 - 1] + FUNC_2(VAR_3[VAR_2 - 1]) - VAR_3[0];
  FUNC_0(VAR_1.len + 1 == VAR_5);



  VAR_5 += (VAR_2 + 1) * sizeof(char*);

  VAR_4 = FUNC_3(VAR_5);
  if (VAR_4 == ((void*)0))
    return VAR_3;
  VAR_0 = VAR_4;


  VAR_6 = (char*) &VAR_4[VAR_2 + 1];
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
    VAR_5 = FUNC_2(VAR_3[VAR_7]) + 1;
    FUNC_1(VAR_6, VAR_3[VAR_7], VAR_5);
    VAR_4[VAR_7] = VAR_6;
    VAR_6 += VAR_5;
  }
  VAR_4[VAR_7] = ((void*)0);

  return VAR_4;
}
