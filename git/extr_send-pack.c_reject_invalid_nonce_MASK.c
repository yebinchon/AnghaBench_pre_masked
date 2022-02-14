
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int,char const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 if (VAR_0 <= VAR_2)
  FUNC_0("the receiving end asked to sign an invalid nonce <%.*s>",
      VAR_2, VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_4 = VAR_1[VAR_3] & 0xFF;
  if (FUNC_1(VAR_4) ||
      VAR_4 == '-' || VAR_4 == '.' ||
      VAR_4 == '/' || VAR_4 == '+' ||
      VAR_4 == '=' || VAR_4 == '_')
   continue;
  FUNC_0("the receiving end asked to sign an invalid nonce <%.*s>",
      VAR_2, VAR_1);
 }
}
