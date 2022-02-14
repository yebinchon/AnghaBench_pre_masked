
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int config; scalar_t__ exclude_user; scalar_t__ exclude_kernel; } ;
struct perf_event {struct perf_event_attr attr; } ;
struct etmv4_config {int cfg; int ccctlr; int mode; } ;
struct etmv4_drvdata {scalar_t__ retstack; struct etmv4_config config; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct etmv4_drvdata*) ;
 int FUNC_2 (struct etmv4_config*) ;
 int FUNC_3 (struct etmv4_drvdata*,struct perf_event*) ;
 int FUNC_4 (struct etmv4_config*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct etmv4_drvdata *VAR_9,
       struct perf_event *VAR_10)
{
 int VAR_11 = 0;
 struct etmv4_config *VAR_12 = &VAR_9->config;
 struct perf_event_attr *VAR_13 = &VAR_10->attr;

 if (!VAR_13) {
  VAR_11 = -VAR_0;
  goto out;
 }


 FUNC_4(VAR_12, 0, sizeof(struct etmv4_config));

 if (VAR_13->exclude_kernel)
  VAR_12->mode = VAR_3;

 if (VAR_13->exclude_user)
  VAR_12->mode = VAR_4;


 FUNC_2(VAR_12);


 VAR_11 = FUNC_3(VAR_9, VAR_10);
 if (VAR_11)
  goto out;


 if (VAR_13->config & FUNC_0(VAR_6)) {
  VAR_12->cfg |= FUNC_0(4);

  VAR_12->ccctlr = VAR_2;
 }
 if (VAR_13->config & FUNC_0(VAR_8)) {





  VAR_11 = FUNC_1(VAR_9);





  if (VAR_11)
   goto out;


  VAR_12->cfg |= FUNC_0(11);
 }

 if (VAR_13->config & FUNC_0(VAR_5))

  VAR_12->cfg |= FUNC_0(VAR_1);


 if ((VAR_13->config & FUNC_0(VAR_7)) && VAR_9->retstack)

  VAR_12->cfg |= FUNC_0(12);

out:
 return VAR_11;
}
