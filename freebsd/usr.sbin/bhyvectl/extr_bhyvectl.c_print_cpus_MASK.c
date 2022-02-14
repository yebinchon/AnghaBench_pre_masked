
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpuset_t ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int,int const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_1, const cpuset_t *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = 1;
 FUNC_2("%s:\t", VAR_1);
 if (!FUNC_0(VAR_2)) {
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
   if (FUNC_1(VAR_3, VAR_2)) {
    FUNC_2("%s%d", VAR_4 ? " " : ", ", VAR_3);
    VAR_4 = 0;
   }
  }
 } else
  FUNC_2(" (none)");
 FUNC_2("\n");
}
