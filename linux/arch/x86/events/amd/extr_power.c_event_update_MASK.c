
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct hw_perf_event {scalar_t__ pwr_acc; scalar_t__ ptsc; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 u64 VAR_6, VAR_7, VAR_8, VAR_9;
 u64 VAR_10, VAR_11;

 VAR_6 = VAR_5->pwr_acc;
 VAR_8 = VAR_5->ptsc;
 FUNC_2(VAR_0, VAR_7);
 FUNC_2(VAR_1, VAR_9);





 if (VAR_7 < VAR_6) {
  VAR_10 = VAR_3 + VAR_7;
  VAR_10 -= VAR_6;
 } else
  VAR_10 = VAR_7 - VAR_6;

 VAR_10 *= VAR_2 * 1000;
 VAR_11 = VAR_9 - VAR_8;

 FUNC_0(VAR_10, VAR_11);
 FUNC_1(VAR_10, &VAR_4->count);
}
