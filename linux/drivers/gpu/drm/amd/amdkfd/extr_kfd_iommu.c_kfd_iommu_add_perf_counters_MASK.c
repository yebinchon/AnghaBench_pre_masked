
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int capability; } ;
struct kfd_topology_device {int perf_props; TYPE_1__ node_props; } ;
struct kfd_perf_properties {int max_concurrent; int list; int block_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 struct kfd_perf_properties* FUNC_3 (struct kfd_perf_properties*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct kfd_topology_device *VAR_2)
{
 struct kfd_perf_properties *VAR_3;

 if (!(VAR_2->node_props.capability & VAR_1))
  return 0;

 if (!FUNC_2())
  return 0;

 VAR_3 = FUNC_3(VAR_3);
 if (!VAR_3)
  return -VAR_0;
 FUNC_5(VAR_3->block_name, "iommu");
 VAR_3->max_concurrent = FUNC_0(0) *
  FUNC_1(0);
 FUNC_4(&VAR_3->list, &VAR_2->perf_props);

 return 0;
}
