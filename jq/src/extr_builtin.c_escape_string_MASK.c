
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char const*,int) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (int ) ;
 char* FUNC_9 (char const*,char const*,int*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static jv FUNC_11(jv VAR_1, const char* VAR_2) {

  FUNC_0(FUNC_3(VAR_1) == VAR_0);
  const char* VAR_3[128] = {0};
  const char* VAR_4 = VAR_2;
  VAR_3[0] = "\\0";
  while (*VAR_4) {
    VAR_3[(int)*VAR_4] = VAR_4+1;
    VAR_4++;
    VAR_4 += FUNC_10(VAR_4);
    VAR_4++;
  }

  jv VAR_5 = FUNC_4("");
  const char* VAR_6 = FUNC_8(VAR_1);
  const char* VAR_7 = VAR_6 + FUNC_7(FUNC_1(VAR_1));
  const char* VAR_8;
  int VAR_9 = 0;
  while ((VAR_6 = FUNC_9((VAR_8 = VAR_6), VAR_7, &VAR_9))) {
    if (VAR_9 < 128 && VAR_3[VAR_9]) {
      VAR_5 = FUNC_6(VAR_5, VAR_3[VAR_9]);
    } else {
      VAR_5 = FUNC_5(VAR_5, VAR_8, VAR_6 - VAR_8);
    }
  }
  FUNC_2(VAR_1);
  return VAR_5;

}
