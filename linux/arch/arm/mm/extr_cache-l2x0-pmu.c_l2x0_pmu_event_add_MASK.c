
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct perf_event** VAR_5 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,int ) ;
 int FUNC_3 () ;
 int VAR_6 ;
 scalar_t__ FUNC_4 () ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_8, int VAR_9)
{
 struct hw_perf_event *VAR_10 = &VAR_8->hw;
 int VAR_11 = FUNC_3();

 if (VAR_11 == -1)
  return -VAR_0;






 if (FUNC_4() == 0)
  FUNC_0(&VAR_6, VAR_7,
         VAR_1);

 VAR_5[VAR_11] = VAR_8;
 VAR_10->idx = VAR_11;

 FUNC_1(VAR_8);

 VAR_10->state = VAR_3 | VAR_4;

 if (VAR_9 & VAR_2)
  FUNC_2(VAR_8, 0);

 return 0;
}
