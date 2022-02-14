
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int dummy; } ;
struct perf_event {int cpu; } ;
struct etr_perf_buffer {struct etr_buf* etr_buf; struct tmc_drvdata* drvdata; } ;
struct etr_buf {int dummy; } ;


 int VAR_0 ;
 struct etr_perf_buffer* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct etr_buf*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 struct etr_buf* FUNC_3 (struct tmc_drvdata*,struct perf_event*,int,void**,int) ;
 int FUNC_4 (struct etr_perf_buffer*) ;
 struct etr_perf_buffer* FUNC_5 (int,int ,int) ;

__attribute__((used)) static struct etr_perf_buffer *
FUNC_6(struct tmc_drvdata *VAR_3, struct perf_event *VAR_4,
         int VAR_5, void **VAR_6, bool VAR_7)
{
 int VAR_8;
 struct etr_buf *VAR_9;
 struct etr_perf_buffer *VAR_10;

 VAR_8 = (VAR_4->cpu == -1) ? VAR_2 : FUNC_2(VAR_4->cpu);

 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_1, VAR_8);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!FUNC_1(VAR_9))
  goto done;

 FUNC_4(VAR_10);
 return FUNC_0(-VAR_0);

done:




 VAR_10->drvdata = VAR_3;
 VAR_10->etr_buf = VAR_9;

 return VAR_10;
}
