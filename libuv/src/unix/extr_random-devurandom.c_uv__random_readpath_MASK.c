
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 size_t FUNC_3 (int,char*,size_t) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*,int ) ;

int FUNC_6(const char* VAR_4, void* VAR_5, size_t VAR_6) {
  struct stat VAR_7;
  size_t VAR_8;
  ssize_t VAR_9;
  int VAR_10;

  VAR_10 = FUNC_5(VAR_4, VAR_1);

  if (VAR_10 == -1)
    return FUNC_1(VAR_3);

  if (FUNC_2(VAR_10, &VAR_7)) {
    FUNC_4(VAR_10);
    return FUNC_1(VAR_3);
  }

  if (!FUNC_0(VAR_7.st_mode)) {
    FUNC_4(VAR_10);
    return VAR_2;
  }

  for (VAR_8 = 0; VAR_8 != VAR_6; VAR_8 += VAR_9) {
    do
      VAR_9 = FUNC_3(VAR_10, (char*) VAR_5 + VAR_8, VAR_6 - VAR_8);
    while (VAR_9 == -1 && VAR_3 == VAR_0);

    if (VAR_9 == -1) {
      FUNC_4(VAR_10);
      return FUNC_1(VAR_3);
    }

    if (VAR_9 == 0) {
      FUNC_4(VAR_10);
      return VAR_2;
    }
  }

  FUNC_4(VAR_10);
  return 0;
}
