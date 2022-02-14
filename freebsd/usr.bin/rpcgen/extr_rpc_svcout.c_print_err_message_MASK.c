
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_5)
{
 if (VAR_3)
  FUNC_0(VAR_1, "%ssyslog(LOG_ERR, \"%s\");\n", VAR_5, VAR_0);
 else if (VAR_2 || VAR_4)
  FUNC_0(VAR_1, "%s_msgout(\"%s\");\n", VAR_5, VAR_0);
 else
  FUNC_0(VAR_1, "%sfprintf(stderr, \"%s\");\n", VAR_5, VAR_0);
}
