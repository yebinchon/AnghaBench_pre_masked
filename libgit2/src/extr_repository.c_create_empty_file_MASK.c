
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char const*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, mode_t VAR_2)
{
 int VAR_3;

 if ((VAR_3 = FUNC_2(VAR_1, VAR_2)) < 0) {
  FUNC_0(VAR_0, "error while creating '%s'", VAR_1);
  return -1;
 }

 if (FUNC_1(VAR_3) < 0) {
  FUNC_0(VAR_0, "error while closing '%s'", VAR_1);
  return -1;
 }

 return 0;
}
