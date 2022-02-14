
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char const*,char const*,int ) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*) ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_5, const char *VAR_6)
{
 int VAR_7;
 int VAR_8;


  VAR_7 = FUNC_1(VAR_3, "\txdr_%s,", FUNC_4(VAR_6));

 VAR_7 += VAR_1 - 1;

 VAR_8 = (VAR_2 - VAR_7 + VAR_1 - 1)/VAR_1;
 FUNC_0(VAR_3, "%s", &VAR_4[VAR_0-VAR_8]);

 if (FUNC_3(VAR_6, "void")) {
  FUNC_0(VAR_3, "0");
 } else {
  FUNC_0(VAR_3, "sizeof ( ");

  FUNC_2(VAR_5, VAR_6, 0);
  FUNC_0(VAR_3, ")");
 }
 FUNC_0(VAR_3, ",\n");
}
