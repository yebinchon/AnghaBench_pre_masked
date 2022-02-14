
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint64_t ;
typedef int phandle_t ;
typedef int cell_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,int*,int) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_4(void)
{
 phandle_t VAR_9;
 cell_t VAR_10[2];

 if (VAR_7)
  return (0);

 VAR_9 = FUNC_0("/ibm,opal");
 if (VAR_9 == -1)
  return (VAR_0);

 if (!FUNC_2(VAR_9, "opal-base-address") ||
     !FUNC_2(VAR_9, "opal-entry-address"))
  return (VAR_0);

 FUNC_1(VAR_9, "opal-base-address", VAR_10, sizeof(VAR_10));
 VAR_5 = ((uint64_t)VAR_10[0] << 32) | VAR_10[1];
 FUNC_1(VAR_9, "opal-entry-address", VAR_10, sizeof(VAR_10));
 VAR_6 = ((uint64_t)VAR_10[0] << 32) | VAR_10[1];

 VAR_8 = FUNC_3() & ~(VAR_2 | VAR_3 | VAR_1 | VAR_4);

 VAR_7 = 1;

 return (0);
}
