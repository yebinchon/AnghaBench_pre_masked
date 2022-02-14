
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_entry {int object; int key; } ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sort_entry*) ;
 struct sort_entry* FUNC_9 (int ,int ) ;

jv FUNC_10(jv VAR_1, jv VAR_2) {
  FUNC_0(FUNC_7(VAR_1) == VAR_0);
  FUNC_0(FUNC_7(VAR_2) == VAR_0);
  FUNC_0(FUNC_3(FUNC_4(VAR_1)) == FUNC_3(FUNC_4(VAR_2)));
  int VAR_3 = FUNC_3(FUNC_4(VAR_1));
  struct sort_entry* VAR_4 = FUNC_9(VAR_1, VAR_2);
  jv VAR_5 = FUNC_1();
  if (VAR_3 > 0) {
    jv VAR_6 = VAR_4[0].key;
    jv VAR_7 = FUNC_2(FUNC_1(), VAR_4[0].object);
    for (int VAR_8 = 1; VAR_8 < VAR_3; VAR_8++) {
      if (FUNC_5(FUNC_4(VAR_6), FUNC_4(VAR_4[VAR_8].key))) {
        FUNC_6(VAR_4[VAR_8].key);
      } else {
        FUNC_6(VAR_6);
        VAR_6 = VAR_4[VAR_8].key;
        VAR_5 = FUNC_2(VAR_5, VAR_7);
        VAR_7 = FUNC_1();
      }
      VAR_7 = FUNC_2(VAR_7, VAR_4[VAR_8].object);
    }
    FUNC_6(VAR_6);
    VAR_5 = FUNC_2(VAR_5, VAR_7);
  }
  FUNC_8(VAR_4);
  return VAR_5;
}
