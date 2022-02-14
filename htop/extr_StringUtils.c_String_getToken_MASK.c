
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned short FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char*) ;

char* FUNC_2(const char* VAR_1, const unsigned short int VAR_2) {
   const unsigned short int VAR_3 = FUNC_0(VAR_1);
   char VAR_4 = 0;
   unsigned short int VAR_5 = 0;
   char VAR_6[50];

   unsigned short int VAR_7 = 0;

   for (unsigned short int VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
      char VAR_9 = VAR_4;
      VAR_4 = VAR_1[VAR_8] == ' ' ? 0:1;

      if (VAR_9 == 0 && VAR_4 == 1)
         VAR_5++;

      if(VAR_4 == 1){
         if (VAR_5 == VAR_2 && VAR_1[VAR_8] != ' ' && VAR_1[VAR_8] != '\0' && VAR_1[VAR_8] != '\n' && VAR_1[VAR_8] != (char)VAR_0) {
            VAR_6[VAR_7] = VAR_1[VAR_8];
            VAR_7++;
         }
      }
   }

   VAR_6[VAR_7] = '\0';
   return((char*)FUNC_1(VAR_6));
}
