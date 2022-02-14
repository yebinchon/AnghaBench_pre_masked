
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rdma_hw_stats {int num_counters; char* name; struct rdma_hw_stats** attrs; int * names; int timestamp; } ;
struct kobject {int dummy; } ;
struct ib_port {struct rdma_hw_stats* hw_stats; struct rdma_hw_stats* hw_stats_ag; struct kobject kobj; } ;
struct TYPE_2__ {struct kobject kobj; } ;
struct ib_device {int (* get_hw_stats ) (struct ib_device*,struct rdma_hw_stats*,int ,int) ;struct rdma_hw_stats* hw_stats; struct rdma_hw_stats* hw_stats_ag; TYPE_1__ dev; struct rdma_hw_stats* (* alloc_hw_stats ) (struct ib_device*,int ) ;} ;
struct attribute_group {int num_counters; char* name; struct attribute_group** attrs; int * names; int timestamp; } ;


 int VAR_0 ;
 struct rdma_hw_stats* FUNC_0 (int,int ,int ) ;
 struct rdma_hw_stats* FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct rdma_hw_stats*) ;
 struct rdma_hw_stats* FUNC_3 (int,int ) ;
 struct rdma_hw_stats* FUNC_4 (struct ib_device*,int ) ;
 int FUNC_5 (struct ib_device*,struct rdma_hw_stats*,int ,int) ;
 int FUNC_6 (struct rdma_hw_stats*) ;
 int FUNC_7 (struct kobject*,struct rdma_hw_stats*) ;

__attribute__((used)) static void FUNC_8(struct ib_device *VAR_2, struct ib_port *VAR_3,
      u8 VAR_4)
{
 struct attribute_group *VAR_5;
 struct rdma_hw_stats *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = VAR_2->alloc_hw_stats(VAR_2, VAR_4);

 if (!VAR_6)
  return;

 if (!VAR_6->names || VAR_6->num_counters <= 0)
  goto err_free_stats;





 VAR_5 = FUNC_3(sizeof(*VAR_5) +
         sizeof(void *) * (VAR_6->num_counters + 2),
         VAR_0);
 if (!VAR_5)
  goto err_free_stats;

 VAR_8 = VAR_2->get_hw_stats(VAR_2, VAR_6, VAR_4,
       VAR_6->num_counters);
 if (VAR_8 != VAR_6->num_counters)
  goto err_free_hsag;

 VAR_6->timestamp = VAR_1;

 VAR_5->name = "hw_counters";
 VAR_5->attrs = (void *)((char *)VAR_5 + sizeof(*VAR_5));

 for (VAR_7 = 0; VAR_7 < VAR_6->num_counters; VAR_7++) {
  VAR_5->attrs[VAR_7] = FUNC_0(VAR_7, VAR_4, VAR_6->names[VAR_7]);
  if (!VAR_5->attrs[VAR_7])
   goto err;
  FUNC_6(VAR_5->attrs[VAR_7]);
 }


 VAR_5->attrs[VAR_7] = FUNC_1("lifespan", VAR_4);
 if (VAR_5->attrs[VAR_7])
  FUNC_6(VAR_5->attrs[VAR_7]);

 if (VAR_3) {
  struct kobject *VAR_9 = &VAR_3->kobj;
  VAR_8 = FUNC_7(VAR_9, VAR_5);
  if (VAR_8)
   goto err;
  VAR_3->hw_stats_ag = VAR_5;
  VAR_3->hw_stats = VAR_6;
 } else {
  struct kobject *VAR_10 = &VAR_2->dev.kobj;
  VAR_8 = FUNC_7(VAR_10, VAR_5);
  if (VAR_8)
   goto err;
  VAR_2->hw_stats_ag = VAR_5;
  VAR_2->hw_stats = VAR_6;
 }

 return;

err:
 for (; VAR_7 >= 0; VAR_7--)
  FUNC_2(VAR_5->attrs[VAR_7]);
err_free_hsag:
 FUNC_2(VAR_5);
err_free_stats:
 FUNC_2(VAR_6);
 return;
}
