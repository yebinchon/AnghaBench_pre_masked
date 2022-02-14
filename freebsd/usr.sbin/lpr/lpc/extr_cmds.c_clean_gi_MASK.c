
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int VAR_10 ;

void
FUNC_3(int VAR_11, char *VAR_12[])
{


 VAR_4 = 0;
 VAR_3 = FUNC_2(((void*)0));
 VAR_2 = 3600.0;
 VAR_1 = 0;
 VAR_5 = 0;
 VAR_0 = 0;
 VAR_6 = 0;
 VAR_9 = &VAR_10;


 for (; VAR_11 > 0; VAR_11--, VAR_12++) {
  if (**VAR_12 != '-')
   break;
  if (FUNC_1(*VAR_12, "-d") == 0) {

   VAR_0++;
   *VAR_12 = VAR_8;
  } else {
   FUNC_0("Invalid option '%s'\n", *VAR_12);
   VAR_7 = 1;
  }
 }

 return;
}
