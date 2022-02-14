
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_proc {char* p_comm; } ;
typedef int kvm_t ;


 int FUNC_0 (size_t,size_t) ;
 char** FUNC_1 (int *,struct kinfo_proc*,int) ;
 char* FUNC_2 (size_t) ;
 size_t FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;

char *FUNC_6(kvm_t* VAR_0, struct kinfo_proc* VAR_1, int* VAR_2) {
   char *VAR_3, **VAR_4;
   size_t VAR_5 = 0, VAR_6;
   int VAR_7;





   VAR_4 = FUNC_1(VAR_0, VAR_1, 500);
   if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0)) {
      *VAR_2 = FUNC_4(VAR_1->p_comm);
      return FUNC_5(VAR_1->p_comm);
   }
   for (VAR_7 = 0; VAR_4[VAR_7] != ((void*)0); VAR_7++) {
      VAR_5 += FUNC_4(VAR_4[VAR_7]) + 1;
   }

   if ((VAR_3 = FUNC_2(VAR_5)) == ((void*)0)) {
      *VAR_2 = FUNC_4(VAR_1->p_comm);
      return FUNC_5(VAR_1->p_comm);
   }

   *VAR_3 = '\0';

   for (VAR_7 = 0; VAR_4[VAR_7] != ((void*)0); VAR_7++) {
      VAR_6 = FUNC_3(VAR_3, VAR_4[VAR_7], VAR_5);
      if (VAR_7 == 0) {

         *VAR_2 = FUNC_0(VAR_6, VAR_5-1);
      }

      FUNC_3(VAR_3, " ", VAR_5);
   }

   return VAR_3;
}
