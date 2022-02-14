
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct kfd_topology_device {int list; int perf_props; int io_link_props; int cache_props; int mem_props; } ;


 int FUNC_0 (int *) ;
 struct kfd_topology_device* FUNC_1 (struct kfd_topology_device*) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (char*) ;

struct kfd_topology_device *FUNC_4(
    struct list_head *VAR_0)
{
 struct kfd_topology_device *VAR_1;

 VAR_1 = FUNC_1(VAR_1);
 if (!VAR_1) {
  FUNC_3("No memory to allocate a topology device");
  return ((void*)0);
 }

 FUNC_0(&VAR_1->mem_props);
 FUNC_0(&VAR_1->cache_props);
 FUNC_0(&VAR_1->io_link_props);
 FUNC_0(&VAR_1->perf_props);

 FUNC_2(&VAR_1->list, VAR_0);

 return VAR_1;
}
