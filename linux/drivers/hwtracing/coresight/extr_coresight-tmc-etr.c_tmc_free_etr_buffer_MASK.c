
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int idr_mutex; int idr; } ;
struct etr_perf_buffer {struct etr_buf* etr_buf; int pid; struct tmc_drvdata* drvdata; } ;
struct etr_buf {int refcount; } ;


 scalar_t__ FUNC_0 (int) ;
 struct etr_buf* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct etr_perf_buffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct etr_buf*) ;

__attribute__((used)) static void FUNC_7(void *VAR_0)
{
 struct etr_perf_buffer *VAR_1 = VAR_0;
 struct tmc_drvdata *VAR_2 = VAR_1->drvdata;
 struct etr_buf *VAR_3, *VAR_4 = VAR_1->etr_buf;

 if (!VAR_4)
  goto free_etr_perf_buffer;

 FUNC_3(&VAR_2->idr_mutex);

 if (!FUNC_5(&VAR_4->refcount)) {
  FUNC_4(&VAR_2->idr_mutex);
  goto free_etr_perf_buffer;
 }


 VAR_3 = FUNC_1(&VAR_2->idr, VAR_1->pid);
 FUNC_4(&VAR_2->idr_mutex);





 if (VAR_3 && FUNC_0(VAR_3 != VAR_4))
  goto free_etr_perf_buffer;

 FUNC_6(VAR_1->etr_buf);

free_etr_perf_buffer:
 FUNC_2(VAR_1);
}
