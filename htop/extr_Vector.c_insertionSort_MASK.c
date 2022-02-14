
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ (* Object_Compare ) (void*,void*) ;
typedef void Object ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(Object** VAR_1, int VAR_2, int VAR_3, Object_Compare VAR_4) {
   for (int VAR_5 = VAR_2+1; VAR_5 <= VAR_3; VAR_5++) {
      void* VAR_6 = VAR_1[VAR_5];
      int VAR_7 = VAR_5 - 1;
      while (VAR_7 >= VAR_2) {
         VAR_0++;
         if (VAR_4(VAR_1[VAR_7], VAR_6) <= 0)
            break;
         VAR_1[VAR_7+1] = VAR_1[VAR_7];
         VAR_7--;
      }
      VAR_1[VAR_7+1] = VAR_6;
   }
}
