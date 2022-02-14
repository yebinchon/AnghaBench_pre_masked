
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_qos {TYPE_1__* ops; void* debugfs_dir; struct request_queue* q; int id; } ;
struct request_queue {void* rqos_debugfs_dir; void* debugfs_dir; } ;
struct TYPE_2__ {int debugfs_attrs; } ;


 void* FUNC_0 (char const*,void*) ;
 int FUNC_1 (void*,struct rq_qos*,int ) ;
 char* FUNC_2 (int ) ;

void FUNC_3(struct rq_qos *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->q;
 const char *VAR_2 = FUNC_2(VAR_0->id);

 if (VAR_0->debugfs_dir || !VAR_0->ops->debugfs_attrs)
  return;

 if (!VAR_1->rqos_debugfs_dir)
  VAR_1->rqos_debugfs_dir = FUNC_0("rqos",
        VAR_1->debugfs_dir);

 VAR_0->debugfs_dir = FUNC_0(VAR_2,
            VAR_0->q->rqos_debugfs_dir);

 FUNC_1(VAR_0->debugfs_dir, VAR_0, VAR_0->ops->debugfs_attrs);
}
