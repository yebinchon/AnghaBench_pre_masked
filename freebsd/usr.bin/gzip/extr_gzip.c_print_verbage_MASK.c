
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1, const char *VAR_2, off_t VAR_3, off_t VAR_4)
{
 if (VAR_1)
  FUNC_1(VAR_0, "%s:%s  ", VAR_1,
      FUNC_3(VAR_1) < 7 ? "\t\t" : "\t");
 FUNC_2(VAR_3, VAR_4, VAR_0);
 if (VAR_2)
  FUNC_1(VAR_0, " -- replaced with %s", VAR_2);
 FUNC_1(VAR_0, "\n");
 FUNC_0(VAR_0);
}
