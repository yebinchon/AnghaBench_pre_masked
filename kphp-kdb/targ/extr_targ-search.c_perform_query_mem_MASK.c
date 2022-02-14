
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int condition_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int VAR_5 ;

int FUNC_5 (void) {
  int VAR_6;

  if (VAR_5 > 1) {
    FUNC_1 (VAR_4, "performing query by complete scanning with pre-compiled condition\n");
  }
  condition_t VAR_7 = FUNC_0 (VAR_0, 1);

  for (VAR_6 = 0; VAR_6 <= VAR_3; VAR_6++) {
    if (VAR_2[VAR_6] && FUNC_4 (VAR_2[VAR_6], VAR_7, VAR_6)) {
      FUNC_3 (VAR_6);
    }
  }

  FUNC_2();

  return VAR_1;
}
