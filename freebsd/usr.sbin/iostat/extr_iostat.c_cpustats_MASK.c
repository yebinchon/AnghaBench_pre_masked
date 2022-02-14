
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* cp_time; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,double) ;
 double FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2;
 double VAR_3;

 VAR_3 = 0.0;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  VAR_3 += VAR_1.cp_time[VAR_2];
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2)
  FUNC_0(" %2.0f",
         FUNC_1(100. * VAR_1.cp_time[VAR_2] / (VAR_3 ? VAR_3 : 1)));
}
