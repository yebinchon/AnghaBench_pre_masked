
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ money_auth_code_t ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 char FUNC_4 (char,char) ;

__attribute__((used)) static int FUNC_5 (char VAR_0[32], char *VAR_1, int VAR_2, money_auth_code_t VAR_3) {
  int VAR_4;
  if (!VAR_0) {
    return 0;
  }
  FUNC_1 (VAR_1 + VAR_2, "%016llx", VAR_3);
  FUNC_0 (VAR_1, VAR_2 + 16, VAR_1 + VAR_2 + 16);
  FUNC_3 (1, "in check_signature: md5_hex(%.*s)=%.32s, xor with %.32s\n", VAR_2+16, VAR_1, VAR_1+VAR_2+16, VAR_0);
  for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
    VAR_1[VAR_2+16+VAR_4] = FUNC_4 (VAR_1[VAR_2+16+VAR_4], VAR_0[VAR_4]);
  }
  FUNC_0 (VAR_1 + VAR_2 + 16, 32, VAR_1 + VAR_2 + 48);
  FUNC_3 (1, "xor=%.32s, md5(xor)=%.16s\n", VAR_1+VAR_2+16, VAR_1+VAR_2+48);
  VAR_1[VAR_2+64] = 0;
  return FUNC_2 (VAR_1 + VAR_2 + 48, 0, 16) == VAR_3;
}
