
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char const*,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, int VAR_3)
{

 if (VAR_0 == 0 && VAR_3 == 0)
  VAR_0 = 1;
 FUNC_1(VAR_1, "%s:%s  %s\n", VAR_2,
     FUNC_2(VAR_2) < 7 ? "\t\t" : "\t", VAR_3 ? "OK" : "NOT OK");
 FUNC_0(VAR_1);
}
