
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct elevator_queue* elevator; int node; } ;
struct elevator_type {int dummy; } ;
struct elevator_queue {struct deadline_data* elevator_data; int kobj; } ;
struct deadline_data {int front_merges; int dispatch; int zone_lock; int lock; int fifo_batch; int writes_starved; int * fifo_expire; void** sort_list; int * fifo_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct elevator_queue* FUNC_1 (struct request_queue*,struct elevator_type*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 struct deadline_data* FUNC_3 (int,int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct request_queue *VAR_9, struct elevator_type *VAR_10)
{
 struct deadline_data *VAR_11;
 struct elevator_queue *VAR_12;

 VAR_12 = FUNC_1(VAR_9, VAR_10);
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_1, VAR_9->node);
 if (!VAR_11) {
  FUNC_2(&VAR_12->kobj);
  return -VAR_0;
 }
 VAR_12->elevator_data = VAR_11;

 FUNC_0(&VAR_11->fifo_list[VAR_3]);
 FUNC_0(&VAR_11->fifo_list[VAR_4]);
 VAR_11->sort_list[VAR_3] = VAR_2;
 VAR_11->sort_list[VAR_4] = VAR_2;
 VAR_11->fifo_expire[VAR_3] = VAR_6;
 VAR_11->fifo_expire[VAR_4] = VAR_7;
 VAR_11->writes_starved = VAR_8;
 VAR_11->front_merges = 1;
 VAR_11->fifo_batch = VAR_5;
 FUNC_4(&VAR_11->lock);
 FUNC_4(&VAR_11->zone_lock);
 FUNC_0(&VAR_11->dispatch);

 VAR_9->elevator = VAR_12;
 return 0;
}
