
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_slot {int string; } ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct object_slot* FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(jv VAR_1) {
  int VAR_2 = 0;
  for (int VAR_3=0; VAR_3<FUNC_2(VAR_1); VAR_3++) {
    struct object_slot* VAR_4 = FUNC_1(VAR_1, VAR_3);
    if (FUNC_0(VAR_4->string) != VAR_0) VAR_2++;
  }
  return VAR_2;
}
