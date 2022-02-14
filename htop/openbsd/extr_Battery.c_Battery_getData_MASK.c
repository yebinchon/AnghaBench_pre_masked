
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensordev {int dummy; } ;
struct sensor {double value; } ;
typedef double ACPresence ;


 double VAR_0 ;


 int FUNC_0 (char*,int*,struct sensordev*,size_t*) ;
 int FUNC_1 (int*,int,struct sensor*,size_t*,int *,int ) ;

void FUNC_2(double* VAR_1, ACPresence* VAR_2) {
   static int VAR_3[] = {129, 128, 0, 0, 0};
   struct sensor VAR_4;
   size_t VAR_5 = sizeof(struct sensor);
   struct sensordev VAR_6;
   size_t VAR_7 = sizeof(struct sensordev);

   bool VAR_8 = FUNC_0("acpibat0", VAR_3, &VAR_6, &VAR_7);

   *VAR_1 = -1;
   if (VAR_8) {

      VAR_3[3] = 7;
      VAR_3[4] = 0;
      double VAR_9 = 0;
      if (FUNC_1(VAR_3, 5, &VAR_4, &VAR_5, ((void*)0), 0) != -1) {
         VAR_9 = VAR_4.value;
      }
      if (VAR_9 > 0) {

         VAR_3[3] = 7;
         VAR_3[4] = 3;
         if (FUNC_1(VAR_3, 5, &VAR_4, &VAR_5, ((void*)0), 0) != -1) {
            double VAR_10 = VAR_4.value;
            *VAR_1 = 100*(VAR_10 / VAR_9);
            if (VAR_10 >= VAR_9) {
               *VAR_1 = 100;
            }
         }
      }
   }

   VAR_8 = FUNC_0("acpiac0", VAR_3, &VAR_6, &VAR_7);

   *VAR_2 = VAR_0;
   if (VAR_8) {
      VAR_3[3] = 9;
      VAR_3[4] = 0;
      if (FUNC_1(VAR_3, 5, &VAR_4, &VAR_5, ((void*)0), 0) != -1) {
         *VAR_2 = VAR_4.value;
      }
   }
}
