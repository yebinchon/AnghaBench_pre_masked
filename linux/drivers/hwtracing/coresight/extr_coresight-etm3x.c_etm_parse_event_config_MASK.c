
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int config; scalar_t__ exclude_user; scalar_t__ exclude_kernel; } ;
struct perf_event {struct perf_event_attr attr; } ;
struct etm_config {int ctrl; scalar_t__ mode; } ;
struct etm_drvdata {int etmccer; struct etm_config config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct etm_config*) ;
 int FUNC_1 (struct etm_config*) ;
 int FUNC_2 (struct etm_config*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct etm_drvdata *VAR_6,
      struct perf_event *VAR_7)
{
 struct etm_config *VAR_8 = &VAR_6->config;
 struct perf_event_attr *VAR_9 = &VAR_7->attr;

 if (!VAR_9)
  return -VAR_0;


 FUNC_2(VAR_8, 0, sizeof(struct etm_config));

 if (VAR_9->exclude_kernel)
  VAR_8->mode = VAR_4;

 if (VAR_9->exclude_user)
  VAR_8->mode = VAR_5;


 FUNC_1(VAR_8);





 if (VAR_8->mode)
  FUNC_0(VAR_8);





 if (VAR_9->config & ~VAR_1)
  return -VAR_0;

 VAR_8->ctrl = VAR_9->config;







 if ((VAR_8->ctrl & VAR_3) &&
     !(VAR_6->etmccer & VAR_2))
  VAR_8->ctrl &= ~VAR_3;

 return 0;
}
