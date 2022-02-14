
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint64_t ;
typedef int fmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,scalar_t__,char*,int ,int) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void
FUNC_5(const char *VAR_3, uint64_t VAR_4, int VAR_5, int VAR_6)
{
 char VAR_7[10];
 char VAR_8[128];

 FUNC_1(VAR_8, sizeof(VAR_8), "{:%s/%%*s}", VAR_3);

 if (VAR_5 < 5 || VAR_5 > 9)
  FUNC_4(1, "doofus");
 VAR_6 |= VAR_2 | VAR_1;
 FUNC_0(VAR_7, VAR_5, VAR_4, "", VAR_0, VAR_6);
 FUNC_2("value", "%ju", (uintmax_t) VAR_4);
 FUNC_3(VAR_8, VAR_5, VAR_7);
}
