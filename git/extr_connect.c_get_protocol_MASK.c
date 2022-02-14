
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum protocol { ____Placeholder_protocol } protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static enum protocol FUNC_3(const char *VAR_3)
{
 if (!FUNC_2(VAR_3, "ssh"))
  return VAR_2;
 if (!FUNC_2(VAR_3, "git"))
  return VAR_1;
 if (!FUNC_2(VAR_3, "git+ssh"))
  return VAR_2;
 if (!FUNC_2(VAR_3, "ssh+git"))
  return VAR_2;
 if (!FUNC_2(VAR_3, "file"))
  return VAR_0;
 FUNC_1(FUNC_0("protocol '%s' is not supported"), VAR_3);
}
