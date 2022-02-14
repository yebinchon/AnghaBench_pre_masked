
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 double FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(jv VAR_4, jv VAR_5, int* VAR_6, int* VAR_7) {

  jv VAR_8 = FUNC_7(FUNC_2(VAR_5), FUNC_8("start"));
  jv VAR_9 = FUNC_7(VAR_5, FUNC_8("end"));
  if (FUNC_4(VAR_8) == VAR_1) {
    FUNC_3(VAR_8);
    VAR_8 = FUNC_5(0);
  }
  int VAR_10;
  if (FUNC_4(VAR_4) == VAR_0) {
    VAR_10 = FUNC_1(VAR_4);
  } else if (FUNC_4(VAR_4) == VAR_3) {
    VAR_10 = FUNC_9(VAR_4);
  } else {
    FUNC_3(VAR_4);
    return 0;
  }
  if (FUNC_4(VAR_9) == VAR_1) {
    FUNC_3(VAR_9);
    VAR_9 = FUNC_5(VAR_10);
  }
  if (FUNC_4(VAR_8) != VAR_2 ||
      FUNC_4(VAR_9) != VAR_2) {
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);
    return 0;
  } else {
    double VAR_11 = FUNC_6(VAR_8);
    double VAR_12 = FUNC_6(VAR_9);
    FUNC_3(VAR_8);
    FUNC_3(VAR_9);
    if (VAR_11 < 0) VAR_11 += VAR_10;
    if (VAR_12 < 0) VAR_12 += VAR_10;
    if (VAR_11 < 0) VAR_11 = 0;
    if (VAR_11 > VAR_10) VAR_11 = VAR_10;

    int VAR_13 = (int)VAR_11;
    int VAR_14 = (VAR_12 > VAR_10) ? VAR_10 : (int)VAR_12;

    if(VAR_14 < VAR_12) VAR_14 += 1;

    if (VAR_14 > VAR_10) VAR_14 = VAR_10;
    if (VAR_14 < VAR_13) VAR_14 = VAR_13;
    FUNC_0(0 <= VAR_13 && VAR_13 <= VAR_14 && VAR_14 <= VAR_10);
    *VAR_6 = VAR_13;
    *VAR_7 = VAR_14;
    return 1;
  }
}
