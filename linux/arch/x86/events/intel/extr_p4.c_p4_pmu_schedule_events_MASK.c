
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct p4_event_bind {int * escr_msr; } ;
struct hw_perf_event {int idx; scalar_t__ config; } ;
struct cpu_hw_events {TYPE_1__** event_list; } ;
struct TYPE_2__ {struct hw_perf_event hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long*,int ) ;
 struct p4_event_bind* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int) ;
 int FUNC_6 (unsigned int,unsigned long*,struct p4_event_bind*) ;
 int FUNC_7 (struct hw_perf_event*,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (int,unsigned long*) ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int,unsigned long*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct cpu_hw_events *VAR_3, int VAR_4, int *VAR_5)
{
 unsigned long VAR_6[FUNC_0(VAR_2)];
 unsigned long VAR_7[FUNC_0(VAR_1)];
 int VAR_8 = FUNC_10();
 struct hw_perf_event *VAR_9;
 struct p4_event_bind *VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;
 u64 VAR_16;
 int VAR_17;

 FUNC_1(VAR_6, VAR_2);
 FUNC_1(VAR_7, VAR_1);

 for (VAR_11 = 0, VAR_13 = VAR_4; VAR_11 < VAR_4; VAR_11++, VAR_13--) {

  VAR_9 = &VAR_3->event_list[VAR_11]->hw;
  VAR_12 = FUNC_5(VAR_8);
  VAR_17 = 0;

again:





  if (VAR_17 > 2)
   goto done;

  VAR_10 = FUNC_2(VAR_9->config);
  VAR_15 = FUNC_4(VAR_10->escr_msr[VAR_12]);
  if (FUNC_12(VAR_15 == -1))
   goto done;

  if (VAR_9->idx != -1 && !FUNC_8(VAR_9->config, VAR_8)) {
   VAR_14 = VAR_9->idx;
   if (VAR_5)
    VAR_5[VAR_11] = VAR_9->idx;
   goto reserve;
  }

  VAR_14 = FUNC_6(VAR_12, VAR_6, VAR_10);
  if (VAR_14 == -1 || FUNC_11(VAR_15, VAR_7)) {



   VAR_16 = FUNC_3(VAR_9->config);
   if (!VAR_16)
    goto done;
   VAR_9->config = VAR_16;
   VAR_17++;
   goto again;
  }
  if (FUNC_8(VAR_9->config, VAR_8))
   VAR_9->idx = -1;
  FUNC_7(VAR_9, VAR_8);
  if (VAR_5)
   VAR_5[VAR_11] = VAR_14;
reserve:
  FUNC_9(VAR_14, VAR_6);
  FUNC_9(VAR_15, VAR_7);
 }

done:
 return VAR_13 ? -VAR_0 : 0;
}
