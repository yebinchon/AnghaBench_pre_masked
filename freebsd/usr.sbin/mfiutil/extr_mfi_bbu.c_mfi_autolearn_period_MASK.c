
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,size_t,char*,...) ;

void
FUNC_1(uint32_t VAR_0, char *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3, VAR_4;
 char *VAR_5;

 VAR_3 = VAR_0 / (24 * 3600);
 VAR_4 = (VAR_0 % (24 * 3600)) / 3600;

 VAR_5 = VAR_1;
 if (VAR_3 != 0) {
  VAR_5 += FUNC_0(VAR_1, VAR_2, "%u day%s", VAR_3, VAR_3 == 1 ? "" : "s");
  VAR_2 -= VAR_5 - VAR_1;
  if (VAR_4 != 0) {
   VAR_5 += FUNC_0(VAR_5, VAR_2, ", ");
   VAR_2 -= 2;
  }
 }
 if (VAR_4 != 0)
  FUNC_0(VAR_5, VAR_2, "%u hour%s", VAR_4, VAR_4 == 1 ? "" : "s");

 if (VAR_3 == 0 && VAR_4 == 0)
  FUNC_0(VAR_5, VAR_2, "less than 1 hour");
}
