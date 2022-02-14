
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
typedef int ProcessList ;
typedef int LinuxProcessList ;


 int FUNC_0 (int *,int ,int *,double,struct timeval) ;
 double FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct timeval*,int *) ;

void FUNC_4(ProcessList* VAR_1) {
   LinuxProcessList* VAR_2 = (LinuxProcessList*) VAR_1;

   FUNC_2(VAR_1);
   double VAR_3 = FUNC_1(VAR_2);

   struct timeval VAR_4;
   FUNC_3(&VAR_4, ((void*)0));
   FUNC_0(VAR_2, VAR_0, ((void*)0), VAR_3, VAR_4);
}
