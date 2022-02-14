
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int idx; int config_base; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct p4_event_bind {int* escr_msr; int opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned int FUNC_6 (int ) ;
 struct p4_event_bind* VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 int VAR_6 = FUNC_7(VAR_5->config);
 u64 VAR_7 = FUNC_5(FUNC_3(VAR_5->config));
 unsigned int VAR_8 = FUNC_6(VAR_5->config);
 struct p4_event_bind *VAR_9;
 u64 VAR_10, VAR_11;

 VAR_9 = &VAR_3[VAR_8];
 VAR_10 = VAR_9->escr_msr[VAR_6];





 FUNC_2(FUNC_8(VAR_5->config));
 FUNC_2(VAR_5->idx == 1);


 VAR_7 &= ~VAR_2;
 VAR_7 |= FUNC_0(FUNC_1(VAR_9->opcode));

 VAR_11 = FUNC_4(VAR_5->config);





 FUNC_9(VAR_5->config);

 (void)FUNC_10(VAR_10, VAR_7);
 (void)FUNC_10(VAR_5->config_base,
    (VAR_11 & ~VAR_1) | VAR_0);
}
