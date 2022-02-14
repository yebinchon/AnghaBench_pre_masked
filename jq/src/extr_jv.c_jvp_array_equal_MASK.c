
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(jv VAR_0, jv VAR_1) {
  if (FUNC_2(VAR_0) != FUNC_2(VAR_1))
    return 0;
  if (FUNC_4(VAR_0) == FUNC_4(VAR_1) &&
      FUNC_3(VAR_0) == FUNC_3(VAR_1))
    return 1;
  for (int VAR_2=0; VAR_2<FUNC_2(VAR_0); VAR_2++) {
    if (!FUNC_1(FUNC_0(*FUNC_5(VAR_0, VAR_2)),
                  FUNC_0(*FUNC_5(VAR_1, VAR_2))))
      return 0;
  }
  return 1;
}
