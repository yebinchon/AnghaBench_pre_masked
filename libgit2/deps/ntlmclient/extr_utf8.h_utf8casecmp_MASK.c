
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf8_int32_t ;


 void* FUNC_0 (void const*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(const void *VAR_0, const void *VAR_1) {
  utf8_int32_t VAR_2, VAR_3, VAR_4, VAR_5;

  for (;;) {
    VAR_0 = FUNC_0(VAR_0, &VAR_2);
    VAR_1 = FUNC_0(VAR_1, &VAR_3);


    VAR_4 = VAR_2;
    VAR_5 = VAR_3;


    VAR_2 = FUNC_1(VAR_2);
    VAR_3 = FUNC_1(VAR_3);


    if ((0 == VAR_4) && (0 == VAR_5)) {
      return 0;
    } else if (VAR_2 == VAR_3) {
      continue;
    }


    if (VAR_4 < VAR_5) {
      return -1;
    } else if (VAR_4 > VAR_5) {
      return 1;
    }
  }
}
