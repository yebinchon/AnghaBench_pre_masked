
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum help_format { ____Placeholder_help_format } help_format ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum help_format FUNC_3(const char *VAR_3)
{
 if (!FUNC_2(VAR_3, "man"))
  return VAR_1;
 if (!FUNC_2(VAR_3, "info"))
  return VAR_0;
 if (!FUNC_2(VAR_3, "web") || !FUNC_2(VAR_3, "html"))
  return VAR_2;




 FUNC_1(FUNC_0("unrecognized help format '%s'"), VAR_3);
}
