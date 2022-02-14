
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 size_t FUNC_1 (char*,size_t,int ) ;
 int FUNC_2 () ;

int FUNC_3(void* VAR_3, size_t VAR_4) {
  ssize_t VAR_5;
  size_t VAR_6;
  int VAR_7;

  VAR_7 = FUNC_2();
  if (VAR_7 != 0)
    return VAR_7;

  for (VAR_6 = 0; VAR_6 != VAR_4; VAR_6 += VAR_5) {
    do {
      VAR_5 = VAR_4 - VAR_6;






      if (VAR_5 > 256)
        VAR_5 = 256;

      VAR_5 = FUNC_1((char *) VAR_3 + VAR_6, VAR_5, 0);
    } while (VAR_5 == -1 && VAR_2 == VAR_0);

    if (VAR_5 == -1)
      return FUNC_0(VAR_2);

    if (VAR_5 == 0)
      return VAR_1;
  }

  return 0;
}
