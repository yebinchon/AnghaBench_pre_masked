
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rdma_restrack_entry {int dummy; } ;
struct TYPE_2__ {int (* fill_res_entry ) (struct sk_buff*,struct rdma_restrack_entry*) ;} ;
struct ib_device {TYPE_1__ ops; } ;


 int FUNC_0 (struct sk_buff*,struct rdma_restrack_entry*) ;

__attribute__((used)) static bool FUNC_1(struct ib_device *VAR_0, struct sk_buff *VAR_1,
      struct rdma_restrack_entry *VAR_2)
{
 if (!VAR_0->ops.fill_res_entry)
  return 0;
 return VAR_0->ops.fill_res_entry(VAR_1, VAR_2);
}
