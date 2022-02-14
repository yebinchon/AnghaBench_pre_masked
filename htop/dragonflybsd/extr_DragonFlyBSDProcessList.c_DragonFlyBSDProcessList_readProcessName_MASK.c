
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {int kp_comm; } ;
typedef int kvm_t ;


 char** FUNC_0 (int *,struct kinfo_proc*,int ) ;
 char* FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (int ) ;

char* FUNC_5(kvm_t* VAR_0, struct kinfo_proc* VAR_1, int* VAR_2) {
   char** VAR_3 = FUNC_0(VAR_0, VAR_1, 0);
   if (!VAR_3) {
      return FUNC_4(VAR_1->kp_comm);
   }
   int VAR_4 = 0;
   for (int VAR_5 = 0; VAR_3[VAR_5]; VAR_5++) {
      VAR_4 += FUNC_2(VAR_3[VAR_5]) + 1;
   }
   char* VAR_6 = FUNC_3(VAR_4);
   char* VAR_7 = VAR_6;
   *VAR_2 = 0;
   for (int VAR_8 = 0; VAR_3[VAR_8]; VAR_8++) {
      VAR_7 = FUNC_1(VAR_7, VAR_3[VAR_8]);
      if (!*VAR_2) {
         *VAR_2 = VAR_7 - VAR_6;
      }
      *VAR_7 = ' ';
      VAR_7++;
   }
   VAR_7--;
   *VAR_7 = '\0';
   return VAR_6;
}
