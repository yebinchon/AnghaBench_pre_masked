
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ utf8_int32_t ;


 void* VAR_0 ;
 void* FUNC_0 (void const*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void *FUNC_2(const void *VAR_1, const void *VAR_2) {
  const void *VAR_3 = VAR_1;



  if ('\0' == *((const char *)VAR_2)) {
    return (void *)VAR_1;
  }

  for (;;) {
    const void *VAR_4 = VAR_3;
    const void *VAR_5 = VAR_2;
    utf8_int32_t VAR_6, VAR_7;

    VAR_3 = FUNC_0(VAR_3, &VAR_6);
    VAR_5 = FUNC_0(VAR_5, &VAR_7);

    while ((0 != VAR_6) && (0 != VAR_7)) {
      VAR_6 = FUNC_1(VAR_6);
      VAR_7 = FUNC_1(VAR_7);


      if (VAR_6 != VAR_7) {
        break;
      }

      VAR_3 = FUNC_0(VAR_3, &VAR_6);
      VAR_5 = FUNC_0(VAR_5, &VAR_7);
    }

    if (0 == VAR_7) {


      return (void *)VAR_4;
    }

    if (0 == VAR_6) {

      return VAR_0;
    }
  }
}
