
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3)
{
 if (!FUNC_1(VAR_3, "error"))
  return VAR_0;
 else if (!FUNC_1(VAR_3, "warn"))
  return VAR_2;
 else if (!FUNC_1(VAR_3, "ignore"))
  return VAR_1;
 else
  FUNC_0("Unknown fsck message type: '%s'", VAR_3);
}
