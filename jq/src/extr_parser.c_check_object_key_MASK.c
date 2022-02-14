
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jv ;
typedef int errbuf ;
typedef int block ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static jv FUNC_7(block VAR_1) {
  if (FUNC_2(VAR_1) && FUNC_1(VAR_1) != VAR_0) {
    char VAR_2[15];
    return FUNC_6("Cannot use %s (%s) as object key",
        FUNC_5(FUNC_1(VAR_1)),
        FUNC_3(FUNC_0(VAR_1), VAR_2, sizeof(VAR_2)));
  }
  return FUNC_4();
}
