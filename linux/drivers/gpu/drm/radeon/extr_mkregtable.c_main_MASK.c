
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (struct table*,char*) ;
 int VAR_0 ;
 int FUNC_3 (struct table*) ;
 int FUNC_4 (struct table*) ;

int FUNC_5(int VAR_1, char *VAR_2[])
{
 struct table VAR_3;

 if (VAR_1 != 2) {
  FUNC_1(VAR_0, "Usage: %s <authfile>\n", VAR_2[0]);
  FUNC_0(1);
 }
 FUNC_3(&VAR_3);
 if (FUNC_2(&VAR_3, VAR_2[1])) {
  FUNC_1(VAR_0, "Failed to parse file %s\n", VAR_2[1]);
  return -1;
 }
 FUNC_4(&VAR_3);
 return 0;
}
