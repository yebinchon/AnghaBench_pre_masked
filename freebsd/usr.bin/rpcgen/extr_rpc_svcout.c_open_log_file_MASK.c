
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,char const*) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;

 VAR_3 = FUNC_1(VAR_1, '.');
 if (VAR_3)
  *VAR_3 = '\0';
 FUNC_0(VAR_0, "%sopenlog(\"%s\", LOG_PID, LOG_DAEMON);\n", VAR_2, VAR_1);
 if (VAR_3)
  *VAR_3 = '.';
}
