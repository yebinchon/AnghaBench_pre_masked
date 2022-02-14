
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {scalar_t__ mode; int pid; int spinlock; scalar_t__ perf_buf; } ;
struct perf_output_handle {int head; } ;
struct etr_perf_buffer {int pid; scalar_t__ etr_buf; int head; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {int refcnt; TYPE_1__ dev; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct etr_perf_buffer*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct tmc_drvdata* FUNC_3 (int ) ;
 struct etr_perf_buffer* FUNC_4 (struct perf_output_handle*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct tmc_drvdata*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct coresight_device *VAR_4, void *VAR_5)
{
 int VAR_6 = 0;
 pid_t VAR_7;
 unsigned long VAR_8;
 struct tmc_drvdata *VAR_9 = FUNC_3(VAR_4->dev.parent);
 struct perf_output_handle *VAR_10 = VAR_5;
 struct etr_perf_buffer *VAR_11 = FUNC_4(VAR_10);

 FUNC_5(&VAR_9->spinlock, VAR_8);

 if (VAR_9->mode == VAR_1) {
  VAR_6 = -VAR_2;
  goto unlock_out;
 }

 if (FUNC_1(!VAR_11 || !VAR_11->etr_buf)) {
  VAR_6 = -VAR_3;
  goto unlock_out;
 }


 VAR_7 = VAR_11->pid;


 if (VAR_9->pid != -1 && VAR_9->pid != VAR_7) {
  VAR_6 = -VAR_2;
  goto unlock_out;
 }

 VAR_11->head = FUNC_0(VAR_10->head, VAR_11);





 if (VAR_9->pid == VAR_7) {
  FUNC_2(VAR_4->refcnt);
  goto unlock_out;
 }

 VAR_6 = FUNC_7(VAR_9, VAR_11->etr_buf);
 if (!VAR_6) {

  VAR_9->pid = VAR_7;
  VAR_9->mode = VAR_0;
  VAR_9->perf_buf = VAR_11->etr_buf;
  FUNC_2(VAR_4->refcnt);
 }

unlock_out:
 FUNC_6(&VAR_9->spinlock, VAR_8);
 return VAR_6;
}
