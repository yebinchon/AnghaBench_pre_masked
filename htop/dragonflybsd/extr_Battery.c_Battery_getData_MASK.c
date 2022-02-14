
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int life ;
typedef int acline ;
typedef int ACPresence ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*,size_t*,int *,int ) ;

void FUNC_1(double* VAR_3, ACPresence* VAR_4) {
   int VAR_5;
   size_t VAR_6 = sizeof(VAR_5);
   if (FUNC_0("hw.acpi.battery.life", &VAR_5, &VAR_6, ((void*)0), 0) == -1)
      *VAR_3 = -1;
   else
      *VAR_3 = VAR_5;

   int VAR_7;
   size_t VAR_8 = sizeof(VAR_7);
   if (FUNC_0("hw.acpi.acline", &VAR_7, &VAR_8, ((void*)0), 0) == -1)
      *VAR_4 = VAR_1;
   else
      *VAR_4 = VAR_7 == 0 ? VAR_0 : VAR_2;
}
