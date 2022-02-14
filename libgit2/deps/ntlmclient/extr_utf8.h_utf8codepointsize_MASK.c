
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int utf8_int32_t ;



size_t FUNC_0(utf8_int32_t VAR_0) {
  if (0 == ((utf8_int32_t)0xffffff80 & VAR_0)) {
    return 1;
  } else if (0 == ((utf8_int32_t)0xfffff800 & VAR_0)) {
    return 2;
  } else if (0 == ((utf8_int32_t)0xffff0000 & VAR_0)) {
    return 3;
  } else {
    return 4;
  }
}
