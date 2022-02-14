
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseries_hp_errorlog {int resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char**,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(char **VAR_3, struct pseries_hp_errorlog *VAR_4)
{
 char *VAR_5;

 VAR_5 = FUNC_1(VAR_3, " ");
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_2(VAR_5, "memory")) {
  VAR_4->resource = VAR_2;
 } else if (FUNC_2(VAR_5, "cpu")) {
  VAR_4->resource = VAR_1;
 } else {
  FUNC_0("Invalid resource specified.\n");
  return -VAR_0;
 }

 return 0;
}
