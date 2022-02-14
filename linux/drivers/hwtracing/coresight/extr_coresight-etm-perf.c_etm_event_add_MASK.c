
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct hw_perf_event *VAR_6 = &VAR_3->hw;

 if (VAR_4 & VAR_1) {
  FUNC_0(VAR_3, 0);
  if (VAR_6->state & VAR_2)
   VAR_5 = -VAR_0;
 } else {
  VAR_6->state = VAR_2;
 }

 return VAR_5;
}
