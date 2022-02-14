
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int dummy; } ;
struct perf_event {int cpu; } ;
struct etr_buf {int dummy; } ;


 struct etr_buf* FUNC_0 (struct tmc_drvdata*,struct perf_event*,int,void**,int) ;
 struct etr_buf* FUNC_1 (struct tmc_drvdata*,struct perf_event*,int,void**,int) ;

__attribute__((used)) static struct etr_buf *
FUNC_2(struct tmc_drvdata *VAR_0, struct perf_event *VAR_1,
   int VAR_2, void **VAR_3, bool VAR_4)
{
 if (VAR_1->cpu == -1)
  return FUNC_1(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4);

 return FUNC_0(VAR_0, VAR_1, VAR_2,
      VAR_3, VAR_4);
}
