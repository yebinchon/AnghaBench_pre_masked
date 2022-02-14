
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_slot {int string; } ;
typedef int jv ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct object_slot* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

int FUNC_5(jv VAR_4, int VAR_5) {
  FUNC_1(FUNC_0(VAR_4, VAR_2));
  FUNC_1(VAR_5 != VAR_0);
  struct object_slot* VAR_6;
  do {
    VAR_5++;
    if (VAR_5 >= FUNC_4(VAR_4))
      return VAR_0;
    VAR_6 = FUNC_3(VAR_4, VAR_5);
  } while (FUNC_2(VAR_6->string) == VAR_1);
  FUNC_1(FUNC_2(FUNC_3(VAR_4,VAR_5)->string)
         == VAR_3);
  return VAR_5;
}
