
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*,int*,int **) ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;

int FUNC_7(void)
{
 u32 *VAR_0;
 int VAR_1, VAR_2;

 FUNC_0(&VAR_1, &VAR_2, &VAR_0);

 if (VAR_1 < VAR_2) {
  FUNC_3("This kernel requires an %s CPU, ",
         FUNC_2(VAR_2));
  FUNC_3("but only detected an %s CPU.\n",
         FUNC_2(VAR_1));
  return -1;
 }

 if (VAR_0) {
  FUNC_5("This kernel requires the following features "
       "not present on the CPU:\n");
  FUNC_6(VAR_0);
  FUNC_4('\n');
  return -1;
 } else if (FUNC_1()) {
  return -1;
 } else {
  return 0;
 }
}
