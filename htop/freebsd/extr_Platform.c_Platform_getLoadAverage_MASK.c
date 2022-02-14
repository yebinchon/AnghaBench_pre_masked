
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loadavg {double fscale; scalar_t__* ldavg; } ;
typedef int loadAverage ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int,struct loadavg*,size_t*,int *,int ) ;

void FUNC_1(double* VAR_2, double* VAR_3, double* VAR_4) {
   struct loadavg VAR_5;
   int VAR_6[2] = { VAR_0, VAR_1 };
   size_t VAR_7 = sizeof(VAR_5);

   int VAR_8 = FUNC_0(VAR_6, 2, &VAR_5, &VAR_7, ((void*)0), 0);
   if (VAR_8) {
      *VAR_2 = 0;
      *VAR_3 = 0;
      *VAR_4 = 0;
      return;
   }
   *VAR_2 = (double) VAR_5.ldavg[0] / VAR_5.fscale;
   *VAR_3 = (double) VAR_5.ldavg[1] / VAR_5.fscale;
   *VAR_4 = (double) VAR_5.ldavg[2] / VAR_5.fscale;
}
