
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 long FUNC_0 (char const*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3, const char *VAR_4)
{
 long VAR_5;

 VAR_1 = 0;
 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5 == -1 && VAR_1 != VAR_0 && VAR_1 != 0)
  FUNC_2("pathconf: %s", VAR_2);
 FUNC_1("%s: ", VAR_2);
 if (VAR_5 == -1)
  FUNC_1("undefined\n");
 else
  FUNC_1("%ld\n", VAR_5);
}
