
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_slot {int value; int string; } ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct object_slot* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(jv VAR_1, jv VAR_2) {
  int VAR_3 = FUNC_4(VAR_2);
  int VAR_4 = 0;
  for (int VAR_5=0; VAR_5<FUNC_6(VAR_1); VAR_5++) {
    struct object_slot* VAR_6 = FUNC_3(VAR_1, VAR_5);
    if (FUNC_2(VAR_6->string) == VAR_0) continue;
    jv* VAR_7 = FUNC_5(VAR_2, VAR_6->string);
    if (!VAR_7) return 0;

    if (!FUNC_1(FUNC_0(VAR_6->value), FUNC_0(*VAR_7))) return 0;
    VAR_4++;
  }
  return VAR_4 == VAR_3;
}
