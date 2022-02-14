
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct device {int dummy; } ;
struct crypto_engine {int rt; int running; int busy; int idling; int cur_req_prepared; TYPE_1__* kworker; int pump_requests; int name; int queue_lock; int queue; struct device* priv_data; struct device* dev; } ;
struct TYPE_3__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 char* FUNC_4 (struct device*) ;
 struct crypto_engine* FUNC_5 (struct device*,int,int ) ;
 TYPE_1__* FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,struct sched_param*) ;
 int FUNC_9 (int ,int,char*,char*) ;
 int FUNC_10 (int *) ;

struct crypto_engine *FUNC_11(struct device *VAR_5, bool VAR_6)
{
 struct sched_param VAR_7 = { .sched_priority = VAR_2 / 2 };
 struct crypto_engine *VAR_8;

 if (!VAR_5)
  return ((void*)0);

 VAR_8 = FUNC_5(VAR_5, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->dev = VAR_5;
 VAR_8->rt = VAR_6;
 VAR_8->running = 0;
 VAR_8->busy = 0;
 VAR_8->idling = 0;
 VAR_8->cur_req_prepared = 0;
 VAR_8->priv_data = VAR_5;
 FUNC_9(VAR_8->name, sizeof(VAR_8->name),
   "%s-engine", FUNC_4(VAR_5));

 FUNC_1(&VAR_8->queue, VAR_0);
 FUNC_10(&VAR_8->queue_lock);

 VAR_8->kworker = FUNC_6(0, "%s", VAR_8->name);
 if (FUNC_0(VAR_8->kworker)) {
  FUNC_2(VAR_5, "failed to create crypto request pump task\n");
  return ((void*)0);
 }
 FUNC_7(&VAR_8->pump_requests, VAR_4);

 if (VAR_8->rt) {
  FUNC_3(VAR_5, "will run requests pump with realtime priority\n");
  FUNC_8(VAR_8->kworker->task, VAR_3, &VAR_7);
 }

 return VAR_8;
}
