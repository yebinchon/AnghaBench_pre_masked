
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_slot {int value; } ;
typedef int jv ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int ,int ) ;
 struct object_slot* FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static jv* FUNC_4(jv VAR_1, jv VAR_2) {
  FUNC_1(FUNC_0(VAR_2, VAR_0));
  int* VAR_3 = FUNC_2(VAR_1, VAR_2);
  struct object_slot* VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  if (VAR_4 == 0) return 0;
  else return &VAR_4->value;
}
