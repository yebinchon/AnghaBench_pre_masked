
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mchunkptr ;


 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 size_t FUNC_3 (int ) ;

size_t FUNC_4(void* VAR_0) {
  if (VAR_0 != 0) {
    mchunkptr VAR_1 = FUNC_2(VAR_0);
    if (FUNC_1(VAR_1))
      return FUNC_0(VAR_1) - FUNC_3(VAR_1);
  }
  return 0;
}
