
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static bool FUNC_5(const char* VAR_2, const char* VAR_3) {
  FILE* VAR_4;
  FILE* VAR_5;

  int VAR_6 = FUNC_3(VAR_2, VAR_3);
  if (VAR_6 == 0) {
    return 1;
  }


  if (VAR_1 != VAR_0) {
    return VAR_6;
  }


  if (!(VAR_4 = FUNC_2(VAR_2, "r"))) {
    return 0;
  }

  if (!(VAR_5 = FUNC_2(VAR_3, "w"))) {
    FUNC_1(VAR_4);
    return 0;
  }

  int VAR_7 = FUNC_0(VAR_4, VAR_5);
  FUNC_1(VAR_4);
  FUNC_1(VAR_5);

  if (VAR_7 == 0) {
    return FUNC_4(VAR_2) == 0;
  } else {
    FUNC_4(VAR_3);
    return VAR_7 == 0;
  }
}
