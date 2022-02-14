
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_entry {int object; int key; } ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sort_entry*) ;
 struct sort_entry* FUNC_8 (int ,int ) ;

jv FUNC_9(jv VAR_1, jv VAR_2) {
  FUNC_0(FUNC_6(VAR_1) == VAR_0);
  FUNC_0(FUNC_6(VAR_2) == VAR_0);
  FUNC_0(FUNC_2(FUNC_4(VAR_1)) == FUNC_2(FUNC_4(VAR_2)));
  int VAR_3 = FUNC_2(FUNC_4(VAR_1));
  struct sort_entry* VAR_4 = FUNC_8(VAR_1, VAR_2);
  jv VAR_5 = FUNC_1();
  for (int VAR_6=0; VAR_6<VAR_3; VAR_6++) {
    FUNC_5(VAR_4[VAR_6].key);
    VAR_5 = FUNC_3(VAR_5, VAR_6, VAR_4[VAR_6].object);
  }
  FUNC_7(VAR_4);
  return VAR_5;
}
