
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 char* FUNC_3 (char const*) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2[5];
 char *VAR_3;
 size_t VAR_4;

 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = FUNC_4(VAR_3);

 if (VAR_3[VAR_4 - 1] == '/')
  VAR_3[VAR_4 - 1] = 0;

 VAR_2[0] = "/bin/cp";
 VAR_2[1] = "-R";
 VAR_2[2] = VAR_3;
 VAR_2[3] = (char *)VAR_1;
 VAR_2[4] = ((void*)0);

 FUNC_0(
  FUNC_2(VAR_2),
  "Failed to copy test fixtures to sandbox"
 );

 FUNC_1(VAR_3);
}
