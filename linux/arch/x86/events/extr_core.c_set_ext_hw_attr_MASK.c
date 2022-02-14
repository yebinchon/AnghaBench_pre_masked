
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_attr {int config; int config1; } ;
struct perf_event {struct perf_event_attr attr; } ;
struct hw_perf_event {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int*** VAR_5 ;
 int *** VAR_6 ;
 int FUNC_1 (int,struct perf_event*) ;

__attribute__((used)) static inline int
FUNC_2(struct hw_perf_event *VAR_7, struct perf_event *VAR_8)
{
 struct perf_event_attr *VAR_9 = &VAR_8->attr;
 unsigned int VAR_10, VAR_11, VAR_12;
 u64 VAR_13, VAR_14;

 VAR_13 = VAR_9->config;

 VAR_10 = (VAR_13 >> 0) & 0xff;
 if (VAR_10 >= VAR_2)
  return -VAR_0;
 VAR_10 = FUNC_0(VAR_10, VAR_2);

 VAR_11 = (VAR_13 >> 8) & 0xff;
 if (VAR_11 >= VAR_3)
  return -VAR_0;
 VAR_11 = FUNC_0(VAR_11, VAR_3);

 VAR_12 = (VAR_13 >> 16) & 0xff;
 if (VAR_12 >= VAR_4)
  return -VAR_0;
 VAR_12 = FUNC_0(VAR_12, VAR_4);

 VAR_14 = VAR_5[VAR_10][VAR_11][VAR_12];

 if (VAR_14 == 0)
  return -VAR_1;

 if (VAR_14 == -1)
  return -VAR_0;

 VAR_7->config |= VAR_14;
 VAR_9->config1 = VAR_6[VAR_10][VAR_11][VAR_12];
 return FUNC_1(VAR_14, VAR_8);
}
