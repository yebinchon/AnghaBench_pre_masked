
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int argmax ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int*,int,...) ;
 char* FUNC_5 (size_t) ;

char* FUNC_6(pid_t VAR_3) {
   char* VAR_4 = ((void*)0);

   int VAR_5;
   size_t VAR_6 = sizeof(VAR_5);

   int VAR_7[3];
   VAR_7[0] = VAR_0;
   VAR_7[1] = VAR_1;
   if (FUNC_4(VAR_7, 2, &VAR_5, &VAR_6, 0, 0) == 0) {
      char* VAR_8 = FUNC_5(VAR_5);
      if (VAR_8) {
         VAR_7[0] = VAR_0;
         VAR_7[1] = VAR_2;
         VAR_7[2] = VAR_3;
         size_t VAR_9 = VAR_5;
         if (FUNC_4(VAR_7, 3, VAR_8, &VAR_9, 0, 0) == 0) {
            if (VAR_9 > sizeof(int)) {
               char *VAR_10 = VAR_8, *VAR_11 = VAR_8 + VAR_9;
               int VAR_12 = *(int*)VAR_10;
               VAR_10 += sizeof(int);


               VAR_10 = FUNC_2(VAR_10, 0)+1;


               while(!*VAR_10 && VAR_10 < VAR_11)
                  ++VAR_10;


               for (; VAR_12-- && VAR_10 < VAR_11; VAR_10 = FUNC_3(VAR_10, 0)+1)
                  ;


               while(!*VAR_10 && VAR_10 < VAR_11)
                  ++VAR_10;

               size_t VAR_13 = VAR_11 - VAR_10;
               VAR_4 = FUNC_5(VAR_13+2);
               FUNC_1(VAR_4, VAR_10, VAR_13);
               VAR_4[VAR_13] = 0;
               VAR_4[VAR_13+1] = 0;
            }
         }
         FUNC_0(VAR_8);
      }
   }

   return VAR_4;
}
