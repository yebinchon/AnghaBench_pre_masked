
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_2, int VAR_3, int VAR_4)
{

 VAR_1++;
 FUNC_0("%sok %d - %s%s\n", VAR_3 || VAR_4 ? "" : "not ", VAR_1,
     VAR_4 ? "(SKIPPED) " : "", VAR_2);
 if (!VAR_3 && !VAR_4)
  VAR_0++;
}
