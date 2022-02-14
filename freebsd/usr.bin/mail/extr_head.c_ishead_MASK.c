
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct headline {int * l_date; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct headline*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

int
FUNC_4(char VAR_1[])
{
 struct headline VAR_2;
 char VAR_3[VAR_0];

 if (FUNC_3(VAR_1, "From ", 5) != 0)
  return (0);
 FUNC_2(VAR_1, &VAR_2, VAR_3);
 if (VAR_2.l_date == ((void*)0)) {
  FUNC_0(VAR_1, "No date field");
  return (0);
 }
 if (!FUNC_1(VAR_2.l_date)) {
  FUNC_0(VAR_1, "Date field not legal date");
  return (0);
 }



 return (1);
}
