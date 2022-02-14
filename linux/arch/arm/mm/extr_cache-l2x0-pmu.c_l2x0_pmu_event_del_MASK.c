
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {size_t idx; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct perf_event*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;

 FUNC_1(VAR_3, VAR_0);

 VAR_1[VAR_5->idx] = ((void*)0);
 VAR_5->idx = -1;

 if (FUNC_2() == 0)
  FUNC_0(&VAR_2);
}
