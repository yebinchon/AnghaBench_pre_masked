
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf8_int32_t ;


 void* FUNC_0 (void const*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int FUNC_3(const void *VAR_0, const void *VAR_1, size_t VAR_2) {
  utf8_int32_t VAR_3, VAR_4, VAR_5, VAR_6;

  do {
    const unsigned char *const VAR_7 = (const unsigned char *)VAR_0;
    const unsigned char *const VAR_8 = (const unsigned char *)VAR_1;



    if (0 == VAR_2) {
      return 0;
    }

    if ((1 == VAR_2) && ((0xc0 == (0xe0 & *VAR_7)) || (0xc0 == (0xe0 & *VAR_8)))) {
      const utf8_int32_t VAR_9 = (0xe0 & *VAR_7);
      const utf8_int32_t VAR_10 = (0xe0 & *VAR_8);

      if (VAR_9 < VAR_10) {
        return -1;
      } else if (VAR_9 > VAR_10) {
        return 1;
      } else {
        return 0;
      }
    }

    if ((2 >= VAR_2) && ((0xe0 == (0xf0 & *VAR_7)) || (0xe0 == (0xf0 & *VAR_8)))) {
      const utf8_int32_t VAR_11 = (0xf0 & *VAR_7);
      const utf8_int32_t VAR_12 = (0xf0 & *VAR_8);

      if (VAR_11 < VAR_12) {
        return -1;
      } else if (VAR_11 > VAR_12) {
        return 1;
      } else {
        return 0;
      }
    }

    if ((3 >= VAR_2) && ((0xf0 == (0xf8 & *VAR_7)) || (0xf0 == (0xf8 & *VAR_8)))) {
      const utf8_int32_t VAR_13 = (0xf8 & *VAR_7);
      const utf8_int32_t VAR_14 = (0xf8 & *VAR_8);

      if (VAR_13 < VAR_14) {
        return -1;
      } else if (VAR_13 > VAR_14) {
        return 1;
      } else {
        return 0;
      }
    }

    VAR_0 = FUNC_0(VAR_0, &VAR_3);
    VAR_1 = FUNC_0(VAR_1, &VAR_4);
    VAR_2 -= FUNC_1(VAR_3);


    VAR_5 = VAR_3;
    VAR_6 = VAR_4;


    VAR_3 = FUNC_2(VAR_3);
    VAR_4 = FUNC_2(VAR_4);


    if ((0 == VAR_5) && (0 == VAR_6)) {
      return 0;
    } else if (VAR_3 == VAR_4) {
      continue;
    }


    if (VAR_5 < VAR_6) {
      return -1;
    } else if (VAR_5 > VAR_6) {
      return 1;
    }
  } while (0 < VAR_2);


  return 0;
}
