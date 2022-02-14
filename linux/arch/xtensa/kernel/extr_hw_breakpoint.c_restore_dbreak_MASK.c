
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct perf_event*) ;
 struct perf_event** FUNC_2 (int ) ;
 int VAR_2 ;

void FUNC_3(void)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
  struct perf_event *VAR_4 = FUNC_2(VAR_2)[VAR_3];

  if (VAR_4)
   FUNC_1(VAR_3, VAR_4);
 }
 FUNC_0(VAR_0);
}
