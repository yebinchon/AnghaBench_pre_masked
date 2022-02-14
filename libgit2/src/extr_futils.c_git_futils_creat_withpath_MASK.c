
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int const) ;
 int FUNC_2 (char const*,int const) ;

int FUNC_3(const char *VAR_1, const mode_t VAR_2, const mode_t VAR_3)
{
 int VAR_4;

 if (FUNC_1(VAR_1, VAR_2) < 0)
  return -1;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_0, "failed to create file '%s'", VAR_1);
  return -1;
 }

 return VAR_4;
}
