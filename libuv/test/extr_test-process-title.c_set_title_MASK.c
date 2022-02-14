
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(const char* VAR_0) {
  char VAR_1[512];
  int VAR_2;

  VAR_2 = FUNC_2(VAR_1, sizeof(VAR_1));
  FUNC_0(VAR_2 == 0);

  VAR_2 = FUNC_3(VAR_0);
  FUNC_0(VAR_2 == 0);

  VAR_2 = FUNC_2(VAR_1, sizeof(VAR_1));
  FUNC_0(VAR_2 == 0);

  FUNC_0(FUNC_1(VAR_1, VAR_0) == 0);
}
