
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * CFTypeRef ;
typedef scalar_t__ CFStringRef ;
typedef int * CFDictionaryRef ;
typedef int * CFArrayRef ;
typedef int ACPresence ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__,int ,double*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ) ;
 int * FUNC_8 () ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_11(double* VAR_11, ACPresence* VAR_12) {
   CFTypeRef VAR_13 = FUNC_8();

   *VAR_11 = -1;
   *VAR_12 = VAR_1;

   if(((void*)0) == VAR_13) {
      return;
   }

   if(VAR_13 != ((void*)0)) {
      CFArrayRef VAR_14 = FUNC_9(VAR_13);
      CFDictionaryRef VAR_15 = ((void*)0);
      int VAR_16;

      if(((void*)0) == VAR_14) {
         FUNC_4(VAR_13);

         return;
      }

      VAR_16 = FUNC_0(VAR_14);


      for(int VAR_17 = 0; VAR_17 < VAR_16 && VAR_15 == ((void*)0); ++VAR_17) {
         CFDictionaryRef VAR_18 = FUNC_10(VAR_13,
                                     FUNC_1(VAR_14, VAR_17));
         CFStringRef VAR_19;

         if(((void*)0) != VAR_18) {
            VAR_19 = (CFStringRef) FUNC_2(VAR_18,
                   FUNC_6(VAR_10));

            if(VAR_3 == FUNC_7(VAR_19, FUNC_6(VAR_7), 0)) {
               FUNC_5(VAR_18);
               VAR_15 = VAR_18;
            }
         }
      }

      if(((void*)0) != VAR_15) {

         CFStringRef VAR_20 = FUNC_2(VAR_15, FUNC_6(VAR_9));

         *VAR_12 = (VAR_3 == FUNC_7(VAR_20, FUNC_6(VAR_5), 0))
                 ? VAR_2
                 : VAR_0;


         double VAR_21;
         double VAR_22;

         FUNC_3(FUNC_2(VAR_15, FUNC_6(VAR_6)),
                 VAR_4, &VAR_21);
         FUNC_3(FUNC_2(VAR_15, FUNC_6(VAR_8)),
                 VAR_4, &VAR_22);

         *VAR_11 = (VAR_21 * 100.0) / VAR_22;

         FUNC_4(VAR_15);
      }

      FUNC_4(VAR_14);
      FUNC_4(VAR_13);
   }
}
