
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double* cp_time; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (char*,double,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 double VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
  VAR_8 += VAR_6.cp_time[VAR_9];
 if (VAR_8 > 0)
  VAR_7 = 100.0 / VAR_8;
 else
  VAR_7 = 0.0;
 VAR_10 = 0;
 FUNC_2("cpu-statistics");
 FUNC_0("user", (VAR_6.cp_time[VAR_5] + VAR_6.cp_time[VAR_3]) * VAR_7,
     &VAR_10);
 FUNC_0("system", (VAR_6.cp_time[VAR_4] + VAR_6.cp_time[VAR_2]) * VAR_7,
     &VAR_10);
 FUNC_0("idle", VAR_6.cp_time[VAR_1] * VAR_7, &VAR_10);
 FUNC_1("cpu-statistics");
}
