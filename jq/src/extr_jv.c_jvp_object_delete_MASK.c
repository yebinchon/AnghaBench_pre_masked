
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct object_slot {scalar_t__ hash; int next; int value; int string; } ;
typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int* FUNC_3 (int ,int ) ;
 struct object_slot* FUNC_4 (int ,int) ;
 struct object_slot* FUNC_5 (int ,struct object_slot*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(jv* VAR_2, jv VAR_3) {
  FUNC_1(FUNC_0(VAR_3, VAR_0));
  *VAR_2 = FUNC_6(*VAR_2);
  int* VAR_4 = FUNC_3(*VAR_2, VAR_3);
  int* VAR_5 = VAR_4;
  uint32_t VAR_6 = FUNC_9(VAR_3);
  for (struct object_slot* VAR_7 = FUNC_4(*VAR_2, *VAR_4);
       VAR_7;
       VAR_7 = FUNC_5(*VAR_2, VAR_7)) {
    if (VAR_6 == VAR_7->hash && FUNC_7(VAR_3, VAR_7->string)) {
      *VAR_5 = VAR_7->next;
      FUNC_8(VAR_7->string);
      VAR_7->string = VAR_1;
      FUNC_2(VAR_7->value);
      return 1;
    }
    VAR_5 = &VAR_7->next;
  }
  return 0;
}
