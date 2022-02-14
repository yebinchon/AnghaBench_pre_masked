
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const* const*) ;
 int FUNC_1 (char*,size_t,char*,...) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, size_t VAR_1, unsigned int VAR_2)
{
 static const char * const VAR_3[] = {
  "common",
  "lcb",
  "8051",
  "lbm"
 };

 if (VAR_2 < FUNC_0(VAR_3))
  FUNC_1(VAR_0, VAR_1, "dc_%s_int", VAR_3[VAR_2]);
 else
  FUNC_1(VAR_0, VAR_1, "DCInt%u", VAR_2);
 return VAR_0;
}
